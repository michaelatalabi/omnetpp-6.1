//
// Generated file, do not edit! Created by opp_msgtool 6.1 from apps/d2dMultihop/MultihopD2DPacket.msg.
//

#ifndef __SIMU5G_MULTIHOPD2DPACKET_M_H
#define __SIMU5G_MULTIHOPD2DPACKET_M_H

#if defined(__clang__)
#  pragma clang diagnostic ignored "-Wreserved-id-macro"
#endif
#include <omnetpp.h>

// opp_msgtool version check
#define MSGC_VERSION 0x0601
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of opp_msgtool: 'make clean' should help.
#endif


namespace simu5g {

class MultihopD2DPacket;

}  // namespace simu5g

#include "inet/common/INETDefs_m.h" // import inet.common.INETDefs

#include "inet/common/packet/chunk/Chunk_m.h" // import inet.common.packet.chunk.Chunk

#include "inet/common/geometry/Geometry_m.h" // import inet.common.geometry.Geometry

#include "common/LteCommon_m.h" // import common.LteCommon

// cplusplus {{
const inet::B D2D_MULTIHOP_HEADER_LENGTH = inet::B(8);
// }}


namespace simu5g {

/**
 * Class generated from <tt>apps/d2dMultihop/MultihopD2DPacket.msg:29</tt> by opp_msgtool.
 * <pre>
 * //
 * // MultihopD2DPacket
 * //
 * // Extend this packet for creating your own multihop message
 * //
 * class MultihopD2DPacket extends inet::FieldsChunk
 * {
 *     MacNodeId srcId;
 *     uint32_t msgid;          // unique id of the message  < sender id  | local msg id >
 * 
 *     inet::Coord srcCoord;
 *     double maxRadius;
 * 
 *     int ttl;                 // time-to-live (to avoid flooding)
 *     unsigned int hops;       // number of hops
 * 
 *     MacNodeId lastHopSenderId;
 * 
 *     simtime_t payloadTimestamp;
 *     unsigned int payloadSize;
 * 
 *     chunkLength = D2D_MULTIHOP_HEADER_LENGTH;
 * }
 * </pre>
 */
class MultihopD2DPacket : public ::inet::FieldsChunk
{
  protected:
    MacNodeId srcId;
    uint32_t msgid = 0;
    ::inet::Coord srcCoord;
    double maxRadius = 0;
    int ttl = 0;
    unsigned int hops = 0;
    MacNodeId lastHopSenderId;
    ::omnetpp::simtime_t payloadTimestamp = SIMTIME_ZERO;
    unsigned int payloadSize = 0;

  private:
    void copy(const MultihopD2DPacket& other);

  protected:
    bool operator==(const MultihopD2DPacket&) = delete;

  public:
    MultihopD2DPacket();
    MultihopD2DPacket(const MultihopD2DPacket& other);
    virtual ~MultihopD2DPacket();
    MultihopD2DPacket& operator=(const MultihopD2DPacket& other);
    virtual MultihopD2DPacket *dup() const override {return new MultihopD2DPacket(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    virtual const MacNodeId& getSrcId() const;
    virtual MacNodeId& getSrcIdForUpdate() { handleChange();return const_cast<MacNodeId&>(const_cast<MultihopD2DPacket*>(this)->getSrcId());}
    virtual void setSrcId(const MacNodeId& srcId);

    virtual uint32_t getMsgid() const;
    virtual void setMsgid(uint32_t msgid);

    virtual const ::inet::Coord& getSrcCoord() const;
    virtual ::inet::Coord& getSrcCoordForUpdate() { handleChange();return const_cast<::inet::Coord&>(const_cast<MultihopD2DPacket*>(this)->getSrcCoord());}
    virtual void setSrcCoord(const ::inet::Coord& srcCoord);

    virtual double getMaxRadius() const;
    virtual void setMaxRadius(double maxRadius);

    virtual int getTtl() const;
    virtual void setTtl(int ttl);

    virtual unsigned int getHops() const;
    virtual void setHops(unsigned int hops);

    virtual const MacNodeId& getLastHopSenderId() const;
    virtual MacNodeId& getLastHopSenderIdForUpdate() { handleChange();return const_cast<MacNodeId&>(const_cast<MultihopD2DPacket*>(this)->getLastHopSenderId());}
    virtual void setLastHopSenderId(const MacNodeId& lastHopSenderId);

    virtual ::omnetpp::simtime_t getPayloadTimestamp() const;
    virtual void setPayloadTimestamp(::omnetpp::simtime_t payloadTimestamp);

    virtual unsigned int getPayloadSize() const;
    virtual void setPayloadSize(unsigned int payloadSize);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const MultihopD2DPacket& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, MultihopD2DPacket& obj) {obj.parsimUnpack(b);}


}  // namespace simu5g


namespace omnetpp {

template<> inline simu5g::MultihopD2DPacket *fromAnyPtr(any_ptr ptr) { return check_and_cast<simu5g::MultihopD2DPacket*>(ptr.get<cObject>()); }

}  // namespace omnetpp

#endif // ifndef __SIMU5G_MULTIHOPD2DPACKET_M_H

