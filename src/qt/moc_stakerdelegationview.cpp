/****************************************************************************
** Meta object code from reading C++ file 'stakerdelegationview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "qt/stakerdelegationview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'stakerdelegationview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_StakerDelegationView_t {
    QByteArrayData data[14];
    char stringdata0[150];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StakerDelegationView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StakerDelegationView_t qt_meta_stringdata_StakerDelegationView = {
    {
QT_MOC_LITERAL(0, 0, 20), // "StakerDelegationView"
QT_MOC_LITERAL(1, 21, 14), // "contextualMenu"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 16), // "dateRangeChanged"
QT_MOC_LITERAL(4, 54, 11), // "copyAddress"
QT_MOC_LITERAL(5, 66, 7), // "copyFee"
QT_MOC_LITERAL(6, 74, 10), // "copyAmount"
QT_MOC_LITERAL(7, 85, 10), // "chooseDate"
QT_MOC_LITERAL(8, 96, 3), // "idx"
QT_MOC_LITERAL(9, 100, 13), // "changedPrefix"
QT_MOC_LITERAL(10, 114, 6), // "prefix"
QT_MOC_LITERAL(11, 121, 10), // "changedFee"
QT_MOC_LITERAL(12, 132, 3), // "fee"
QT_MOC_LITERAL(13, 136, 13) // "changedAmount"

    },
    "StakerDelegationView\0contextualMenu\0"
    "\0dateRangeChanged\0copyAddress\0copyFee\0"
    "copyAmount\0chooseDate\0idx\0changedPrefix\0"
    "prefix\0changedFee\0fee\0changedAmount"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StakerDelegationView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x08 /* Private */,
       3,    0,   62,    2, 0x08 /* Private */,
       4,    0,   63,    2, 0x08 /* Private */,
       5,    0,   64,    2, 0x08 /* Private */,
       6,    0,   65,    2, 0x08 /* Private */,
       7,    1,   66,    2, 0x0a /* Public */,
       9,    1,   69,    2, 0x0a /* Public */,
      11,    1,   72,    2, 0x0a /* Public */,
      13,    0,   75,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QPoint,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void,

       0        // eod
};

void StakerDelegationView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<StakerDelegationView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->contextualMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 1: _t->dateRangeChanged(); break;
        case 2: _t->copyAddress(); break;
        case 3: _t->copyFee(); break;
        case 4: _t->copyAmount(); break;
        case 5: _t->chooseDate((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->changedPrefix((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->changedFee((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->changedAmount(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject StakerDelegationView::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_StakerDelegationView.data,
    qt_meta_data_StakerDelegationView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *StakerDelegationView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StakerDelegationView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_StakerDelegationView.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int StakerDelegationView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
