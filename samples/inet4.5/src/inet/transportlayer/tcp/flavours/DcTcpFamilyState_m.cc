//
// Generated file, do not edit! Created by opp_msgtool 6.1 from inet/transportlayer/tcp/flavours/DcTcpFamilyState.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#if defined(__clang__)
#  pragma clang diagnostic ignored "-Wshadow"
#  pragma clang diagnostic ignored "-Wconversion"
#  pragma clang diagnostic ignored "-Wunused-parameter"
#  pragma clang diagnostic ignored "-Wc++98-compat"
#  pragma clang diagnostic ignored "-Wunreachable-code-break"
#  pragma clang diagnostic ignored "-Wold-style-cast"
#elif defined(__GNUC__)
#  pragma GCC diagnostic ignored "-Wshadow"
#  pragma GCC diagnostic ignored "-Wconversion"
#  pragma GCC diagnostic ignored "-Wunused-parameter"
#  pragma GCC diagnostic ignored "-Wold-style-cast"
#  pragma GCC diagnostic ignored "-Wsuggest-attribute=noreturn"
#  pragma GCC diagnostic ignored "-Wfloat-conversion"
#endif

#include <iostream>
#include <sstream>
#include <memory>
#include <type_traits>
#include "DcTcpFamilyState_m.h"

namespace omnetpp {

// Template pack/unpack rules. They are declared *after* a1l type-specific pack functions for multiple reasons.
// They are in the omnetpp namespace, to allow them to be found by argument-dependent lookup via the cCommBuffer argument

// Packing/unpacking an std::vector
template<typename T, typename A>
void doParsimPacking(omnetpp::cCommBuffer *buffer, const std::vector<T,A>& v)
{
    int n = v.size();
    doParsimPacking(buffer, n);
    for (int i = 0; i < n; i++)
        doParsimPacking(buffer, v[i]);
}

template<typename T, typename A>
void doParsimUnpacking(omnetpp::cCommBuffer *buffer, std::vector<T,A>& v)
{
    int n;
    doParsimUnpacking(buffer, n);
    v.resize(n);
    for (int i = 0; i < n; i++)
        doParsimUnpacking(buffer, v[i]);
}

// Packing/unpacking an std::list
template<typename T, typename A>
void doParsimPacking(omnetpp::cCommBuffer *buffer, const std::list<T,A>& l)
{
    doParsimPacking(buffer, (int)l.size());
    for (typename std::list<T,A>::const_iterator it = l.begin(); it != l.end(); ++it)
        doParsimPacking(buffer, (T&)*it);
}

template<typename T, typename A>
void doParsimUnpacking(omnetpp::cCommBuffer *buffer, std::list<T,A>& l)
{
    int n;
    doParsimUnpacking(buffer, n);
    for (int i = 0; i < n; i++) {
        l.push_back(T());
        doParsimUnpacking(buffer, l.back());
    }
}

// Packing/unpacking an std::set
template<typename T, typename Tr, typename A>
void doParsimPacking(omnetpp::cCommBuffer *buffer, const std::set<T,Tr,A>& s)
{
    doParsimPacking(buffer, (int)s.size());
    for (typename std::set<T,Tr,A>::const_iterator it = s.begin(); it != s.end(); ++it)
        doParsimPacking(buffer, *it);
}

template<typename T, typename Tr, typename A>
void doParsimUnpacking(omnetpp::cCommBuffer *buffer, std::set<T,Tr,A>& s)
{
    int n;
    doParsimUnpacking(buffer, n);
    for (int i = 0; i < n; i++) {
        T x;
        doParsimUnpacking(buffer, x);
        s.insert(x);
    }
}

// Packing/unpacking an std::map
template<typename K, typename V, typename Tr, typename A>
void doParsimPacking(omnetpp::cCommBuffer *buffer, const std::map<K,V,Tr,A>& m)
{
    doParsimPacking(buffer, (int)m.size());
    for (typename std::map<K,V,Tr,A>::const_iterator it = m.begin(); it != m.end(); ++it) {
        doParsimPacking(buffer, it->first);
        doParsimPacking(buffer, it->second);
    }
}

template<typename K, typename V, typename Tr, typename A>
void doParsimUnpacking(omnetpp::cCommBuffer *buffer, std::map<K,V,Tr,A>& m)
{
    int n;
    doParsimUnpacking(buffer, n);
    for (int i = 0; i < n; i++) {
        K k; V v;
        doParsimUnpacking(buffer, k);
        doParsimUnpacking(buffer, v);
        m[k] = v;
    }
}

// Default pack/unpack function for arrays
template<typename T>
void doParsimArrayPacking(omnetpp::cCommBuffer *b, const T *t, int n)
{
    for (int i = 0; i < n; i++)
        doParsimPacking(b, t[i]);
}

template<typename T>
void doParsimArrayUnpacking(omnetpp::cCommBuffer *b, T *t, int n)
{
    for (int i = 0; i < n; i++)
        doParsimUnpacking(b, t[i]);
}

// Default rule to prevent compiler from choosing base class' doParsimPacking() function
template<typename T>
void doParsimPacking(omnetpp::cCommBuffer *, const T& t)
{
    throw omnetpp::cRuntimeError("Parsim error: No doParsimPacking() function for type %s", omnetpp::opp_typename(typeid(t)));
}

template<typename T>
void doParsimUnpacking(omnetpp::cCommBuffer *, T& t)
{
    throw omnetpp::cRuntimeError("Parsim error: No doParsimUnpacking() function for type %s", omnetpp::opp_typename(typeid(t)));
}

}  // namespace omnetpp

