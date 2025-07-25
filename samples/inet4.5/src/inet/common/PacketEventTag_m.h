//
// Generated file, do not edit! Created by opp_msgtool 6.1 from inet/common/PacketEventTag.msg.
//

#ifndef __INET_PACKETEVENTTAG_M_H
#define __INET_PACKETEVENTTAG_M_H

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

class PacketEvent;
class PacketQueuedEvent;
class PacketTransmittedEvent;
class PacketEventTag;

}  // namespace inet

#include "inet/common/INETDefs_m.h" // import inet.common.INETDefs

#include "inet/common/TagBase_m.h" // import inet.common.TagBase

#include "inet/common/Units_m.h" // import inet.common.Units


namespace inet {

/**
 * Enum generated from <tt>inet/common/PacketEventTag.msg:14</tt> by opp_msgtool.
 * <pre>
 * enum PacketEventKind
 * {
 *     PEK_UNDEFINED = -1;
 *     PEK_DELAYED = 0;
 *     PEK_QUEUED = 1;
 *     PEK_PROCESSED = 2;
 *     PEK_TRANSMITTED = 3;
 *     PEK_PROPAGATED = 4;
 * }
 * </pre>
 */
enum PacketEventKind {
    PEK_UNDEFINED = -1,
    PEK_DELAYED = 0,
    PEK_QUEUED = 1,
    PEK_PROCESSED = 2,
    PEK_TRANSMITTED = 3,
    PEK_PROPAGATED = 4
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const PacketEventKind& e) { b->pack(static_cast<int>(e)); }
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, PacketEventKind& e) { int n; b->unpack(n); e = static_cast<PacketEventKind>(n); }

/**
 * Class generated from <tt>inet/common/PacketEventTag.msg:24</tt> by opp_msgtool.
 * <pre>
 * class PacketEvent extends cObject
 * {
 *     \@str(getClassName());
 *     int kind \@enum(PacketEventKind) = PEK_UNDEFINED;
 *     string modulePath;
 *     int64_t eventNumber = -1;
 *     simtime_t simulationTime = -1;
 *     simtime_t duration = -1;
 *     b packetLength = b(-1);
 * }
 * </pre>
 */
class INET_API PacketEvent : public ::omnetpp::cObject
{
  protected:
    int kind = PEK_UNDEFINED;
    ::omnetpp::opp_string modulePath;
    int64_t eventNumber = -1;
    ::omnetpp::simtime_t simulationTime = -1;
    ::omnetpp::simtime_t duration = -1;
    b packetLength = b(-1);

  private:
    void copy(const PacketEvent& other);

  protected:
    bool operator==(const PacketEvent&) = delete;

  public:
    PacketEvent();
    PacketEvent(const PacketEvent& other);
    virtual ~PacketEvent();
    PacketEvent& operator=(const PacketEvent& other);
    virtual PacketEvent *dup() const override {return new PacketEvent(*this);}
    virtual std::string str() const override;
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    virtual int getKind() const;
    virtual void setKind(int kind);

    virtual const char * getModulePath() const;
    virtual void setModulePath(const char * modulePath);

    virtual int64_t getEventNumber() const;
    virtual void setEventNumber(int64_t eventNumber);

    virtual ::omnetpp::simtime_t getSimulationTime() const;
    virtual void setSimulationTime(::omnetpp::simtime_t simulationTime);

    virtual ::omnetpp::simtime_t getDuration() const;
    virtual void setDuration(::omnetpp::simtime_t duration);

    virtual b getPacketLength() const;
    virtual void setPacketLength(b packetLength);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const PacketEvent& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, PacketEvent& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/common/PacketEventTag.msg:35</tt> by opp_msgtool.
 * <pre>
 * class PacketQueuedEvent extends PacketEvent
 * {
 *     int queuePacketLength = -1;
 *     b queueDataLength = b(-1);
 * }
 * </pre>
 */
class INET_API PacketQueuedEvent : public ::inet::PacketEvent
{
  protected:
    int queuePacketLength = -1;
    b queueDataLength = b(-1);

  private:
    void copy(const PacketQueuedEvent& other);

  protected:
    bool operator==(const PacketQueuedEvent&) = delete;

