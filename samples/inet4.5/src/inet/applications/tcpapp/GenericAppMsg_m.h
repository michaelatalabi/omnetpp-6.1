//
// Generated file, do not edit! Created by opp_msgtool 6.1 from inet/applications/tcpapp/GenericAppMsg.msg.
//

#ifndef __INET_GENERICAPPMSG_M_H
#define __INET_GENERICAPPMSG_M_H

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

class GenericAppMsg;

}  // namespace inet

#include "inet/common/INETDefs_m.h" // import inet.common.INETDefs

#include "inet/common/Units_m.h" // import inet.common.Units

#include "inet/common/packet/chunk/Chunk_m.h" // import inet.common.packet.chunk.Chunk


namespace inet {

/**
 * Class generated from <tt>inet/applications/tcpapp/GenericAppMsg.msg:25</tt> by opp_msgtool.
 * <pre>
 * //
 * // Message class for generic request-reply style applications.
 * // The client sends a ~GenericAppMsg which contains the number of
 * // bytes the client wants the server to send back as reply.
 * //
 * // This way intelligence (behaviour specific to the modelled application,
 * // e.g. HTTP, SMB, database protocol) needs only to be present in
 * // the client, and the server model can be kept simple and dumb.
 * //
 * // \@see ~TcpGenericServerApp, TCPGenericCliAppBase (C++ only)
 * //
 * class GenericAppMsg extends FieldsChunk
 * {
 *     B expectedReplyLength;   // in bytes
 *     double replyDelay;       // reply after this many seconds
 *     bool serverClose;        // with TCP: if true, server should close the
 *                              // connection after sending the reply
 * }
 * </pre>
 */
class INET_API GenericAppMsg : public ::inet::FieldsChunk
{
  protected:
    B expectedReplyLength = B(-1);
    double replyDelay = 0;
    bool serverClose = false;

  private:
    void copy(const GenericAppMsg& other);

  protected:
    bool operator==(const GenericAppMsg&) = delete;

  public:
    GenericAppMsg();
    GenericAppMsg(const GenericAppMsg& other);
    virtual ~GenericAppMsg();
    GenericAppMsg& operator=(const GenericAppMsg& other);
    virtual GenericAppMsg *dup() const override {return new GenericAppMsg(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    virtual B getExpectedReplyLength() const;
    virtual void setExpectedReplyLength(B expectedReplyLength);

    virtual double getReplyDelay() const;
    virtual void setReplyDelay(double replyDelay);

    virtual bool getServerClose() const;
    virtual void setServerClose(bool serverClose);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const GenericAppMsg& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, GenericAppMsg& obj) {obj.parsimUnpack(b);}


}  // namespace inet


namespace omnetpp {

template<> inline inet::GenericAppMsg *fromAnyPtr(any_ptr ptr) { return check_and_cast<inet::GenericAppMsg*>(ptr.get<cObject>()); }

}  // namespace omnetpp

#endif // ifndef __INET_GENERICAPPMSG_M_H

