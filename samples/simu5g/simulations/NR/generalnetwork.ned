package simu5g.simulations.NR;
import inet.node.inet.*;
import inet.node.ethernet.EthernetSwitch;
import inet.node.ethernet.Eth10G;
import inet.networklayer.configurator.ipv4.Ipv4NetworkConfigurator;
import inet.networklayer.configurator.ipv4.Ipv4NetworkConfigurator;
import inet.networklayer.ipv4.RoutingTableRecorder;
import inet.node.ethernet.Eth10G;
import inet.node.inet.Router;
import inet.node.inet.StandardHost;
import inet.physicallayer.wireless.ieee80211.packetlevel.Ieee80211ScalarRadioMedium;
import simu5g.common.binder.Binder;
import simu5g.common.carrierAggregation.CarrierAggregation;
import simu5g.nodes.Upf;
import simu5g.nodes.NR.gNodeB;
import simu5g.nodes.NR.NRUe;
import simu5g.nodes.backgroundCell.BackgroundCell;
import simu5g.world.radio.LteChannelControl;


// ---------- channels ----------
channel Eth100M extends ned.DatarateChannel { delay = 10us; datarate = 100Mbps; }
channel Eth1G   extends ned.DatarateChannel { delay =  5us; datarate =   1Gbps; }
channel SatLink extends ned.DatarateChannel { delay = 500ms; datarate = 100Mbps; }  // GEO hop

// ---------- compound network ----------
network Hybrid5GSatNetwork
{
    parameters:
        int numUE       = default(10);   // 10 phones, 10 PCs
        int numHosts    = default(10);
        int numIoT      = default(100);
        int numAircraft = default(3);
        int numSat      = default(6);
        int half = int(ceil(numIoT / 2.0));
    submodules:
        routingRecorder: RoutingTableRecorder {
            @display("p=50,75;is=s");
        }
        carrierAggregation: CarrierAggregation {
            @display("p=50.993748,258.7;is=s");
        }
        channelControl: LteChannelControl {
            @display("p=50,25;is=s");
        }
        binder: Binder {
            @display("p=50,175;is=s");
        }
        radioMedium:  Ieee80211ScalarRadioMedium { }
        configurator: Ipv4NetworkConfigurator    { @display("p=100,50"); }

        upf: Upf                                 { @display("p=500,350"); } // ← new
        iupf: Upf                                 { @display("p=500,350"); } // ← new

        gnb1: gNodeB                              { @display("i=block/cell;p=400,200;i2=,cyan;p2=600,200"); }
        gnb2: gNodeB                              { @display("i=block/cell;p=400,200;i2=,cyan;p2=600,200"); }

        ue[numUE]:   NRUe                        { @display("i=device/phone;p=rand"); }
        host[numHosts]: StandardHost             { @display("i=device/pc;p=rand"); }

        iot[numIoT]: StandardHost                { @display("i=device/sensor;p=rand"); }

        router[2]: Router                        { @display("i=router;p=250,450;i2=router2;p=750,450"); }

        switch1: EthernetSwitch                    { @display("p=250,300"); }
        switch2: EthernetSwitch                     { @display("p=750,300"); }

        // Fan-out for SGi/N6 so two campus routers can share the UPF
        sgiSwitch: EthernetSwitch                   { @display("p=500,450"); }

        aircraft[numAircraft]: StandardHost      { @display("i=vehicle/airplane;p=rand"); }
        sat[numSat]:        StandardHost         { @display("i=weather/satellite;p=rand"); }

    connections allowunconnected:
        //* SGi/N6 fan-out: UPF ⇄ sgiSwitch ⇄ Both routers */
        upf.filterGate      <--> Eth1G <--> sgiSwitch.ethg++;
        sgiSwitch.ethg++    <--> Eth1G <--> router[0].pppg++;
        sgiSwitch.ethg++    <--> Eth1G <--> router[1].pppg++;

        //* Routers ↔ campus switches */
        router[0].ethg++ <--> Eth1G <--> switch1.ethg++;
        router[1].ethg++ <--> Eth1G <--> switch2.ethg++;

        //* Hosts on campus #1 (10 PCs) */
        for i=0..numHosts-1 {
            host[i].ethg++ <--> Eth100M <--> switch1.ethg++;
        }

        //* IoT split 50 / 50 over the two campuses */
// Divide once, convert to int (rounds up for odd counts)


        for i = 0 .. half - 1 {
            iot[i].ethg++ <--> Eth100M <--> switch1.ethg++;
}

        for i = half .. numIoT - 1 {
            iot[i].ethg++ <--> Eth100M <--> switch2.ethg++;
}

        //* gNBs ↔ UPF (N3 GTP-U bearers) */
        upf.pppg++ <--> Eth10G <--> iupf.pppg++;
        iupf.pppg++ <--> Eth10G <--> gnb1.ppp;
        iupf.pppg++ <--> Eth10G <--> gnb2.ppp;
        // ----------------------------------------------------
        // Air/space fabric – 6-spine / 3-leaf topology
        // ----------------------------------------------------

        // 1) Ground access: each aircraft leaf gets a Fast-Ethernet hop
        //    to a router, alternating between campus-1 and campus-2.
        for i = 0 .. numAircraft - 1 {
            router[i % 2].pppg++ <--> Eth100M <--> aircraft[i].pppg++;
        }

        // 2) Spine–leaf mesh: every aircraft leaf connects to every
        //    satellite spine over its own GEO link.
        for i = 0 .. numAircraft - 1, for j = 0 .. numSat - 1 {
            aircraft[i].pppg++ <--> SatLink <--> sat[j].pppg++;
        }
}