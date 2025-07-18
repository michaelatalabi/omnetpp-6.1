//
// Generated file, do not edit! Created by opp_msgtool 6.1 from inet/routing/eigrp/messages/EigrpMessage.msg.
//

#ifndef __INET_EIGRPMESSAGE_M_H
#define __INET_EIGRPMESSAGE_M_H

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

struct EigrpKValues;
struct EigrpRouteFlags;
struct EigrpWideMetricPar;
struct EigrpStub;
struct EigrpTlvStub;
struct EigrpTlvParameter;
struct EigrpMpIpv4Internal;
struct EigrpMpIpv6Internal;
class EigrpMessage;
class EigrpIpv4Hello;
class EigrpIpv6Hello;
class EigrpIpv4Ack;
class EigrpIpv6Ack;
class EigrpIpv4Message;
class EigrpIpv6Message;
class EigrpIpv4Update;
class EigrpIpv6Update;
class EigrpIpv4Query;
class EigrpIpv6Query;
class EigrpIpv4Reply;
class EigrpIpv6Reply;
struct EigrpMsgRoute;
class EigrpMsgReq;

}  // namespace inet

#include "inet/networklayer/contract/ipv4/Ipv4Address_m.h" // import inet.networklayer.contract.ipv4.Ipv4Address

#include "inet/networklayer/contract/ipv6/Ipv6Address_m.h" // import inet.networklayer.contract.ipv6.Ipv6Address

#include "inet/common/packet/chunk/Chunk_m.h" // import inet.common.packet.chunk.Chunk


namespace inet {

// cplusplus {{
using namespace inet;
// }}

/**
 * Enum generated from <tt>inet/routing/eigrp/messages/EigrpMessage.msg:24</tt> by opp_msgtool.
 * <pre>
 * // Codes of EIGRP messages
 * enum HeaderOpcode
 * {
 *     EIGRP_UPDATE_MSG = 1;
 *     EIGRP_REQUEST_MSG = 2;
 *     EIGRP_QUERY_MSG = 3;
 *     EIGRP_REPLY_MSG = 4;
 *     EIGRP_HELLO_MSG = 5;
 *     EIGRP_SIAQUERY_MSG = 10;
 *     EIGRP_SIAREPLY_MSG = 11;
 * }
 * </pre>
 */
enum HeaderOpcode {
    EIGRP_UPDATE_MSG = 1,
    EIGRP_REQUEST_MSG = 2,
    EIGRP_QUERY_MSG = 3,
    EIGRP_REPLY_MSG = 4,
    EIGRP_HELLO_MSG = 5,
    EIGRP_SIAQUERY_MSG = 10,
    EIGRP_SIAREPLY_MSG = 11
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const HeaderOpcode& e) { b->pack(static_cast<int>(e)); }
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, HeaderOpcode& e) { int n; b->unpack(n); e = static_cast<HeaderOpcode>(n); }

/**
 * Enum generated from <tt>inet/routing/eigrp/messages/EigrpMessage.msg:35</tt> by opp_msgtool.
 * <pre>
 * enum EigrpTlvTypeLow
 * {
 *     EIGRP_TLV_PARAM = 0;
 *     EIGRP_TLV_ROUTE = 2;
 *     EIGRP_TLV_STUB = 6;
 * }
 * </pre>
 */
enum EigrpTlvTypeLow {
    EIGRP_TLV_PARAM = 0,
    EIGRP_TLV_ROUTE = 2,
    EIGRP_TLV_STUB = 6
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const EigrpTlvTypeLow& e) { b->pack(static_cast<int>(e)); }
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, EigrpTlvTypeLow& e) { int n; b->unpack(n); e = static_cast<EigrpTlvTypeLow>(n); }

/**
 * Struct generated from inet/routing/eigrp/messages/EigrpMessage.msg:43 by opp_msgtool.
 */
struct INET_API EigrpKValues
{
    EigrpKValues();
    uint16_t K1 = 1;
    uint16_t K2 = 0;
    uint16_t K3 = 1;
    uint16_t K4 = 0;
    uint16_t K5 = 0;
    uint16_t K6 = 0;
};

// helpers for local use
void INET_API __doPacking(omnetpp::cCommBuffer *b, const EigrpKValues& a);
void INET_API __doUnpacking(omnetpp::cCommBuffer *b, EigrpKValues& a);

inline void doParsimPacking(omnetpp::cCommBuffer *b, const EigrpKValues& obj) { __doPacking(b, obj); }
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, EigrpKValues& obj) { __doUnpacking(b, obj); }

/**
 * Struct generated from inet/routing/eigrp/messages/EigrpMessage.msg:55 by opp_msgtool.
 */
struct INET_API EigrpRouteFlags
{
    EigrpRouteFlags();
    bool SW = false;
    bool CD = false;
    bool active = false;
};

