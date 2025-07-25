//
// Generated file, do not edit! Created by opp_msgtool 6.1 from inet/protocolelement/cutthrough/CutthroughTag.msg.
//

#ifndef __INET_CUTTHROUGHTAG_M_H
#define __INET_CUTTHROUGHTAG_M_H

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

class CutthroughTag;

}  // namespace inet

#include "inet/common/INETDefs_m.h" // import inet.common.INETDefs

#include "inet/common/TagBase_m.h" // import inet.common.TagBase

#include "inet/common/Units_m.h" // import inet.common.Units

#include "inet/common/packet/chunk/Chunk_m.h" // import inet.common.packet.chunk.Chunk


namespace inet {

/**
 * Class generated from <tt>inet/protocolelement/cutthrough/CutthroughTag.msg:24</tt> by opp_msgtool.
 * <pre>
 * class CutthroughTag extends TagBase
 * {
 *     b cutthroughPosition;
 *     ChunkPtr trailerChunk;
 * }
 * </pre>
 */
class INET_API CutthroughTag : public ::inet::TagBase
{
  protected:
    b cutthroughPosition = b(-1);
    ChunkPtr trailerChunk;

  private:
    void copy(const CutthroughTag& other);

  protected:
    bool operator==(const CutthroughTag&) = delete;

  public:
    CutthroughTag();
    CutthroughTag(const CutthroughTag& other);
    virtual ~CutthroughTag();
    CutthroughTag& operator=(const CutthroughTag& other);
    virtual CutthroughTag *dup() const override {return new CutthroughTag(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    virtual b getCutthroughPosition() const;
    virtual void setCutthroughPosition(b cutthroughPosition);

    virtual const ChunkPtr& getTrailerChunk() const;
    virtual ChunkPtr& getTrailerChunkForUpdate() { return const_cast<ChunkPtr&>(const_cast<CutthroughTag*>(this)->getTrailerChunk());}
    virtual void setTrailerChunk(const ChunkPtr& trailerChunk);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const CutthroughTag& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, CutthroughTag& obj) {obj.parsimUnpack(b);}


}  // namespace inet


namespace omnetpp {

template<> inline inet::CutthroughTag *fromAnyPtr(any_ptr ptr) { return check_and_cast<inet::CutthroughTag*>(ptr.get<cObject>()); }

}  // namespace omnetpp

#endif // ifndef __INET_CUTTHROUGHTAG_M_H

