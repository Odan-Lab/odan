/****************************************************************************
** Meta object code from reading C++ file 'stakepage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "qt/stakepage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'stakepage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_StakePage_t {
    QByteArrayData data[20];
    char stringdata0[273];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StakePage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StakePage_t qt_meta_stringdata_StakePage = {
    {
QT_MOC_LITERAL(0, 0, 9), // "StakePage"
QT_MOC_LITERAL(1, 10, 13), // "requireUnlock"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 8), // "fromMenu"
QT_MOC_LITERAL(4, 34, 10), // "setBalance"
QT_MOC_LITERAL(5, 45, 26), // "interfaces::WalletBalances"
QT_MOC_LITERAL(6, 72, 8), // "balances"
QT_MOC_LITERAL(7, 81, 16), // "numBlocksChanged"
QT_MOC_LITERAL(8, 98, 5), // "count"
QT_MOC_LITERAL(9, 104, 9), // "blockDate"
QT_MOC_LITERAL(10, 114, 21), // "nVerificationProgress"
QT_MOC_LITERAL(11, 136, 8), // "SyncType"
QT_MOC_LITERAL(12, 145, 6), // "header"
QT_MOC_LITERAL(13, 152, 20), // "SynchronizationState"
QT_MOC_LITERAL(14, 173, 10), // "sync_state"
QT_MOC_LITERAL(15, 184, 22), // "updateEncryptionStatus"
QT_MOC_LITERAL(16, 207, 17), // "askDeviceForStake"
QT_MOC_LITERAL(17, 225, 17), // "updateDisplayUnit"
QT_MOC_LITERAL(18, 243, 21), // "on_checkStake_clicked"
QT_MOC_LITERAL(19, 265, 7) // "checked"

    },
    "StakePage\0requireUnlock\0\0fromMenu\0"
    "setBalance\0interfaces::WalletBalances\0"
    "balances\0numBlocksChanged\0count\0"
    "blockDate\0nVerificationProgress\0"
    "SyncType\0header\0SynchronizationState\0"
    "sync_state\0updateEncryptionStatus\0"
    "askDeviceForStake\0updateDisplayUnit\0"
    "on_checkStake_clicked\0checked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StakePage[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   52,    2, 0x0a /* Public */,
       7,    5,   55,    2, 0x0a /* Public */,
      15,    0,   66,    2, 0x0a /* Public */,
      16,    0,   67,    2, 0x0a /* Public */,
      17,    0,   68,    2, 0x08 /* Private */,
      18,    1,   69,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::QDateTime, QMetaType::Double, 0x80000000 | 11, 0x80000000 | 13,    8,    9,   10,   12,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   19,

       0        // eod
};

void StakePage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<StakePage *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->requireUnlock((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->setBalance((*reinterpret_cast< const interfaces::WalletBalances(*)>(_a[1]))); break;
        case 2: _t->numBlocksChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QDateTime(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< SyncType(*)>(_a[4])),(*reinterpret_cast< SynchronizationState(*)>(_a[5]))); break;
        case 3: _t->updateEncryptionStatus(); break;
        case 4: _t->askDeviceForStake(); break;
        case 5: _t->updateDisplayUnit(); break;
        case 6: _t->on_checkStake_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (StakePage::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StakePage::requireUnlock)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject StakePage::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_StakePage.data,
    qt_meta_data_StakePage,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *StakePage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StakePage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_StakePage.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int StakePage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void StakePage::requireUnlock(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
