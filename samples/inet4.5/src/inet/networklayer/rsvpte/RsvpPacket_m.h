//
// Generated file, do not edit! Created by opp_msgtool 6.1 from inet/networklayer/rsvpte/RsvpPacket.msg.
//

#ifndef __INET_RSVPPACKET_M_H
#define __INET_RSVPPACKET_M_H

#if defined(__clang__)
#  pragma clang diagnostic ignored "-Wreserved-id-macro"
#endif
#include <omnetpp.h>

// opp_msgtool version check
#define MSGC_VERSION 0x0601
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of opp_msgtool: 'make clean' should help.
#endif

// dll export symbol
#ifndef INET_API
#  if defined(INET_EXPORT)
#    define INET_API  OPP_DLLEXPORT
#  elif defined(INET_IMPORT)
#    define INET_API  OPP_DLLIMPORT
#  else
#    define INET_API
#  endif
#endif


namespace inet {

class RsvpMessage;
class RsvpPacket;

}  // namespace inet

#include "inet/common/INETDefs_m.h" // import inet.common.INETDefs

#include "inet/common/packet/chunk/Chunk_m.h" // import inet.common.packet.chunk.Chunk

#include "inet/networklayer/contract/NetworkHeaderBase_m.h" // import inet.networklayer.contract.NetworkHeaderBase

#include "inet/networklayer/rsvpte/IntServ_m.h" // import inet.networklayer.rsvpte.IntServ


namespace inet {

// cplusplus {{
#define RSVP_TRAFFIC    2
// }}

/**
 * Enum generated from <tt>inet/networklayer/rsvpte/RsvpPacket.msg:19</tt> by opp_msgtool.
 * <pre>
 * enum RsvpConstants
 * {
 *     PATH_MESSAGE = 1;
 *     RESV_MESSAGE = 2;
 *     PTEAR_MESSAGE = 3;
 *     RTEAR_MESSAGE = 4;
 *     PERROR_MESSAGE = 5;
 *     RERROR_MESSAGE = 6;
 *     HELLO_MESSAGE = 7;
 * }
 * </pre>
 */
enum RsvpConstants {
    PATH_MESSAGE = 1,
    RESV_MESSAGE = 2,
    PTEAR_MESSAGE = 3,
    RTEAR_MESSAGE = 4,
    PERROR_MESSAGE = 5,
    RERROR_MESSAGE = 6,
    HELLO_MESSAGE = 7
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const RsvpConstants& e) { b->pack(static_cast<int>(e)); }
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, RsvpConstants& e) { int n; b->unpack(n); e = static_cast<RsvpConstants>(n); }

/**
 * Class generated from <tt>inet/networklayer/rsvpte/RsvpPacket.msg:33</tt> by opp_msgtool.
 * <pre>
 * //
 * // RSVP message common part
 * //
 * class RsvpMessage extends FieldsChunk
 * {
 *     int rsvpKind;
 * }
 * </pre>
 */
class INET_API RsvpMessage : public ::inet::FieldsChunk
{
  protected:
    int rsvpKind = 0;

  private:
    void copy(const RsvpMessage& other);

  protected:
    bool operator==(const RsvpMessage&) = delete;

  public:
    RsvpMessage();
    RsvpMessage(const RsvpMessage& other);
    virtual ~RsvpMessage();
    RsvpMessage& operator=(const RsvpMessage& other);
    virtual RsvpMessage *dup() const override {return new RsvpMessage(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    virtual int getRsvpKind() const;
    virtual void setRsvpKind(int rsvpKind);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const RsvpMessage& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, RsvpMessage& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/networklayer/rsvpte/RsvpPacket.msg:41</tt> by opp_msgtool.
 * <pre>
 * //
 * // FIXME missing documentation
 * //
 * class RsvpPacket extends RsvpMessage
 * {
 *     SessionObj session;
 *     bool checksumValid = true;
 * }
 * </pre>
 */
class INET_API RsvpPacket : public ::inet::RsvpMessage
{
  protected:
    SessionObj session;
    bool checksumValid = true;

  private:
    void copy(const RsvpPacket& other);

  protected:
    bool operator==(const RsvpPacket&) = delete;

  public:
    RsvpPacket();
    RsvpPacket(const RsvpPacket& other);
    virtual ~RsvpPacket();
    RsvpPacket& operator=(const RsvpPacket& other);
    virtual RsvpPacket *dup() const override {return new RsvpPacket(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    virtual const SessionObj& getSession() const;
    virtual SessionObj& getSessionForUpdate() { handleChange();return const_cast<SessionObj&>(const_cast<RsvpPacket*>(this)->getSession());}
    virtual void setSession(const SessionObj& session);

    virtual bool getChecksumValid() const;
    virtual void setChecksumValid(bool checksumValid);



/**
 * RsvpPacket common part.
 *
 * Adds convenience get() and set() methods to the generated class, but no extra data.
 */
  public:
    inline Ipv4Address getDestAddress() { return getSession().DestAddress; }
    inline int getTunnelId() { return getSession().Tunnel_Id; }
    inline int getExTunnelId() { return getSession().Extended_Tunnel_Id; }
    inline int getSetupPri() { return getSession().setupPri; }
    inline int getHoldingPri() { return getSession().holdingPri; }
    inline bool isInSession(SessionObj *s) const
    {
        return getSession().DestAddress == s->DestAddress &&
               getSession().Tunnel_Id == s->Tunnel_Id &&
               getSession().Extended_Tunnel_Id == s->Extended_Tunnel_Id;
    }

};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const RsvpPacket& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, RsvpPacket& obj) {obj.parsimUnpack(b);}


}  // namespace inet


namespace omnetpp {

template<> inline inet::RsvpMessage *fromAnyPtr(any_ptr ptr) { return check_and_cast<inet::RsvpMessage*>(ptr.get<cObject>()); }
template<> inline inet::RsvpPacket *fromAnyPtr(any_ptr ptr) { return check_and_cast<inet::RsvpPacket*>(ptr.get<cObject>()); }

}  // namespace omnetpp

#endif // ifndef __INET_RSVPPACKET_M_H