  public:
    PacketQueuedEvent();
    PacketQueuedEvent(const PacketQueuedEvent& other);
    virtual ~PacketQueuedEvent();
    PacketQueuedEvent& operator=(const PacketQueuedEvent& other);
    virtual PacketQueuedEvent *dup() const override {return new PacketQueuedEvent(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    virtual int getQueuePacketLength() const;
    virtual void setQueuePacketLength(int queuePacketLength);

    virtual b getQueueDataLength() const;
    virtual void setQueueDataLength(b queueDataLength);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const PacketQueuedEvent& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, PacketQueuedEvent& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/common/PacketEventTag.msg:41</tt> by opp_msgtool.
 * <pre>
 * class PacketTransmittedEvent extends PacketEvent
 * {
 *     bps datarate = bps(-1);
 * }
 * </pre>
 */
class INET_API PacketTransmittedEvent : public ::inet::PacketEvent
{
  protected:
    bps datarate = bps(-1);

  private:
    void copy(const PacketTransmittedEvent& other);

  protected:
    bool operator==(const PacketTransmittedEvent&) = delete;

  public:
    PacketTransmittedEvent();
    PacketTransmittedEvent(const PacketTransmittedEvent& other);
    virtual ~PacketTransmittedEvent();
    PacketTransmittedEvent& operator=(const PacketTransmittedEvent& other);
    virtual PacketTransmittedEvent *dup() const override {return new PacketTransmittedEvent(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    virtual bps getDatarate() const;
    virtual void setDatarate(bps datarate);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const PacketTransmittedEvent& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, PacketTransmittedEvent& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/common/PacketEventTag.msg:46</tt> by opp_msgtool.
 * <pre>
 * class PacketEventTag extends TagBase
 * {
 *     PacketEvent *packetEvents[];
 * }
 * </pre>
 */
class INET_API PacketEventTag : public ::inet::TagBase
{
  protected:
    PacketEvent * *packetEvents = nullptr;
    size_t packetEvents_arraysize = 0;

  private:
    void copy(const PacketEventTag& other);

  protected:
    bool operator==(const PacketEventTag&) = delete;

  public:
    PacketEventTag();
    PacketEventTag(const PacketEventTag& other);
    virtual ~PacketEventTag();
    PacketEventTag& operator=(const PacketEventTag& other);
    virtual PacketEventTag *dup() const override {return new PacketEventTag(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    virtual void setPacketEventsArraySize(size_t size);
    virtual size_t getPacketEventsArraySize() const;
    virtual const PacketEvent * getPacketEvents(size_t k) const;
    virtual PacketEvent * getPacketEventsForUpdate(size_t k) { return const_cast<PacketEvent *>(const_cast<PacketEventTag*>(this)->getPacketEvents(k));}
    virtual void setPacketEvents(size_t k, PacketEvent * packetEvents);
    virtual void insertPacketEvents(size_t k, PacketEvent * packetEvents);
    [[deprecated]] void insertPacketEvents(PacketEvent * packetEvents) {appendPacketEvents(packetEvents);}
    virtual void appendPacketEvents(PacketEvent * packetEvents);
    virtual void erasePacketEvents(size_t k);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const PacketEventTag& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, PacketEventTag& obj) {obj.parsimUnpack(b);}


}  // namespace inet


namespace omnetpp {

template<> inline inet::PacketEvent *fromAnyPtr(any_ptr ptr) { return check_and_cast<inet::PacketEvent*>(ptr.get<cObject>()); }
template<> inline inet::PacketQueuedEvent *fromAnyPtr(any_ptr ptr) { return check_and_cast<inet::PacketQueuedEvent*>(ptr.get<cObject>()); }
template<> inline inet::PacketTransmittedEvent *fromAnyPtr(any_ptr ptr) { return check_and_cast<inet::PacketTransmittedEvent*>(ptr.get<cObject>()); }
template<> inline inet::PacketEventTag *fromAnyPtr(any_ptr ptr) { return check_and_cast<inet::PacketEventTag*>(ptr.get<cObject>()); }

}  // namespace omnetpp

#endif // ifndef __INET_PACKETEVENTTAG_M_H