namespace inet {
namespace tcp {

DcTcpFamilyStateVariables::DcTcpFamilyStateVariables()
{
}

void __doPacking(omnetpp::cCommBuffer *b, const DcTcpFamilyStateVariables& a)
{
    doParsimPacking(b,(::inet::tcp::TcpTahoeRenoFamilyStateVariables&)a);
    doParsimPacking(b,a.dctcp_ce);
    doParsimPacking(b,a.dctcp_windEnd);
    doParsimPacking(b,a.dctcp_bytesAcked);
    doParsimPacking(b,a.dctcp_bytesMarked);
    doParsimPacking(b,a.dctcp_alpha);
    doParsimPacking(b,a.dctcp_gamma);
}

void __doUnpacking(omnetpp::cCommBuffer *b, DcTcpFamilyStateVariables& a)
{
    doParsimUnpacking(b,(::inet::tcp::TcpTahoeRenoFamilyStateVariables&)a);
    doParsimUnpacking(b,a.dctcp_ce);
    doParsimUnpacking(b,a.dctcp_windEnd);
    doParsimUnpacking(b,a.dctcp_bytesAcked);
    doParsimUnpacking(b,a.dctcp_bytesMarked);
    doParsimUnpacking(b,a.dctcp_alpha);
    doParsimUnpacking(b,a.dctcp_gamma);
}

class DcTcpFamilyStateVariablesDescriptor : public omnetpp::cClassDescriptor
{
  private:
    mutable const char **propertyNames;
    enum FieldConstants {
        FIELD_dctcp_ce,
        FIELD_dctcp_windEnd,
        FIELD_dctcp_bytesAcked,
        FIELD_dctcp_bytesMarked,
        FIELD_dctcp_alpha,
        FIELD_dctcp_gamma,
    };
  public:
    DcTcpFamilyStateVariablesDescriptor();
    virtual ~DcTcpFamilyStateVariablesDescriptor();

    virtual bool doesSupport(omnetpp::cObject *obj) const override;
    virtual const char **getPropertyNames() const override;
    virtual const char *getProperty(const char *propertyName) const override;
    virtual int getFieldCount() const override;
    virtual const char *getFieldName(int field) const override;
    virtual int findField(const char *fieldName) const override;
    virtual unsigned int getFieldTypeFlags(int field) const override;
    virtual const char *getFieldTypeString(int field) const override;
    virtual const char **getFieldPropertyNames(int field) const override;
    virtual const char *getFieldProperty(int field, const char *propertyName) const override;
    virtual int getFieldArraySize(omnetpp::any_ptr object, int field) const override;
    virtual void setFieldArraySize(omnetpp::any_ptr object, int field, int size) const override;