// helpers for local use
void INET_API __doPacking(omnetpp::cCommBuffer *b, const EigrpRouteFlags& a);
void INET_API __doUnpacking(omnetpp::cCommBuffer *b, EigrpRouteFlags& a);

inline void doParsimPacking(omnetpp::cCommBuffer *b, const EigrpRouteFlags& obj) { __doPacking(b, obj); }
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, EigrpRouteFlags& obj) { __doUnpacking(b, obj); }

/**
 * Struct generated from inet/routing/eigrp/messages/EigrpMessage.msg:64 by opp_msgtool.
 */
struct INET_API EigrpWideMetricPar
{
    EigrpWideMetricPar();
    uint8_t offset = 0;
    uint8_t priority = 0;
    uint8_t reliability = 0;
    uint8_t load = 0;
    uint32_t mtu = 0;
    uint8_t hopCount = 0;
    uint64_t delay = 0;
    uint64_t bandwidth = 0;
};

// helpers for local use
void INET_API __doPacking(omnetpp::cCommBuffer *b, const EigrpWideMetricPar& a);
void INET_API __doUnpacking(omnetpp::cCommBuffer *b, EigrpWideMetricPar& a);

inline void doParsimPacking(omnetpp::cCommBuffer *b, const EigrpWideMetricPar& obj) { __doPacking(b, obj); }
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, EigrpWideMetricPar& obj) { __doUnpacking(b, obj); }

/**
 * Struct generated from inet/routing/eigrp/messages/EigrpMessage.msg:78 by opp_msgtool.
 */
struct INET_API EigrpStub
{
    EigrpStub();
    bool connectedRt = false;
    bool staticRt = false;
    bool summaryRt = false;
    bool redistributedRt = false;
    bool leakMapRt = false;
    bool recvOnlyRt = false;
};

// helpers for local use
void INET_API __doPacking(omnetpp::cCommBuffer *b, const EigrpStub& a);
void INET_API __doUnpacking(omnetpp::cCommBuffer *b, EigrpStub& a);

inline void doParsimPacking(omnetpp::cCommBuffer *b, const EigrpStub& obj) { __doPacking(b, obj); }
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, EigrpStub& obj) { __doUnpacking(b, obj); }

/**
 * Struct generated from inet/routing/eigrp/messages/EigrpMessage.msg:90 by opp_msgtool.
 */
struct INET_API EigrpTlvStub
{
    EigrpTlvStub();
    char typeHigh = 0;
    char typeLow = EIGRP_TLV_STUB;
    EigrpStub stub;
};

// helpers for local use
void INET_API __doPacking(omnetpp::cCommBuffer *b, const EigrpTlvStub& a);
void INET_API __doUnpacking(omnetpp::cCommBuffer *b, EigrpTlvStub& a);

inline void doParsimPacking(omnetpp::cCommBuffer *b, const EigrpTlvStub& obj) { __doPacking(b, obj); }
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, EigrpTlvStub& obj) { __doUnpacking(b, obj); }

/**
 * Struct generated from inet/routing/eigrp/messages/EigrpMessage.msg:99 by opp_msgtool.
 */
struct INET_API EigrpTlvParameter
{
    EigrpTlvParameter();
    char typeHigh = 0;
    char typeLow = EIGRP_TLV_PARAM;
    EigrpKValues kValues;
    uint16_t holdTimer = 0;
};

// helpers for local use
void INET_API __doPacking(omnetpp::cCommBuffer *b, const EigrpTlvParameter& a);
void INET_API __doUnpacking(omnetpp::cCommBuffer *b, EigrpTlvParameter& a);

inline void doParsimPacking(omnetpp::cCommBuffer *b, const EigrpTlvParameter& obj) { __doPacking(b, obj); }
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, EigrpTlvParameter& obj) { __doUnpacking(b, obj); }

/**
 * Struct generated from inet/routing/eigrp/messages/EigrpMessage.msg:128 by opp_msgtool.
 */
struct INET_API EigrpMpIpv4Internal
{
    EigrpMpIpv4Internal();
    char typeHigh = 6;
    char typeLow = EIGRP_TLV_ROUTE;
    uint16_t afi = 0;
    uint16_t tid = 0;
    Ipv4Address routerID;
    EigrpWideMetricPar metric;
    EigrpRouteFlags flags;
    Ipv4Address nextHop;
    Ipv4Address destMask;
    Ipv4Address destAddress;
};

// helpers for local use
void INET_API __doPacking(omnetpp::cCommBuffer *b, const EigrpMpIpv4Internal& a);
void INET_API __doUnpacking(omnetpp::cCommBuffer *b, EigrpMpIpv4Internal& a);

inline void doParsimPacking(omnetpp::cCommBuffer *b, const EigrpMpIpv4Internal& obj) { __doPacking(b, obj); }
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, EigrpMpIpv4Internal& obj) { __doUnpacking(b, obj); }

/**
 * Struct generated from inet/routing/eigrp/messages/EigrpMessage.msg:148 by opp_msgtool.
 */
