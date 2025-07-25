//
// Generated file, do not edit! Created by opp_msgtool 6.1 from inet/networklayer/common/L3AddressTag.msg.
//

#ifndef __INET_L3ADDRESSTAG_M_H
#define __INET_L3ADDRESSTAG_M_H

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

class L3AddressTagBase;
class L3AddressReq;
class L3AddressInd;

}  // namespace inet

#include "inet/common/INETDefs_m.h" // import inet.common.INETDefs

#include "inet/common/TagBase_m.h" // import inet.common.TagBase

#include "inet/networklayer/common/L3Address_m.h" // import inet.networklayer.common.L3Address


namespace inet {

/**
 * Class generated from <tt>inet/networklayer/common/L3AddressTag.msg:14</tt> by opp_msgtool.
 * <pre>
 * class L3AddressTagBase extends TagBase
 * {
 *     L3Address srcAddress;      // may be unspecified
 *     L3Address destAddress; // always specified
 * }
 * </pre>
 */
class INET_API L3AddressTagBase : public ::inet::TagBase
{
  protected:
    L3Address srcAddress;
    L3Address destAddress;

  private:
    void copy(const L3AddressTagBase& other);

  protected:
    bool operator==(const L3AddressTagBase&) = delete;

  public:
    L3AddressTagBase();
    L3AddressTagBase(const L3AddressTagBase& other);
    virtual ~L3AddressTagBase();
    L3AddressTagBase& operator=(const L3AddressTagBase& other);
    virtual L3AddressTagBase *dup() const override {return new L3AddressTagBase(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    virtual const L3Address& getSrcAddress() const;
    virtual L3Address& getSrcAddressForUpdate() { return const_cast<L3Address&>(const_cast<L3AddressTagBase*>(this)->getSrcAddress());}
    virtual void setSrcAddress(const L3Address& srcAddress);

    virtual const L3Address& getDestAddress() const;
    virtual L3Address& getDestAddressForUpdate() { return const_cast<L3Address&>(const_cast<L3AddressTagBase*>(this)->getDestAddress());}
    virtual void setDestAddress(const L3Address& destAddress);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const L3AddressTagBase& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, L3AddressTagBase& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/networklayer/common/L3AddressTag.msg:23</tt> by opp_msgtool.
 * <pre>
 * //
 * // Determines the source and destination network addresses for an outgoing packet.
 * //
 * class L3AddressReq extends L3AddressTagBase
 * {
 *     bool nonLocalSrcAddress = false;
 * }
 * </pre>
 */
class INET_API L3AddressReq : public ::inet::L3AddressTagBase
{
  protected:
    bool nonLocalSrcAddress = false;

  private:
    void copy(const L3AddressReq& other);

  protected:
    bool operator==(const L3AddressReq&) = delete;

  public:
    L3AddressReq();
    L3AddressReq(const L3AddressReq& other);
    virtual ~L3AddressReq();
    L3AddressReq& operator=(const L3AddressReq& other);
    virtual L3AddressReq *dup() const override {return new L3AddressReq(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    virtual bool getNonLocalSrcAddress() const;
    virtual void setNonLocalSrcAddress(bool nonLocalSrcAddress);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const L3AddressReq& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, L3AddressReq& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/networklayer/common/L3AddressTag.msg:31</tt> by opp_msgtool.
 * <pre>
 * //
 * // Specifies the source and destination network addresses for an incoming packet.
 * //
 * class L3AddressInd extends L3AddressTagBase
 * {
 * }
 * </pre>
 */
class INET_API L3AddressInd : public ::inet::L3AddressTagBase
{
  protected:

  private:
    void copy(const L3AddressInd& other);

  protected:
    bool operator==(const L3AddressInd&) = delete;

  public:
    L3AddressInd();
    L3AddressInd(const L3AddressInd& other);
    virtual ~L3AddressInd();
    L3AddressInd& operator=(const L3AddressInd& other);
    virtual L3AddressInd *dup() const override {return new L3AddressInd(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const L3AddressInd& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, L3AddressInd& obj) {obj.parsimUnpack(b);}


}  // namespace inet


namespace omnetpp {

template<> inline inet::L3AddressTagBase *fromAnyPtr(any_ptr ptr) { return check_and_cast<inet::L3AddressTagBase*>(ptr.get<cObject>()); }
template<> inline inet::L3AddressReq *fromAnyPtr(any_ptr ptr) { return check_and_cast<inet::L3AddressReq*>(ptr.get<cObject>()); }
template<> inline inet::L3AddressInd *fromAnyPtr(any_ptr ptr) { return check_and_cast<inet::L3AddressInd*>(ptr.get<cObject>()); }

}  // namespace omnetpp

#endif // ifndef __INET_L3ADDRESSTAG_M_H