    virtual const char *getFieldDynamicTypeString(omnetpp::any_ptr object, int field, int i) const override;
    virtual std::string getFieldValueAsString(omnetpp::any_ptr object, int field, int i) const override;
    virtual void setFieldValueAsString(omnetpp::any_ptr object, int field, int i, const char *value) const override;
    virtual omnetpp::cValue getFieldValue(omnetpp::any_ptr object, int field, int i) const override;
    virtual void setFieldValue(omnetpp::any_ptr object, int field, int i, const omnetpp::cValue& value) const override;

    virtual const char *getFieldStructName(int field) const override;
    virtual omnetpp::any_ptr getFieldStructValuePointer(omnetpp::any_ptr object, int field, int i) const override;
    virtual void setFieldStructValuePointer(omnetpp::any_ptr object, int field, int i, omnetpp::any_ptr ptr) const override;
};

Register_ClassDescriptor(DcTcpFamilyStateVariablesDescriptor)

DcTcpFamilyStateVariablesDescriptor::DcTcpFamilyStateVariablesDescriptor() : omnetpp::cClassDescriptor(omnetpp::opp_typename(typeid(inet::tcp::DcTcpFamilyStateVariables)), "inet::tcp::TcpTahoeRenoFamilyStateVariables")
{
    propertyNames = nullptr;
}

DcTcpFamilyStateVariablesDescriptor::~DcTcpFamilyStateVariablesDescriptor()
{
    delete[] propertyNames;
}

bool DcTcpFamilyStateVariablesDescriptor::doesSupport(omnetpp::cObject *obj) const
{
    return dynamic_cast<DcTcpFamilyStateVariables *>(obj)!=nullptr;
}

const char **DcTcpFamilyStateVariablesDescriptor::getPropertyNames() const
{
    if (!propertyNames) {
        static const char *names[] = { "descriptor",  nullptr };
        omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
        const char **baseNames = base ? base->getPropertyNames() : nullptr;
        propertyNames = mergeLists(baseNames, names);
    }
    return propertyNames;
}

const char *DcTcpFamilyStateVariablesDescriptor::getProperty(const char *propertyName) const
{
    if (!strcmp(propertyName, "descriptor")) return "readonly";
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    return base ? base->getProperty(propertyName) : nullptr;
}

int DcTcpFamilyStateVariablesDescriptor::getFieldCount() const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    return base ? 6+base->getFieldCount() : 6;
}

unsigned int DcTcpFamilyStateVariablesDescriptor::getFieldTypeFlags(int field) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount())
            return base->getFieldTypeFlags(field);
        field -= base->getFieldCount();
    }
    static unsigned int fieldTypeFlags[] = {
        0,    // FIELD_dctcp_ce
        0,    // FIELD_dctcp_windEnd
        0,    // FIELD_dctcp_bytesAcked
        0,    // FIELD_dctcp_bytesMarked
        0,    // FIELD_dctcp_alpha
        0,    // FIELD_dctcp_gamma
    };
    return (field >= 0 && field < 6) ? fieldTypeFlags[field] : 0;
}

const char *DcTcpFamilyStateVariablesDescriptor::getFieldName(int field) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount())
            return base->getFieldName(field);
        field -= base->getFieldCount();
    }
    static const char *fieldNames[] = {
        "dctcp_ce",
        "dctcp_windEnd",
        "dctcp_bytesAcked",
        "dctcp_bytesMarked",
        "dctcp_alpha",
        "dctcp_gamma",
    };
    return (field >= 0 && field < 6) ? fieldNames[field] : nullptr;
}

int DcTcpFamilyStateVariablesDescriptor::findField(const char *fieldName) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    int baseIndex = base ? base->getFieldCount() : 0;
    if (strcmp(fieldName, "dctcp_ce") == 0) return baseIndex + 0;
    if (strcmp(fieldName, "dctcp_windEnd") == 0) return baseIndex + 1;
    if (strcmp(fieldName, "dctcp_bytesAcked") == 0) return baseIndex + 2;
    if (strcmp(fieldName, "dctcp_bytesMarked") == 0) return baseIndex + 3;
    if (strcmp(fieldName, "dctcp_alpha") == 0) return baseIndex + 4;
    if (strcmp(fieldName, "dctcp_gamma") == 0) return baseIndex + 5;
    return base ? base->findField(fieldName) : -1;
}

