//
// Generated file, do not edit! Created by opp_msgtool 6.1 from nodes/mec/MECPlatform/MECServices/packets/HttpMessages.msg.
//

#ifndef __SIMU5G_HTTPMESSAGES_M_H
#define __SIMU5G_HTTPMESSAGES_M_H

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

class HttpBaseMessage;
class HttpRequestMessage_m;
class HttpResponseMessage_m;

}  // namespace simu5g

#include "inet/common/INETDefs_m.h" // import inet.common.INETDefs

#include "inet/common/packet/chunk/Chunk_m.h" // import inet.common.packet.chunk.Chunk


namespace simu5g {

/**
 * Enum generated from <tt>nodes/mec/MECPlatform/MECServices/packets/HttpMessages.msg:18</tt> by opp_msgtool.
 * <pre>
 * enum HttpMsgType
 * {
 *     REQUEST = 0;
 *     RESPONSE = 1;
 *     UNKNOWN = 2;
 * }
 * </pre>
 */
enum HttpMsgType {
    REQUEST = 0,
    RESPONSE = 1,
    UNKNOWN = 2
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const HttpMsgType& e) { b->pack(static_cast<int>(e)); }
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, HttpMsgType& e) { int n; b->unpack(n); e = static_cast<HttpMsgType>(n); }

/**
 * Enum generated from <tt>nodes/mec/MECPlatform/MECServices/packets/HttpMessages.msg:24</tt> by opp_msgtool.
 * <pre>
 * enum HttpRequestState
 * {
 *     CORRECT = 0;
 *     BAD_REQ_LINE = 1;
 *     BAD_HEADER = 2;
 *     BAD_HTTP = 3;
 *     BAD_REQUEST = 4;
 *     DIFF_HOST = 5;
 *     UNDEFINED = 6;
 *     BAD_REQ_METHOD = 7;
 *     BAD_RES_LINE = 8;
 *     BAD_REQ_URI = 9;
 * }
 * </pre>
 */
enum HttpRequestState {
    CORRECT = 0,
    BAD_REQ_LINE = 1,
    BAD_HEADER = 2,
    BAD_HTTP = 3,
    BAD_REQUEST = 4,
    DIFF_HOST = 5,
    UNDEFINED = 6,
    BAD_REQ_METHOD = 7,
    BAD_RES_LINE = 8,
    BAD_REQ_URI = 9
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const HttpRequestState& e) { b->pack(static_cast<int>(e)); }
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, HttpRequestState& e) { int n; b->unpack(n); e = static_cast<HttpRequestState>(n); }

/**
 * Enum generated from <tt>nodes/mec/MECPlatform/MECServices/packets/HttpMessages.msg:37</tt> by opp_msgtool.
 * <pre>
 * enum HttpResponseStatus
 * {
 *     OK = 0;	// 200
 *     CREATED = 1;    // 201
 *     NO_CONTENT = 2; 	// 204
 *     BAD_REQ = 3;    // 400
 *     UNAUTH = 4;    // 401
 *     FORBIDDEN = 5;  	// 403
 *     NOT_FOUND = 6;  	// 404
 *     NOT_ACC = 7;    // 406
 *     TOO_REQS = 8;   	// 429
 *     BAD_METHOD = 9; 	// 405
 *     HTTP_NOT_SUPPORTED = 10; 	// 505
 *     SERV_UNAV = 11;    //503
 * }
 * </pre>
 */
enum HttpResponseStatus {
    OK = 0,
    CREATED = 1,
    NO_CONTENT = 2,
    BAD_REQ = 3,
    UNAUTH = 4,
    FORBIDDEN = 5,
    NOT_FOUND = 6,
    NOT_ACC = 7,
    TOO_REQS = 8,
    BAD_METHOD = 9,
    HTTP_NOT_SUPPORTED = 10,
    SERV_UNAV = 11
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const HttpResponseStatus& e) { b->pack(static_cast<int>(e)); }
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, HttpResponseStatus& e) { int n; b->unpack(n); e = static_cast<HttpResponseStatus>(n); }

/**
 * Class generated from <tt>nodes/mec/MECPlatform/MECServices/packets/HttpMessages.msg:56</tt> by opp_msgtool.
 * <pre>
 * //
 * // Base class for HTTP messages
 * //
 * class HttpBaseMessage extends inet::FieldsChunk
 * {
 *     int sockId;								 // socket Id used to retrieve the tcp socket objects from the map
 *     HttpRequestState state;					 // used to respond with the correct HTTP response
 *     bool isReceivingMsg;					 // flag used for HTTP msgs within more TCP segments
 *     HttpMsgType type;				         // REQUEST or RESPONSE or UNKNOWN
 *     string body; 							 // body of the HTTp message if present
 *     string httpProtocol = "HTTP/1.1";		 // http protocol, defaul HTTP/1.1
 *     int contentLength;						 // Content-Length header
 *     int remainingDataToRecv;				 // Counter for HTTP msg within more TCP segments
 *     string contentType = "application/json"; // Content-Type header 
 *     string connection = "keep-alive";		 // Connection  header
 *     simtime_t arrivalTime = 0;					 //  Point in time when the messagge arrives (used by the Service to calculate response time)
 * }
 * </pre>
 */
class HttpBaseMessage : public ::inet::FieldsChunk
{
  protected:
    int sockId = 0;
    HttpRequestState state = static_cast<simu5g::HttpRequestState>(-1);
    bool isReceivingMsg_ = false;
    HttpMsgType type = static_cast<simu5g::HttpMsgType>(-1);
    ::omnetpp::opp_string body;
    ::omnetpp::opp_string httpProtocol = "HTTP/1.1";
    int contentLength = 0;
    int remainingDataToRecv = 0;
    ::omnetpp::opp_string contentType = "application/json";
    ::omnetpp::opp_string connection = "keep-alive";
    ::omnetpp::simtime_t arrivalTime = 0;

