/****************************************************************************
** Meta object code from reading C++ file 'delegationitemmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "qt/delegationitemmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'delegationitemmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DelegationItemModel_t {
    QByteArrayData data[11];
    char stringdata0[125];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DelegationItemModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DelegationItemModel_t qt_meta_stringdata_DelegationItemModel = {
    {
QT_MOC_LITERAL(0, 0, 19), // "DelegationItemModel"
QT_MOC_LITERAL(1, 20, 22), // "checkDelegationChanged"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 11), // "itemChanged"
QT_MOC_LITERAL(4, 56, 4), // "hash"
QT_MOC_LITERAL(5, 61, 7), // "balance"
QT_MOC_LITERAL(6, 69, 5), // "stake"
QT_MOC_LITERAL(7, 75, 6), // "weight"
QT_MOC_LITERAL(8, 82, 6), // "status"
QT_MOC_LITERAL(9, 89, 20), // "updateDelegationData"
QT_MOC_LITERAL(10, 110, 14) // "showDelegation"

    },
    "DelegationItemModel\0checkDelegationChanged\0"
    "\0itemChanged\0hash\0balance\0stake\0weight\0"
    "status\0updateDelegationData\0showDelegation"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DelegationItemModel[] = {

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
       3,    5,   30,    2, 0x0a /* Public */,
       9,    3,   41,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::LongLong, QMetaType::LongLong, QMetaType::LongLong, QMetaType::Int,    4,    5,    6,    7,    8,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::Bool,    4,    8,   10,

       0        // eod
};

void DelegationItemModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DelegationItemModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->checkDelegationChanged(); break;
        case 1: _t->itemChanged((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2])),(*reinterpret_cast< qint64(*)>(_a[3])),(*reinterpret_cast< qint64(*)>(_a[4])),(*reinterpret_cast< qint32(*)>(_a[5]))); break;
        case 2: _t->updateDelegationData((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DelegationItemModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractItemModel::staticMetaObject>(),
    qt_meta_stringdata_DelegationItemModel.data,
    qt_meta_data_DelegationItemModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DelegationItemModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DelegationItemModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DelegationItemModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractItemModel::qt_metacast(_clname);
}

int DelegationItemModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
