//
// Generated file, do not edit! Created by opp_msgtool 6.1 from inet/physicallayer/wireless/common/signal/WirelessSignal.msg.
//

#ifndef __INET__PHYSICALLAYER_WIRELESSSIGNAL_M_H
#define __INET__PHYSICALLAYER_WIRELESSSIGNAL_M_H

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
namespace physicallayer {


}  // namespace physicallayer
}  // namespace inet

// cplusplus {{
#include "inet/physicallayer/wireless/common/signal/WirelessSignal.h"
// }}

#include "inet/physicallayer/common/Signal_m.h" // import inet.physicallayer.common.Signal


namespace inet {
namespace physicallayer {


}  // namespace physicallayer
}  // namespace inet


namespace omnetpp {

inline any_ptr toAnyPtr(const inet::physicallayer::ITransmission *p) {if (auto obj = as_cObject(p)) return any_ptr(obj); else return any_ptr(p);}
template<> inline inet::physicallayer::ITransmission *fromAnyPtr(any_ptr ptr) { return ptr.get<inet::physicallayer::ITransmission>(); }
inline any_ptr toAnyPtr(const inet::physicallayer::IArrival *p) {if (auto obj = as_cObject(p)) return any_ptr(obj); else return any_ptr(p);}
template<> inline inet::physicallayer::IArrival *fromAnyPtr(any_ptr ptr) { return ptr.get<inet::physicallayer::IArrival>(); }
inline any_ptr toAnyPtr(const inet::physicallayer::IListening *p) {if (auto obj = as_cObject(p)) return any_ptr(obj); else return any_ptr(p);}
template<> inline inet::physicallayer::IListening *fromAnyPtr(any_ptr ptr) { return ptr.get<inet::physicallayer::IListening>(); }
inline any_ptr toAnyPtr(const inet::physicallayer::IReception *p) {if (auto obj = as_cObject(p)) return any_ptr(obj); else return any_ptr(p);}
template<> inline inet::physicallayer::IReception *fromAnyPtr(any_ptr ptr) { return ptr.get<inet::physicallayer::IReception>(); }
template<> inline inet::physicallayer::WirelessSignal *fromAnyPtr(any_ptr ptr) { return check_and_cast<inet::physicallayer::WirelessSignal*>(ptr.get<cObject>()); }

}  // namespace omnetpp

#endif // ifndef __INET__PHYSICALLAYER_WIRELESSSIGNAL_M_H