struct INET_API EigrpMpIpv6Internal
{
    EigrpMpIpv6Internal();
    char typeHigh = 6;
    char typeLow = EIGRP_TLV_ROUTE;
    uint16_t afi = 2;
    uint16_t tid = 0;
    Ipv4Address routerID;
    EigrpWideMetricPar metric;
    EigrpRouteFlags flags;
    Ipv6Address nextHop;
    Ipv6Address destMask;
    Ipv6Address destAddress;
};

// helpers for local use
void INET_API __doPacking(omnetpp::cCommBuffer *b, const EigrpMpIpv6Internal& a);
void INET_API __doUnpacking(omnetpp::cCommBuffer *b, EigrpMpIpv6Internal& a);

inline void doParsimPacking(omnetpp::cCommBuffer *b, const EigrpMpIpv6Internal& obj) { __doPacking(b, obj); }
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, EigrpMpIpv6Internal& obj) { __doUnpacking(b, obj); }

/**
 * Class generated from <tt>inet/routing/eigrp/messages/EigrpMessage.msg:168</tt> by opp_msgtool.
 * <pre>
 * // General structure of EIGRP message with header
 * class EigrpMessage extends FieldsChunk
 * {
 *     chunkLength = B(4);
 *     char version = 2;   // Version of EIGRP header
 *     int8_t opcode;      // Type of message
 *     // flags
 *     bool init;          // Initialization - establishment of neighborship
 *     bool cr;            // Conditionally Received
 *     bool rs;            // Reset
 *     bool eot;           // End of table
 * 
 *     int seqNum;         // Sequence number
 *     int ackNum;         // Acknowledgement number
 *     uint16_t vrid;      // Virtual Router ID
 *     uint16_t asNum;     // Autonomous system number
 * }
 * 
 * // EIGRP Hello message
 * </pre>
 */
class INET_API EigrpMessage : public ::inet::FieldsChunk
{
  protected:
    char version = 2;
    int8_t opcode = 0;
    bool init = false;
    bool cr = false;
    bool rs = false;
    bool eot = false;
    int seqNum = 0;
    int ackNum = 0;
    uint16_t vrid = 0;
    uint16_t asNum = 0;

  private:
    void copy(const EigrpMessage& other);

  protected:
    bool operator==(const EigrpMessage&) = delete;

