/****************************************************************************
** Meta object code from reading C++ file 'textviewerwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.15)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "textviewerwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'textviewerwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.15. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_omnetpp__qtenv__TextViewerWidget_t {
    QByteArrayData data[24];
    char stringdata0[339];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_omnetpp__qtenv__TextViewerWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_omnetpp__qtenv__TextViewerWidget_t qt_meta_stringdata_omnetpp__qtenv__TextViewerWidget = {
    {
QT_MOC_LITERAL(0, 0, 32), // "omnetpp::qtenv::TextViewerWidget"
QT_MOC_LITERAL(1, 33, 10), // "caretMoved"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 9), // "lineIndex"
QT_MOC_LITERAL(4, 55, 6), // "column"
QT_MOC_LITERAL(5, 62, 12), // "rightClicked"
QT_MOC_LITERAL(6, 75, 9), // "globalPos"
QT_MOC_LITERAL(7, 85, 17), // "onAutoScrollTimer"
QT_MOC_LITERAL(8, 103, 17), // "onCaretBlinkTimer"
QT_MOC_LITERAL(9, 121, 22), // "onHeaderSectionResized"
QT_MOC_LITERAL(10, 144, 12), // "logicalIndex"
QT_MOC_LITERAL(11, 157, 7), // "oldSize"
QT_MOC_LITERAL(12, 165, 7), // "newSize"
QT_MOC_LITERAL(13, 173, 13), // "copySelection"
QT_MOC_LITERAL(14, 187, 24), // "copySelectionUnformatted"
QT_MOC_LITERAL(15, 212, 16), // "onContentChanged"
QT_MOC_LITERAL(16, 229, 16), // "onLinesDiscarded"
QT_MOC_LITERAL(17, 246, 17), // "numLinesDiscarded"
QT_MOC_LITERAL(18, 264, 20), // "scrolledHorizontally"
QT_MOC_LITERAL(19, 285, 5), // "value"
QT_MOC_LITERAL(20, 291, 18), // "scrolledVertically"
QT_MOC_LITERAL(21, 310, 11), // "revealCaret"
QT_MOC_LITERAL(22, 322, 8), // "QMargins"
QT_MOC_LITERAL(23, 331, 7) // "margins"

    },
    "omnetpp::qtenv::TextViewerWidget\0"
    "caretMoved\0\0lineIndex\0column\0rightClicked\0"
    "globalPos\0onAutoScrollTimer\0"
    "onCaretBlinkTimer\0onHeaderSectionResized\0"
    "logicalIndex\0oldSize\0newSize\0copySelection\0"
    "copySelectionUnformatted\0onContentChanged\0"
    "onLinesDiscarded\0numLinesDiscarded\0"
    "scrolledHorizontally\0value\0"
    "scrolledVertically\0revealCaret\0QMargins\0"
    "margins"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_omnetpp__qtenv__TextViewerWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   79,    2, 0x06 /* Public */,
       5,    3,   84,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   91,    2, 0x09 /* Protected */,
       8,    0,   92,    2, 0x09 /* Protected */,
       9,    3,   93,    2, 0x09 /* Protected */,
      13,    0,  100,    2, 0x09 /* Protected */,
      14,    0,  101,    2, 0x09 /* Protected */,
      15,    0,  102,    2, 0x0a /* Public */,
      16,    1,  103,    2, 0x0a /* Public */,
      18,    1,  106,    2, 0x0a /* Public */,
      20,    1,  109,    2, 0x0a /* Public */,
      21,    1,  112,    2, 0x0a /* Public */,
      21,    0,  115,    2, 0x2a /* Public | MethodCloned */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void, QMetaType::QPoint, QMetaType::Int, QMetaType::Int,    6,    3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,   10,   11,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void, 0x80000000 | 22,   23,
    QMetaType::Void,

       0        // eod
};

void omnetpp::qtenv::TextViewerWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TextViewerWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->caretMoved((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->rightClicked((*reinterpret_cast< QPoint(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 2: _t->onAutoScrollTimer(); break;
        case 3: _t->onCaretBlinkTimer(); break;
        case 4: _t->onHeaderSectionResized((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 5: _t->copySelection(); break;
        case 6: _t->copySelectionUnformatted(); break;
        case 7: _t->onContentChanged(); break;
        case 8: _t->onLinesDiscarded((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->scrolledHorizontally((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->scrolledVertically((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->revealCaret((*reinterpret_cast< const QMargins(*)>(_a[1]))); break;
        case 12: _t->revealCaret(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TextViewerWidget::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TextViewerWidget::caretMoved)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TextViewerWidget::*)(QPoint , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TextViewerWidget::rightClicked)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject omnetpp::qtenv::TextViewerWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractScrollArea::staticMetaObject>(),
    qt_meta_stringdata_omnetpp__qtenv__TextViewerWidget.data,
    qt_meta_data_omnetpp__qtenv__TextViewerWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *omnetpp::qtenv::TextViewerWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *omnetpp::qtenv::TextViewerWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_omnetpp__qtenv__TextViewerWidget.stringdata0))
        return static_cast<void*>(this);
    return QAbstractScrollArea::qt_metacast(_clname);
}

int omnetpp::qtenv::TextViewerWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractScrollArea::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void omnetpp::qtenv::TextViewerWidget::caretMoved(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void omnetpp::qtenv::TextViewerWidget::rightClicked(QPoint _t1, int _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
