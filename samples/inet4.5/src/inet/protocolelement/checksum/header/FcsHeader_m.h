//
// Generated file, do not edit! Created by opp_msgtool 6.1 from inet/protocolelement/checksum/header/FcsHeader.msg.
//

#ifndef __INET_FCSHEADER_M_H
#define __INET_FCSHEADER_M_H

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

class FcsHeader;

}  // namespace inet

#include "inet/common/INETDefs_m.h" // import inet.common.INETDefs

#include "inet/common/packet/chunk/Chunk_m.h" // import inet.common.packet.chunk.Chunk

#include "inet/linklayer/common/FcsMode_m.h" // import inet.linklayer.common.FcsMode


namespace inet {

/**
 * Class generated from <tt>inet/protocolelement/checksum/header/FcsHeader.msg:14</tt> by opp_msgtool.
 * <pre>
 * class FcsHeader extends FieldsChunk
 * {
 *     chunkLength = B(4);
 *     uint32_t fcs = 0;
 *     FcsMode fcsMode = FCS_MODE_UNDEFINED;
 * }
 * </pre>
 */
class INET_API FcsHeader : public ::inet::FieldsChunk
{
  protected:
    uint32_t fcs = 0;
    FcsMode fcsMode = FCS_MODE_UNDEFINED;

  private:
    void copy(const FcsHeader& other);

  protected:
    bool operator==(const FcsHeader&) = delete;

  public:
    FcsHeader();
    FcsHeader(const FcsHeader& other);
    virtual ~FcsHeader();
    FcsHeader& operator=(const FcsHeader& other);
    virtual FcsHeader *dup() const override {return new FcsHeader(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    virtual uint32_t getFcs() const;
    virtual void setFcs(uint32_t fcs);

    virtual FcsMode getFcsMode() const;
    virtual void setFcsMode(FcsMode fcsMode);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const FcsHeader& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, FcsHeader& obj) {obj.parsimUnpack(b);}


}  // namespace inet


namespace omnetpp {

template<> inline inet::FcsHeader *fromAnyPtr(any_ptr ptr) { return check_and_cast<inet::FcsHeader*>(ptr.get<cObject>()); }

}  // namespace omnetpp

#endif // ifndef __INET_FCSHEADER_M_H

