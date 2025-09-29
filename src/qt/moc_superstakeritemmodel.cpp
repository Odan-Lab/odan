/****************************************************************************
** Meta object code from reading C++ file 'superstakeritemmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "qt/superstakeritemmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'superstakeritemmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SuperStakerItemModel_t {
    QByteArrayData data[13];
    char stringdata0[155];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SuperStakerItemModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SuperStakerItemModel_t qt_meta_stringdata_SuperStakerItemModel = {
    {
QT_MOC_LITERAL(0, 0, 20), // "SuperStakerItemModel"
QT_MOC_LITERAL(1, 21, 23), // "checkSuperStakerChanged"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 11), // "itemChanged"
QT_MOC_LITERAL(4, 58, 4), // "hash"
QT_MOC_LITERAL(5, 63, 7), // "balance"
QT_MOC_LITERAL(6, 71, 5), // "stake"
QT_MOC_LITERAL(7, 77, 6), // "weight"
QT_MOC_LITERAL(8, 84, 17), // "delegationsWeight"
QT_MOC_LITERAL(9, 102, 7), // "staking"
QT_MOC_LITERAL(10, 110, 21), // "updateSuperStakerData"
QT_MOC_LITERAL(11, 132, 6), // "status"
QT_MOC_LITERAL(12, 139, 15) // "showSuperStaker"

    },
    "SuperStakerItemModel\0checkSuperStakerChanged\0"
    "\0itemChanged\0hash\0balance\0stake\0weight\0"
    "delegationsWeight\0staking\0"
    "updateSuperStakerData\0status\0"
    "showSuperStaker"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SuperStakerItemModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x0a /* Public */,
       3,    6,   30,    2, 0x0a /* Public */,
      10,    3,   43,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::LongLong, QMetaType::LongLong, QMetaType::LongLong, QMetaType::LongLong, QMetaType::Bool,    4,    5,    6,    7,    8,    9,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::Bool,    4,   11,   12,

       0        // eod
};

void SuperStakerItemModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SuperStakerItemModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->checkSuperStakerChanged(); break;
        case 1: _t->itemChanged((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2])),(*reinterpret_cast< qint64(*)>(_a[3])),(*reinterpret_cast< qint64(*)>(_a[4])),(*reinterpret_cast< qint64(*)>(_a[5])),(*reinterpret_cast< bool(*)>(_a[6]))); break;
        case 2: _t->updateSuperStakerData((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SuperStakerItemModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractItemModel::staticMetaObject>(),
    qt_meta_stringdata_SuperStakerItemModel.data,
    qt_meta_data_SuperStakerItemModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SuperStakerItemModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SuperStakerItemModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SuperStakerItemModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractItemModel::qt_metacast(_clname);
}

int SuperStakerItemModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
