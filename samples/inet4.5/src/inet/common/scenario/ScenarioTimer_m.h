//
// Generated file, do not edit! Created by opp_msgtool 6.1 from inet/common/scenario/ScenarioTimer.msg.
//

#ifndef __INET_SCENARIOTIMER_M_H
#define __INET_SCENARIOTIMER_M_H

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

class ScenarioTimer;

}  // namespace inet

#include "inet/common/INETDefs_m.h" // import inet.common.INETDefs


namespace inet {

/**
 * Class generated from <tt>inet/common/scenario/ScenarioTimer.msg:13</tt> by opp_msgtool.
 * <pre>
 * message ScenarioTimer
 * {
 *     cXMLElement *xmlNode;
 * }
 * </pre>
 */
class INET_API ScenarioTimer : public ::omnetpp::cMessage
{
  protected:
    ::omnetpp::cXMLElement * xmlNode = nullptr;

  private:
    void copy(const ScenarioTimer& other);

  protected:
    bool operator==(const ScenarioTimer&) = delete;

  public:
    ScenarioTimer(const char *name=nullptr, short kind=0);
    ScenarioTimer(const ScenarioTimer& other);
    virtual ~ScenarioTimer();
    ScenarioTimer& operator=(const ScenarioTimer& other);
    virtual ScenarioTimer *dup() const override {return new ScenarioTimer(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    virtual const ::omnetpp::cXMLElement * getXmlNode() const;
    virtual ::omnetpp::cXMLElement * getXmlNodeForUpdate() { return const_cast<::omnetpp::cXMLElement *>(const_cast<ScenarioTimer*>(this)->getXmlNode());}
    virtual void setXmlNode(::omnetpp::cXMLElement * xmlNode);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const ScenarioTimer& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, ScenarioTimer& obj) {obj.parsimUnpack(b);}


}  // namespace inet


namespace omnetpp {

template<> inline inet::ScenarioTimer *fromAnyPtr(any_ptr ptr) { return check_and_cast<inet::ScenarioTimer*>(ptr.get<cObject>()); }

}  // namespace omnetpp

#endif // ifndef __INET_SCENARIOTIMER_M_H

