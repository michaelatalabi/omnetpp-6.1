/****************************************************************************
** Meta object code from reading C++ file 'logbuffer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.15)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "logbuffer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'logbuffer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.15. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_omnetpp__qtenv__LogBuffer_t {
    QByteArrayData data[8];
    char stringdata0[119];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_omnetpp__qtenv__LogBuffer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_omnetpp__qtenv__LogBuffer_t qt_meta_stringdata_omnetpp__qtenv__LogBuffer = {
    {
QT_MOC_LITERAL(0, 0, 25), // "omnetpp::qtenv::LogBuffer"
QT_MOC_LITERAL(1, 26, 13), // "logEntryAdded"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 12), // "logLineAdded"
QT_MOC_LITERAL(4, 54, 16), // "messageSendAdded"
QT_MOC_LITERAL(5, 71, 14), // "entryDiscarded"
QT_MOC_LITERAL(6, 86, 17), // "LogBuffer::Entry*"
QT_MOC_LITERAL(7, 104, 14) // "discardedEntry"

    },
    "omnetpp::qtenv::LogBuffer\0logEntryAdded\0"
    "\0logLineAdded\0messageSendAdded\0"
    "entryDiscarded\0LogBuffer::Entry*\0"
    "discardedEntry"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_omnetpp__qtenv__LogBuffer[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,
       4,    0,   36,    2, 0x06 /* Public */,
       5,    1,   37,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,

       0        // eod
};

void omnetpp::qtenv::LogBuffer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LogBuffer *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->logEntryAdded(); break;
        case 1: _t->logLineAdded(); break;
        case 2: _t->messageSendAdded(); break;
        case 3: _t->entryDiscarded((*reinterpret_cast< LogBuffer::Entry*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LogBuffer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LogBuffer::logEntryAdded)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (LogBuffer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LogBuffer::logLineAdded)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (LogBuffer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LogBuffer::messageSendAdded)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (LogBuffer::*)(LogBuffer::Entry * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LogBuffer::entryDiscarded)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject omnetpp::qtenv::LogBuffer::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_omnetpp__qtenv__LogBuffer.data,
    qt_meta_data_omnetpp__qtenv__LogBuffer,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *omnetpp::qtenv::LogBuffer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *omnetpp::qtenv::LogBuffer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_omnetpp__qtenv__LogBuffer.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int omnetpp::qtenv::LogBuffer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void omnetpp::qtenv::LogBuffer::logEntryAdded()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void omnetpp::qtenv::LogBuffer::logLineAdded()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void omnetpp::qtenv::LogBuffer::messageSendAdded()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void omnetpp::qtenv::LogBuffer::entryDiscarded(LogBuffer::Entry * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