  public:
    EigrpMessage();
    EigrpMessage(const EigrpMessage& other);
    virtual ~EigrpMessage();
    EigrpMessage& operator=(const EigrpMessage& other);
    virtual EigrpMessage *dup() const override {return new EigrpMessage(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    virtual char getVersion() const;
    virtual void setVersion(char version);

    virtual int8_t getOpcode() const;
    virtual void setOpcode(int8_t opcode);

    virtual bool getInit() const;
    virtual void setInit(bool init);

    virtual bool getCr() const;
    virtual void setCr(bool cr);

    virtual bool getRs() const;
    virtual void setRs(bool rs);

    virtual bool getEot() const;
    virtual void setEot(bool eot);

    virtual int getSeqNum() const;
    virtual void setSeqNum(int seqNum);

    virtual int getAckNum() const;
    virtual void setAckNum(int ackNum);

    virtual uint16_t getVrid() const;
    virtual void setVrid(uint16_t vrid);

    virtual uint16_t getAsNum() const;
    virtual void setAsNum(uint16_t asNum);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const EigrpMessage& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, EigrpMessage& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/routing/eigrp/messages/EigrpMessage.msg:187</tt> by opp_msgtool.
 * <pre>
 * class EigrpIpv4Hello extends EigrpMessage
 * {
 *     EigrpTlvParameter parameterTlv;     // Always present
 *     EigrpTlvStub stubTlv;
 * }
 * </pre>
 */
class INET_API EigrpIpv4Hello : public ::inet::EigrpMessage
{
  protected:
    EigrpTlvParameter parameterTlv;
    EigrpTlvStub stubTlv;

  private:
    void copy(const EigrpIpv4Hello& other);

  protected:
    bool operator==(const EigrpIpv4Hello&) = delete;

  public:
    EigrpIpv4Hello();
    EigrpIpv4Hello(const EigrpIpv4Hello& other);
    virtual ~EigrpIpv4Hello();
    EigrpIpv4Hello& operator=(const EigrpIpv4Hello& other);
    virtual EigrpIpv4Hello *dup() const override {return new EigrpIpv4Hello(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    virtual const EigrpTlvParameter& getParameterTlv() const;
    virtual EigrpTlvParameter& getParameterTlvForUpdate() { handleChange();return const_cast<EigrpTlvParameter&>(const_cast<EigrpIpv4Hello*>(this)->getParameterTlv());}
    virtual void setParameterTlv(const EigrpTlvParameter& parameterTlv);

    virtual const EigrpTlvStub& getStubTlv() const;
    virtual EigrpTlvStub& getStubTlvForUpdate() { handleChange();return const_cast<EigrpTlvStub&>(const_cast<EigrpIpv4Hello*>(this)->getStubTlv());}
    virtual void setStubTlv(const EigrpTlvStub& stubTlv);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const EigrpIpv4Hello& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, EigrpIpv4Hello& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/routing/eigrp/messages/EigrpMessage.msg:193</tt> by opp_msgtool.
 * <pre>
 * class EigrpIpv6Hello extends EigrpMessage
 * {
 *     EigrpTlvParameter parameterTlv;     // Always present
 *     EigrpTlvStub stubTlv;
 * }
 * </pre>
 */
class INET_API EigrpIpv6Hello : public ::inet::EigrpMessage
{
  protected:
    EigrpTlvParameter parameterTlv;
    EigrpTlvStub stubTlv;

  private:
    void copy(const EigrpIpv6Hello& other);

  protected:
    bool operator==(const EigrpIpv6Hello&) = delete;

  public:
    EigrpIpv6Hello();
    EigrpIpv6Hello(const EigrpIpv6Hello& other);
    virtual ~EigrpIpv6Hello();
    EigrpIpv6Hello& operator=(const EigrpIpv6Hello& other);
    virtual EigrpIpv6Hello *dup() const override {return new EigrpIpv6Hello(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    virtual const EigrpTlvParameter& getParameterTlv() const;
    virtual EigrpTlvParameter& getParameterTlvForUpdate() { handleChange();return const_cast<EigrpTlvParameter&>(const_cast<EigrpIpv6Hello*>(this)->getParameterTlv());}
    virtual void setParameterTlv(const EigrpTlvParameter& parameterTlv);

    virtual const EigrpTlvStub& getStubTlv() const;
    virtual EigrpTlvStub& getStubTlvForUpdate() { handleChange();return const_cast<EigrpTlvStub&>(const_cast<EigrpIpv6Hello*>(this)->getStubTlv());}
    virtual void setStubTlv(const EigrpTlvStub& stubTlv);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const EigrpIpv6Hello& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, EigrpIpv6Hello& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/routing/eigrp/messages/EigrpMessage.msg:200</tt> by opp_msgtool.
 * <pre>
 * // Ack message - temporarily
 * class EigrpIpv4Ack extends EigrpMessage
 * {
 * }
 * </pre>
 */
class INET_API EigrpIpv4Ack : public ::inet::EigrpMessage
{
  protected:

  private:
    void copy(const EigrpIpv4Ack& other);

  protected:
    bool operator==(const EigrpIpv4Ack&) = delete;

  public:
    EigrpIpv4Ack();
    EigrpIpv4Ack(const EigrpIpv4Ack& other);
    virtual ~EigrpIpv4Ack();
    EigrpIpv4Ack& operator=(const EigrpIpv4Ack& other);
    virtual EigrpIpv4Ack *dup() const override {return new EigrpIpv4Ack(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const EigrpIpv4Ack& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, EigrpIpv4Ack& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/routing/eigrp/messages/EigrpMessage.msg:205</tt> by opp_msgtool.
 * <pre>
 * // Ack message - temporarily
 * class EigrpIpv6Ack extends EigrpMessage
 * {
 * }
 * </pre>
 */
class INET_API EigrpIpv6Ack : public ::inet::EigrpMessage
{
  protected:

  private:
    void copy(const EigrpIpv6Ack& other);

  protected:
    bool operator==(const EigrpIpv6Ack&) = delete;

  public:
    EigrpIpv6Ack();
    EigrpIpv6Ack(const EigrpIpv6Ack& other);
    virtual ~EigrpIpv6Ack();
    EigrpIpv6Ack& operator=(const EigrpIpv6Ack& other);
    virtual EigrpIpv6Ack *dup() const override {return new EigrpIpv6Ack(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const EigrpIpv6Ack& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, EigrpIpv6Ack& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/routing/eigrp/messages/EigrpMessage.msg:209</tt> by opp_msgtool.
 * <pre>
 * class EigrpIpv4Message extends EigrpMessage
 * {
 *     EigrpMpIpv4Internal interRoutes[]; //TODO - dost zvlastni pouziti, jestli bude cas tak predelat
 * }
 * </pre>
 */
class INET_API EigrpIpv4Message : public ::inet::EigrpMessage
{
  protected:
    EigrpMpIpv4Internal *interRoutes = nullptr;
    size_t interRoutes_arraysize = 0;

  private:
    void copy(const EigrpIpv4Message& other);

  protected:
    bool operator==(const EigrpIpv4Message&) = delete;

  public:
    EigrpIpv4Message();
    EigrpIpv4Message(const EigrpIpv4Message& other);
    virtual ~EigrpIpv4Message();
    EigrpIpv4Message& operator=(const EigrpIpv4Message& other);
    virtual EigrpIpv4Message *dup() const override {return new EigrpIpv4Message(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    virtual void setInterRoutesArraySize(size_t size);
    virtual size_t getInterRoutesArraySize() const;
    virtual const EigrpMpIpv4Internal& getInterRoutes(size_t k) const;
    virtual EigrpMpIpv4Internal& getInterRoutesForUpdate(size_t k) { handleChange();return const_cast<EigrpMpIpv4Internal&>(const_cast<EigrpIpv4Message*>(this)->getInterRoutes(k));}
    virtual void setInterRoutes(size_t k, const EigrpMpIpv4Internal& interRoutes);
    virtual void insertInterRoutes(size_t k, const EigrpMpIpv4Internal& interRoutes);
    [[deprecated]] void insertInterRoutes(const EigrpMpIpv4Internal& interRoutes) {appendInterRoutes(interRoutes);}
    virtual void appendInterRoutes(const EigrpMpIpv4Internal& interRoutes);
    virtual void eraseInterRoutes(size_t k);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const EigrpIpv4Message& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, EigrpIpv4Message& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/routing/eigrp/messages/EigrpMessage.msg:214</tt> by opp_msgtool.
 * <pre>
 * class EigrpIpv6Message extends EigrpMessage
 * {
 *     EigrpMpIpv6Internal interRoutes[]; //TODO - dost zvlastni pouziti, jestli bude cas tak predelat - pouze kopiruji pristup z IPv4
 * }
 * </pre>
 */
class INET_API EigrpIpv6Message : public ::inet::EigrpMessage
{
  protected:
    EigrpMpIpv6Internal *interRoutes = nullptr;
    size_t interRoutes_arraysize = 0;

  private:
    void copy(const EigrpIpv6Message& other);

  protected:
    bool operator==(const EigrpIpv6Message&) = delete;

  public:
    EigrpIpv6Message();
    EigrpIpv6Message(const EigrpIpv6Message& other);
    virtual ~EigrpIpv6Message();
    EigrpIpv6Message& operator=(const EigrpIpv6Message& other);
    virtual EigrpIpv6Message *dup() const override {return new EigrpIpv6Message(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    virtual void setInterRoutesArraySize(size_t size);
    virtual size_t getInterRoutesArraySize() const;
    virtual const EigrpMpIpv6Internal& getInterRoutes(size_t k) const;
    virtual EigrpMpIpv6Internal& getInterRoutesForUpdate(size_t k) { handleChange();return const_cast<EigrpMpIpv6Internal&>(const_cast<EigrpIpv6Message*>(this)->getInterRoutes(k));}
    virtual void setInterRoutes(size_t k, const EigrpMpIpv6Internal& interRoutes);
    virtual void insertInterRoutes(size_t k, const EigrpMpIpv6Internal& interRoutes);
    [[deprecated]] void insertInterRoutes(const EigrpMpIpv6Internal& interRoutes) {appendInterRoutes(interRoutes);}
    virtual void appendInterRoutes(const EigrpMpIpv6Internal& interRoutes);
    virtual void eraseInterRoutes(size_t k);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const EigrpIpv6Message& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, EigrpIpv6Message& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/routing/eigrp/messages/EigrpMessage.msg:220</tt> by opp_msgtool.
 * <pre>
 * // EIGRP Update Message
 * class EigrpIpv4Update extends EigrpIpv4Message
 * {
 * }
 * </pre>
 */
class INET_API EigrpIpv4Update : public ::inet::EigrpIpv4Message
{
  protected:

  private:
    void copy(const EigrpIpv4Update& other);

  protected:
    bool operator==(const EigrpIpv4Update&) = delete;

  public:
    EigrpIpv4Update();
    EigrpIpv4Update(const EigrpIpv4Update& other);
    virtual ~EigrpIpv4Update();
    EigrpIpv4Update& operator=(const EigrpIpv4Update& other);
    virtual EigrpIpv4Update *dup() const override {return new EigrpIpv4Update(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const EigrpIpv4Update& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, EigrpIpv4Update& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/routing/eigrp/messages/EigrpMessage.msg:225</tt> by opp_msgtool.
 * <pre>
 * // EIGRP Update Message
 * class EigrpIpv6Update extends EigrpIpv6Message
 * {
 * }
 * </pre>
 */
class INET_API EigrpIpv6Update : public ::inet::EigrpIpv6Message
{
  protected:

  private:
    void copy(const EigrpIpv6Update& other);

  protected:
    bool operator==(const EigrpIpv6Update&) = delete;

  public:
    EigrpIpv6Update();
    EigrpIpv6Update(const EigrpIpv6Update& other);
    virtual ~EigrpIpv6Update();
    EigrpIpv6Update& operator=(const EigrpIpv6Update& other);
    virtual EigrpIpv6Update *dup() const override {return new EigrpIpv6Update(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const EigrpIpv6Update& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, EigrpIpv6Update& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/routing/eigrp/messages/EigrpMessage.msg:230</tt> by opp_msgtool.
 * <pre>
 * // EIGRP Query Message
 * class EigrpIpv4Query extends EigrpIpv4Message
 * {
 * }
 * </pre>
 */
class INET_API EigrpIpv4Query : public ::inet::EigrpIpv4Message
{
  protected:

  private:
    void copy(const EigrpIpv4Query& other);

  protected:
    bool operator==(const EigrpIpv4Query&) = delete;

  public:
    EigrpIpv4Query();
    EigrpIpv4Query(const EigrpIpv4Query& other);
    virtual ~EigrpIpv4Query();
    EigrpIpv4Query& operator=(const EigrpIpv4Query& other);
    virtual EigrpIpv4Query *dup() const override {return new EigrpIpv4Query(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const EigrpIpv4Query& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, EigrpIpv4Query& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/routing/eigrp/messages/EigrpMessage.msg:235</tt> by opp_msgtool.
 * <pre>
 * // EIGRP Query Message
 * class EigrpIpv6Query extends EigrpIpv6Message
 * {
 * }
 * </pre>
 */
class INET_API EigrpIpv6Query : public ::inet::EigrpIpv6Message
{
  protected:

  private:
    void copy(const EigrpIpv6Query& other);

  protected:
    bool operator==(const EigrpIpv6Query&) = delete;

  public:
    EigrpIpv6Query();
    EigrpIpv6Query(const EigrpIpv6Query& other);
    virtual ~EigrpIpv6Query();
    EigrpIpv6Query& operator=(const EigrpIpv6Query& other);
    virtual EigrpIpv6Query *dup() const override {return new EigrpIpv6Query(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const EigrpIpv6Query& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, EigrpIpv6Query& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/routing/eigrp/messages/EigrpMessage.msg:240</tt> by opp_msgtool.
 * <pre>
 * // EIGRP Reply Message
 * class EigrpIpv4Reply extends EigrpIpv4Message
 * {
 * }
 * </pre>
 */
class INET_API EigrpIpv4Reply : public ::inet::EigrpIpv4Message
{
  protected:

  private:
    void copy(const EigrpIpv4Reply& other);

  protected:
    bool operator==(const EigrpIpv4Reply&) = delete;

  public:
    EigrpIpv4Reply();
    EigrpIpv4Reply(const EigrpIpv4Reply& other);
    virtual ~EigrpIpv4Reply();
    EigrpIpv4Reply& operator=(const EigrpIpv4Reply& other);
    virtual EigrpIpv4Reply *dup() const override {return new EigrpIpv4Reply(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const EigrpIpv4Reply& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, EigrpIpv4Reply& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>inet/routing/eigrp/messages/EigrpMessage.msg:245</tt> by opp_msgtool.
 * <pre>
 * // EIGRP Reply Message
 * class EigrpIpv6Reply extends EigrpIpv6Message
 * {
 * }
 * </pre>
 */
class INET_API EigrpIpv6Reply : public ::inet::EigrpIpv6Message
{
  protected:

  private:
    void copy(const EigrpIpv6Reply& other);

  protected:
    bool operator==(const EigrpIpv6Reply&) = delete;

  public:
    EigrpIpv6Reply();
    EigrpIpv6Reply(const EigrpIpv6Reply& other);
    virtual ~EigrpIpv6Reply();
    EigrpIpv6Reply& operator=(const EigrpIpv6Reply& other);
    virtual EigrpIpv6Reply *dup() const override {return new EigrpIpv6Reply(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const EigrpIpv6Reply& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, EigrpIpv6Reply& obj) {obj.parsimUnpack(b);}

/**
 * Struct generated from inet/routing/eigrp/messages/EigrpMessage.msg:252 by opp_msgtool.
 */
struct INET_API EigrpMsgRoute
{
    EigrpMsgRoute();
    int sourceId = 0;
    int routeId = 0;
    bool unreachable = false;
    bool invalid = false;
    Ipv4Address originator;
};

// helpers for local use
void INET_API __doPacking(omnetpp::cCommBuffer *b, const EigrpMsgRoute& a);
void INET_API __doUnpacking(omnetpp::cCommBuffer *b, EigrpMsgRoute& a);

inline void doParsimPacking(omnetpp::cCommBuffer *b, const EigrpMsgRoute& obj) { __doPacking(b, obj); }
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, EigrpMsgRoute& obj) { __doUnpacking(b, obj); }

/**
 * Class generated from <tt>inet/routing/eigrp/messages/EigrpMessage.msg:262</tt> by opp_msgtool.
 * <pre>
 * // Message request
 * message EigrpMsgReq
 * {
 *     \@customize(true);
 *     int8_t opcode;              // Type of message
 *     bool goodbyeMsg = false;    // Message is Hello goodbye
 * 
 *     // flags
 *     bool init;                  // Initialization - establishment of neighborship
 *     bool cr;                    // Conditionally Received
 *     bool rs;                    // Reset
 *     bool eot;                   // End of table
 * 
 *     int destNeighbor;           // ID of neighbor that is destination of message
 *     int destInterface;          // ID of destination interface
 * 
 *     uint32_t seqNumber;         // Sequence number for reliable transmission
 *     uint32_t ackNumber;         // Ack number for reliable transmission
 * 
 *     int numOfAck;               // Number of acknowledges
 *     EigrpMsgRoute routes[];
 * }
 * </pre>
 *
 * EigrpMsgReq_Base is only useful if it gets subclassed, and EigrpMsgReq is derived from it.
 * The minimum code to be written for EigrpMsgReq is the following:
 *
 * <pre>
 * class INET_API EigrpMsgReq : public EigrpMsgReq_Base
 * {
 *   private:
 *     void copy(const EigrpMsgReq& other) { ... }

 *   public:
 *     EigrpMsgReq(const char *name=nullptr, short kind=0) : EigrpMsgReq_Base(name,kind) {}
 *     EigrpMsgReq(const EigrpMsgReq& other) : EigrpMsgReq_Base(other) {copy(other);}
 *     EigrpMsgReq& operator=(const EigrpMsgReq& other) {if (this==&other) return *this; EigrpMsgReq_Base::operator=(other); copy(other); return *this;}
 *     virtual EigrpMsgReq *dup() const override {return new EigrpMsgReq(*this);}
 *     // ADD CODE HERE to redefine and implement pure virtual functions from EigrpMsgReq_Base
 * };
 * </pre>
 *
 * The following should go into a .cc (.cpp) file:
 *
 * <pre>
 * Register_Class(EigrpMsgReq)
 * </pre>
 */
class INET_API EigrpMsgReq_Base : public ::omnetpp::cMessage
{
  protected:
    int8_t opcode = 0;
    bool goodbyeMsg = false;
    bool init = false;
    bool cr = false;
    bool rs = false;
    bool eot = false;
    int destNeighbor = 0;
    int destInterface = 0;
    uint32_t seqNumber = 0;
    uint32_t ackNumber = 0;
    int numOfAck = 0;
    EigrpMsgRoute *routes = nullptr;
    size_t routes_arraysize = 0;

  private:
    void copy(const EigrpMsgReq_Base& other);

  protected:
    bool operator==(const EigrpMsgReq_Base&) = delete;
    // make constructors protected to avoid instantiation
    EigrpMsgReq_Base(const char *name=nullptr, short kind=0);
    EigrpMsgReq_Base(const EigrpMsgReq_Base& other);
    // make assignment operator protected to force the user override it
    EigrpMsgReq_Base& operator=(const EigrpMsgReq_Base& other);

  public:
    virtual ~EigrpMsgReq_Base();
    virtual EigrpMsgReq_Base *dup() const override {throw omnetpp::cRuntimeError("You forgot to manually add a dup() function to class EigrpMsgReq");}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    virtual int8_t getOpcode() const;
    virtual void setOpcode(int8_t opcode);

    virtual bool getGoodbyeMsg() const;
    virtual void setGoodbyeMsg(bool goodbyeMsg);

    virtual bool getInit() const;
    virtual void setInit(bool init);

    virtual bool getCr() const;
    virtual void setCr(bool cr);

    virtual bool getRs() const;
    virtual void setRs(bool rs);

    virtual bool getEot() const;
    virtual void setEot(bool eot);

    virtual int getDestNeighbor() const;
    virtual void setDestNeighbor(int destNeighbor);

    virtual int getDestInterface() const;
    virtual void setDestInterface(int destInterface);

    virtual uint32_t getSeqNumber() const;
    virtual void setSeqNumber(uint32_t seqNumber);

    virtual uint32_t getAckNumber() const;
    virtual void setAckNumber(uint32_t ackNumber);

    virtual int getNumOfAck() const;
    virtual void setNumOfAck(int numOfAck);

    virtual void setRoutesArraySize(size_t size);
    virtual size_t getRoutesArraySize() const;
    virtual const EigrpMsgRoute& getRoutes(size_t k) const;
    virtual EigrpMsgRoute& getRoutesForUpdate(size_t k) { return const_cast<EigrpMsgRoute&>(const_cast<EigrpMsgReq_Base*>(this)->getRoutes(k));}
    virtual void setRoutes(size_t k, const EigrpMsgRoute& routes);
    virtual void insertRoutes(size_t k, const EigrpMsgRoute& routes);
    [[deprecated]] void insertRoutes(const EigrpMsgRoute& routes) {appendRoutes(routes);}
    virtual void appendRoutes(const EigrpMsgRoute& routes);
    virtual void eraseRoutes(size_t k);
};


}  // namespace inet


namespace omnetpp {

inline any_ptr toAnyPtr(const inet::EigrpKValues *p) {return any_ptr(p);}
template<> inline inet::EigrpKValues *fromAnyPtr(any_ptr ptr) { return ptr.get<inet::EigrpKValues>(); }
inline any_ptr toAnyPtr(const inet::EigrpRouteFlags *p) {return any_ptr(p);}
template<> inline inet::EigrpRouteFlags *fromAnyPtr(any_ptr ptr) { return ptr.get<inet::EigrpRouteFlags>(); }
inline any_ptr toAnyPtr(const inet::EigrpWideMetricPar *p) {return any_ptr(p);}
template<> inline inet::EigrpWideMetricPar *fromAnyPtr(any_ptr ptr) { return ptr.get<inet::EigrpWideMetricPar>(); }
inline any_ptr toAnyPtr(const inet::EigrpStub *p) {return any_ptr(p);}
template<> inline inet::EigrpStub *fromAnyPtr(any_ptr ptr) { return ptr.get<inet::EigrpStub>(); }
inline any_ptr toAnyPtr(const inet::EigrpTlvStub *p) {return any_ptr(p);}
template<> inline inet::EigrpTlvStub *fromAnyPtr(any_ptr ptr) { return ptr.get<inet::EigrpTlvStub>(); }
inline any_ptr toAnyPtr(const inet::EigrpTlvParameter *p) {return any_ptr(p);}
template<> inline inet::EigrpTlvParameter *fromAnyPtr(any_ptr ptr) { return ptr.get<inet::EigrpTlvParameter>(); }
inline any_ptr toAnyPtr(const inet::EigrpMpIpv4Internal *p) {return any_ptr(p);}
template<> inline inet::EigrpMpIpv4Internal *fromAnyPtr(any_ptr ptr) { return ptr.get<inet::EigrpMpIpv4Internal>(); }
inline any_ptr toAnyPtr(const inet::EigrpMpIpv6Internal *p) {return any_ptr(p);}
template<> inline inet::EigrpMpIpv6Internal *fromAnyPtr(any_ptr ptr) { return ptr.get<inet::EigrpMpIpv6Internal>(); }
template<> inline inet::EigrpMessage *fromAnyPtr(any_ptr ptr) { return check_and_cast<inet::EigrpMessage*>(ptr.get<cObject>()); }
template<> inline inet::EigrpIpv4Hello *fromAnyPtr(any_ptr ptr) { return check_and_cast<inet::EigrpIpv4Hello*>(ptr.get<cObject>()); }
template<> inline inet::EigrpIpv6Hello *fromAnyPtr(any_ptr ptr) { return check_and_cast<inet::EigrpIpv6Hello*>(ptr.get<cObject>()); }
template<> inline inet::EigrpIpv4Ack *fromAnyPtr(any_ptr ptr) { return check_and_cast<inet::EigrpIpv4Ack*>(ptr.get<cObject>()); }
template<> inline inet::EigrpIpv6Ack *fromAnyPtr(any_ptr ptr) { return check_and_cast<inet::EigrpIpv6Ack*>(ptr.get<cObject>()); }
template<> inline inet::EigrpIpv4Message *fromAnyPtr(any_ptr ptr) { return check_and_cast<inet::EigrpIpv4Message*>(ptr.get<cObject>()); }
template<> inline inet::EigrpIpv6Message *fromAnyPtr(any_ptr ptr) { return check_and_cast<inet::EigrpIpv6Message*>(ptr.get<cObject>()); }
template<> inline inet::EigrpIpv4Update *fromAnyPtr(any_ptr ptr) { return check_and_cast<inet::EigrpIpv4Update*>(ptr.get<cObject>()); }
template<> inline inet::EigrpIpv6Update *fromAnyPtr(any_ptr ptr) { return check_and_cast<inet::EigrpIpv6Update*>(ptr.get<cObject>()); }
template<> inline inet::EigrpIpv4Query *fromAnyPtr(any_ptr ptr) { return check_and_cast<inet::EigrpIpv4Query*>(ptr.get<cObject>()); }
template<> inline inet::EigrpIpv6Query *fromAnyPtr(any_ptr ptr) { return check_and_cast<inet::EigrpIpv6Query*>(ptr.get<cObject>()); }
template<> inline inet::EigrpIpv4Reply *fromAnyPtr(any_ptr ptr) { return check_and_cast<inet::EigrpIpv4Reply*>(ptr.get<cObject>()); }
template<> inline inet::EigrpIpv6Reply *fromAnyPtr(any_ptr ptr) { return check_and_cast<inet::EigrpIpv6Reply*>(ptr.get<cObject>()); }
inline any_ptr toAnyPtr(const inet::EigrpMsgRoute *p) {return any_ptr(p);}
template<> inline inet::EigrpMsgRoute *fromAnyPtr(any_ptr ptr) { return ptr.get<inet::EigrpMsgRoute>(); }
template<> inline inet::EigrpMsgReq_Base *fromAnyPtr(any_ptr ptr) { return check_and_cast<inet::EigrpMsgReq_Base*>(ptr.get<cObject>()); }

}  // namespace omnetpp

#endif // ifndef __INET_EIGRPMESSAGE_M_H