  private:
    void copy(const HttpBaseMessage& other);

  protected:
    bool operator==(const HttpBaseMessage&) = delete;

  public:
    HttpBaseMessage();
    HttpBaseMessage(const HttpBaseMessage& other);
    virtual ~HttpBaseMessage();
    HttpBaseMessage& operator=(const HttpBaseMessage& other);
    virtual HttpBaseMessage *dup() const override {return new HttpBaseMessage(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    virtual int getSockId() const;
    virtual void setSockId(int sockId);

    virtual HttpRequestState getState() const;
    virtual void setState(HttpRequestState state);

    virtual bool isReceivingMsg() const;
    virtual void setIsReceivingMsg(bool isReceivingMsg);

    virtual HttpMsgType getType() const;
    virtual void setType(HttpMsgType type);

    virtual const char * getBody() const;
    virtual void setBody(const char * body);

    virtual const char * getHttpProtocol() const;
    virtual void setHttpProtocol(const char * httpProtocol);

    virtual int getContentLength() const;
    virtual void setContentLength(int contentLength);

    virtual int getRemainingDataToRecv() const;
    virtual void setRemainingDataToRecv(int remainingDataToRecv);

    virtual const char * getContentType() const;
    virtual void setContentType(const char * contentType);

    virtual const char * getConnection() const;
    virtual void setConnection(const char * connection);

    virtual ::omnetpp::simtime_t getArrivalTime() const;
    virtual void setArrivalTime(::omnetpp::simtime_t arrivalTime);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const HttpBaseMessage& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, HttpBaseMessage& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>nodes/mec/MECPlatform/MECServices/packets/HttpMessages.msg:74</tt> by opp_msgtool.
 * <pre>
 * ////
 * // Message class for HTTP requests
 * //
 * class HttpRequestMessage_m extends HttpBaseMessage
 * {
 *     string method;
 *     string parameters;
 *     string uri;
 *     string host = "";		// Host header for POST requests
 *     double responseTime = 0; // used by the ServiceBase when the load generator flag is set
 * }
 * </pre>
 */
class HttpRequestMessage_m : public ::simu5g::HttpBaseMessage
{
  protected:
    ::omnetpp::opp_string method;
    ::omnetpp::opp_string parameters;
    ::omnetpp::opp_string uri;
    ::omnetpp::opp_string host = "";
    double responseTime = 0;

  private:
    void copy(const HttpRequestMessage_m& other);

  protected:
    bool operator==(const HttpRequestMessage_m&) = delete;

  public:
    HttpRequestMessage_m();
    HttpRequestMessage_m(const HttpRequestMessage_m& other);
    virtual ~HttpRequestMessage_m();
    HttpRequestMessage_m& operator=(const HttpRequestMessage_m& other);
    virtual HttpRequestMessage_m *dup() const override {return new HttpRequestMessage_m(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    virtual const char * getMethod() const;
    virtual void setMethod(const char * method);

    virtual const char * getParameters() const;
    virtual void setParameters(const char * parameters);

    virtual const char * getUri() const;
    virtual void setUri(const char * uri);

    virtual const char * getHost() const;
    virtual void setHost(const char * host);

    virtual double getResponseTime() const;
    virtual void setResponseTime(double responseTime);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const HttpRequestMessage_m& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, HttpRequestMessage_m& obj) {obj.parsimUnpack(b);}

/**
 * Class generated from <tt>nodes/mec/MECPlatform/MECServices/packets/HttpMessages.msg:86</tt> by opp_msgtool.
 * <pre>
 * //
 * // Message class for HTTP replies
 * //
 * class HttpResponseMessage_m extends HttpBaseMessage
 * {
 *     int code;	// e.g. 200 
 *     string status; 	// e.g. OK
 * }
 * </pre>
 */
class HttpResponseMessage_m : public ::simu5g::HttpBaseMessage
{
  protected:
    int code = 0;
    ::omnetpp::opp_string status;

  private:
    void copy(const HttpResponseMessage_m& other);

  protected:
    bool operator==(const HttpResponseMessage_m&) = delete;

  public:
    HttpResponseMessage_m();
    HttpResponseMessage_m(const HttpResponseMessage_m& other);
    virtual ~HttpResponseMessage_m();
    HttpResponseMessage_m& operator=(const HttpResponseMessage_m& other);
    virtual HttpResponseMessage_m *dup() const override {return new HttpResponseMessage_m(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    virtual int getCode() const;
    virtual void setCode(int code);

    virtual const char * getStatus() const;
    virtual void setStatus(const char * status);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const HttpResponseMessage_m& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, HttpResponseMessage_m& obj) {obj.parsimUnpack(b);}


}  // namespace simu5g


namespace omnetpp {

template<> inline simu5g::HttpBaseMessage *fromAnyPtr(any_ptr ptr) { return check_and_cast<simu5g::HttpBaseMessage*>(ptr.get<cObject>()); }
template<> inline simu5g::HttpRequestMessage_m *fromAnyPtr(any_ptr ptr) { return check_and_cast<simu5g::HttpRequestMessage_m*>(ptr.get<cObject>()); }
template<> inline simu5g::HttpResponseMessage_m *fromAnyPtr(any_ptr ptr) { return check_and_cast<simu5g::HttpResponseMessage_m*>(ptr.get<cObject>()); }

}  // namespace omnetpp

#endif // ifndef __SIMU5G_HTTPMESSAGES_M_H

