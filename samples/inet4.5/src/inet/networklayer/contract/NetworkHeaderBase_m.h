//
// Generated file, do not edit! Created by opp_msgtool 6.1 from inet/networklayer/contract/NetworkHeaderBase.msg.
//

#ifndef __INET_NETWORKHEADERBASE_M_H
#define __INET_NETWORKHEADERBASE_M_H

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


}  // namespace inet

#include "inet/common/INETDefs_m.h" // import inet.common.INETDefs

#include "inet/common/ProtocolTag_m.h" // import inet.common.ProtocolTag

#include "inet/common/packet/chunk/Chunk_m.h" // import inet.common.packet.chunk.Chunk

#include "inet/networklayer/common/L3Address_m.h" // import inet.networklayer.common.L3Address

// cplusplus {{
namespace inet {

class INET_API NetworkHeaderBase : public FieldsChunk
{
  protected:
    virtual NetworkHeaderBase *dup() const override { throw omnetpp::cRuntimeError("You forgot to manually add a dup() function to class %s", getClassName()); }
  public:
    NetworkHeaderBase() : FieldsChunk() {}
    NetworkHeaderBase(const NetworkHeaderBase& other) : FieldsChunk(other) {}

    virtual L3Address getSourceAddress() const = 0;
    virtual void setSourceAddress(const L3Address& address) = 0;
    virtual L3Address getDestinationAddress() const = 0;
    virtual void setDestinationAddress(const L3Address& address) = 0;
    virtual const Protocol *getProtocol() const = 0;
    virtual void setProtocol(const Protocol *protocol) = 0;
    virtual bool isFragment() const = 0;
};

} // namespace inet
// }}


namespace inet {


}  // namespace inet


namespace omnetpp {

template<> inline inet::NetworkHeaderBase *fromAnyPtr(any_ptr ptr) { return check_and_cast<inet::NetworkHeaderBase*>(ptr.get<cObject>()); }

}  // namespace omnetpp

#endif // ifndef __INET_NETWORKHEADERBASE_M_H