const char *DcTcpFamilyStateVariablesDescriptor::getFieldTypeString(int field) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount())
            return base->getFieldTypeString(field);
        field -= base->getFieldCount();
    }
    static const char *fieldTypeStrings[] = {
        "bool",    // FIELD_dctcp_ce
        "uint32_t",    // FIELD_dctcp_windEnd
        "uint32_t",    // FIELD_dctcp_bytesAcked
        "uint32_t",    // FIELD_dctcp_bytesMarked
        "double",    // FIELD_dctcp_alpha
        "double",    // FIELD_dctcp_gamma
    };
    return (field >= 0 && field < 6) ? fieldTypeStrings[field] : nullptr;
}

const char **DcTcpFamilyStateVariablesDescriptor::getFieldPropertyNames(int field) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount())
            return base->getFieldPropertyNames(field);
        field -= base->getFieldCount();
    }
    switch (field) {
        default: return nullptr;
    }
}

const char *DcTcpFamilyStateVariablesDescriptor::getFieldProperty(int field, const char *propertyName) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount())
            return base->getFieldProperty(field, propertyName);
        field -= base->getFieldCount();
    }
    switch (field) {
        default: return nullptr;
    }
}

int DcTcpFamilyStateVariablesDescriptor::getFieldArraySize(omnetpp::any_ptr object, int field) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount())
            return base->getFieldArraySize(object, field);
        field -= base->getFieldCount();
    }
    DcTcpFamilyStateVariables *pp = omnetpp::fromAnyPtr<DcTcpFamilyStateVariables>(object); (void)pp;
    switch (field) {
        default: return 0;
    }
}

void DcTcpFamilyStateVariablesDescriptor::setFieldArraySize(omnetpp::any_ptr object, int field, int size) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount()){
            base->setFieldArraySize(object, field, size);
            return;
        }
        field -= base->getFieldCount();
    }
    DcTcpFamilyStateVariables *pp = omnetpp::fromAnyPtr<DcTcpFamilyStateVariables>(object); (void)pp;
    switch (field) {
        default: throw omnetpp::cRuntimeError("Cannot set array size of field %d of class 'DcTcpFamilyStateVariables'", field);
    }
}

const char *DcTcpFamilyStateVariablesDescriptor::getFieldDynamicTypeString(omnetpp::any_ptr object, int field, int i) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount())
            return base->getFieldDynamicTypeString(object,field,i);
        field -= base->getFieldCount();
    }
    DcTcpFamilyStateVariables *pp = omnetpp::fromAnyPtr<DcTcpFamilyStateVariables>(object); (void)pp;
    switch (field) {
        default: return nullptr;
    }
}

std::string DcTcpFamilyStateVariablesDescriptor::getFieldValueAsString(omnetpp::any_ptr object, int field, int i) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount())
            return base->getFieldValueAsString(object,field,i);
        field -= base->getFieldCount();
    }
    DcTcpFamilyStateVariables *pp = omnetpp::fromAnyPtr<DcTcpFamilyStateVariables>(object); (void)pp;
    switch (field) {
        case FIELD_dctcp_ce: return bool2string(pp->dctcp_ce);
        case FIELD_dctcp_windEnd: return ulong2string(pp->dctcp_windEnd);
        case FIELD_dctcp_bytesAcked: return ulong2string(pp->dctcp_bytesAcked);
        case FIELD_dctcp_bytesMarked: return ulong2string(pp->dctcp_bytesMarked);
        case FIELD_dctcp_alpha: return double2string(pp->dctcp_alpha);
        case FIELD_dctcp_gamma: return double2string(pp->dctcp_gamma);
        default: return "";
    }
}

void DcTcpFamilyStateVariablesDescriptor::setFieldValueAsString(omnetpp::any_ptr object, int field, int i, const char *value) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount()){
            base->setFieldValueAsString(object, field, i, value);
            return;
        }
        field -= base->getFieldCount();
    }
    DcTcpFamilyStateVariables *pp = omnetpp::fromAnyPtr<DcTcpFamilyStateVariables>(object); (void)pp;
    switch (field) {
        default: throw omnetpp::cRuntimeError("Cannot set field %d of class 'DcTcpFamilyStateVariables'", field);
    }
}

