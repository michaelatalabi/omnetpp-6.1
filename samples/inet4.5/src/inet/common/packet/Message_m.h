//
// Generated file, do not edit! Created by opp_msgtool 6.1 from inet/common/packet/Message.msg.
//

#ifndef __INET_MESSAGE_M_H
#define __INET_MESSAGE_M_H

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

// cplusplus {{
#include "inet/common/packet/Message.h"
// }}


namespace inet {


}  // namespace inet


namespace omnetpp {

template<> inline inet::Message *fromAnyPtr(any_ptr ptr) { return check_and_cast<inet::Message*>(ptr.get<cObject>()); }
template<> inline inet::Request *fromAnyPtr(any_ptr ptr) { return check_and_cast<inet::Request*>(ptr.get<cObject>()); }
template<> inline inet::Indication *fromAnyPtr(any_ptr ptr) { return check_and_cast<inet::Indication*>(ptr.get<cObject>()); }

}  // namespace omnetpp

#endif // ifndef __INET_MESSAGE_M_H