omnetpp::cValue DcTcpFamilyStateVariablesDescriptor::getFieldValue(omnetpp::any_ptr object, int field, int i) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount())
            return base->getFieldValue(object,field,i);
        field -= base->getFieldCount();
    }
    DcTcpFamilyStateVariables *pp = omnetpp::fromAnyPtr<DcTcpFamilyStateVariables>(object); (void)pp;
    switch (field) {
        case FIELD_dctcp_ce: return pp->dctcp_ce;
        case FIELD_dctcp_windEnd: return (omnetpp::intval_t)(pp->dctcp_windEnd);
        case FIELD_dctcp_bytesAcked: return (omnetpp::intval_t)(pp->dctcp_bytesAcked);
        case FIELD_dctcp_bytesMarked: return (omnetpp::intval_t)(pp->dctcp_bytesMarked);
        case FIELD_dctcp_alpha: return pp->dctcp_alpha;
        case FIELD_dctcp_gamma: return pp->dctcp_gamma;
        default: throw omnetpp::cRuntimeError("Cannot return field %d of class 'DcTcpFamilyStateVariables' as cValue -- field index out of range?", field);
    }
}

void DcTcpFamilyStateVariablesDescriptor::setFieldValue(omnetpp::any_ptr object, int field, int i, const omnetpp::cValue& value) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount()){
            base->setFieldValue(object, field, i, value);
            return;
        }
        field -= base->getFieldCount();
    }
    DcTcpFamilyStateVariables *pp = omnetpp::fromAnyPtr<DcTcpFamilyStateVariables>(object); (void)pp;
    switch (field) {
        default: throw omnetpp::cRuntimeError("Cannot set field %d of class 'DcTcpFamilyStateVariables'", field);
    }
}

const char *DcTcpFamilyStateVariablesDescriptor::getFieldStructName(int field) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount())
            return base->getFieldStructName(field);
        field -= base->getFieldCount();
    }
    switch (field) {
        default: return nullptr;
    };
}

omnetpp::any_ptr DcTcpFamilyStateVariablesDescriptor::getFieldStructValuePointer(omnetpp::any_ptr object, int field, int i) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount())
            return base->getFieldStructValuePointer(object, field, i);
        field -= base->getFieldCount();
    }
    DcTcpFamilyStateVariables *pp = omnetpp::fromAnyPtr<DcTcpFamilyStateVariables>(object); (void)pp;
    switch (field) {
        default: return omnetpp::any_ptr(nullptr);
    }
}

void DcTcpFamilyStateVariablesDescriptor::setFieldStructValuePointer(omnetpp::any_ptr object, int field, int i, omnetpp::any_ptr ptr) const
{
    omnetpp::cClassDescriptor *base = getBaseClassDescriptor();
    if (base) {
        if (field < base->getFieldCount()){
            base->setFieldStructValuePointer(object, field, i, ptr);
            return;
        }
        field -= base->getFieldCount();
    }
    DcTcpFamilyStateVariables *pp = omnetpp::fromAnyPtr<DcTcpFamilyStateVariables>(object); (void)pp;
    switch (field) {
        default: throw omnetpp::cRuntimeError("Cannot set field %d of class 'DcTcpFamilyStateVariables'", field);
    }
}

}  // namespace tcp
}  // namespace inet

namespace omnetpp {

template<> inet::tcp::DcTcpFamilyStateVariables *fromAnyPtr(any_ptr ptr) {
    if (ptr.contains<inet::tcp::TcpStateVariables>()) return static_cast<inet::tcp::DcTcpFamilyStateVariables*>(ptr.get<inet::tcp::TcpStateVariables>());
    if (ptr.contains<omnetpp::cObject>()) return static_cast<inet::tcp::DcTcpFamilyStateVariables*>(ptr.get<omnetpp::cObject>());
    throw cRuntimeError("Unable to obtain inet::tcp::DcTcpFamilyStateVariables* pointer from any_ptr(%s)", ptr.pointerTypeName());
}
}  // namespace omnetpp

