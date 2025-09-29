/****************************************************************************
** Meta object code from reading C++ file 'walletmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "qt/walletmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'walletmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WalletModel_t {
    QByteArrayData data[46];
    char stringdata0[668];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WalletModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WalletModel_t qt_meta_stringdata_WalletModel = {
    {
QT_MOC_LITERAL(0, 0, 11), // "WalletModel"
QT_MOC_LITERAL(1, 12, 14), // "balanceChanged"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 26), // "interfaces::WalletBalances"
QT_MOC_LITERAL(4, 55, 8), // "balances"
QT_MOC_LITERAL(5, 64, 23), // "encryptionStatusChanged"
QT_MOC_LITERAL(6, 88, 13), // "requireUnlock"
QT_MOC_LITERAL(7, 102, 7), // "message"
QT_MOC_LITERAL(8, 110, 5), // "title"
QT_MOC_LITERAL(9, 116, 5), // "style"
QT_MOC_LITERAL(10, 122, 9), // "coinsSent"
QT_MOC_LITERAL(11, 132, 12), // "WalletModel*"
QT_MOC_LITERAL(12, 145, 6), // "wallet"
QT_MOC_LITERAL(13, 152, 18), // "SendCoinsRecipient"
QT_MOC_LITERAL(14, 171, 9), // "recipient"
QT_MOC_LITERAL(15, 181, 11), // "transaction"
QT_MOC_LITERAL(16, 193, 12), // "showProgress"
QT_MOC_LITERAL(17, 206, 9), // "nProgress"
QT_MOC_LITERAL(18, 216, 22), // "notifyWatchonlyChanged"
QT_MOC_LITERAL(19, 239, 14), // "fHaveWatchonly"
QT_MOC_LITERAL(20, 254, 6), // "unload"
QT_MOC_LITERAL(21, 261, 22), // "canGetAddressesChanged"
QT_MOC_LITERAL(22, 284, 25), // "availableAddressesChanged"
QT_MOC_LITERAL(23, 310, 18), // "spendableAddresses"
QT_MOC_LITERAL(24, 329, 12), // "allAddresses"
QT_MOC_LITERAL(25, 342, 16), // "includeZeroValue"
QT_MOC_LITERAL(26, 359, 12), // "timerTimeout"
QT_MOC_LITERAL(27, 372, 16), // "startPollBalance"
QT_MOC_LITERAL(28, 389, 12), // "updateStatus"
QT_MOC_LITERAL(29, 402, 17), // "updateTransaction"
QT_MOC_LITERAL(30, 420, 17), // "updateAddressBook"
QT_MOC_LITERAL(31, 438, 7), // "address"
QT_MOC_LITERAL(32, 446, 5), // "label"
QT_MOC_LITERAL(33, 452, 6), // "isMine"
QT_MOC_LITERAL(34, 459, 22), // "wallet::AddressPurpose"
QT_MOC_LITERAL(35, 482, 7), // "purpose"
QT_MOC_LITERAL(36, 490, 6), // "status"
QT_MOC_LITERAL(37, 497, 19), // "updateWatchOnlyFlag"
QT_MOC_LITERAL(38, 517, 18), // "pollBalanceChanged"
QT_MOC_LITERAL(39, 536, 18), // "updateContractBook"
QT_MOC_LITERAL(40, 555, 3), // "abi"
QT_MOC_LITERAL(41, 559, 18), // "checkCoinAddresses"
QT_MOC_LITERAL(42, 578, 25), // "checkCoinAddressesChanged"
QT_MOC_LITERAL(43, 604, 23), // "checkStakeWeightChanged"
QT_MOC_LITERAL(44, 628, 19), // "checkHardwareWallet"
QT_MOC_LITERAL(45, 648, 19) // "checkHardwareDevice"

    },
    "WalletModel\0balanceChanged\0\0"
    "interfaces::WalletBalances\0balances\0"
    "encryptionStatusChanged\0requireUnlock\0"
    "message\0title\0style\0coinsSent\0"
    "WalletModel*\0wallet\0SendCoinsRecipient\0"
    "recipient\0transaction\0showProgress\0"
    "nProgress\0notifyWatchonlyChanged\0"
    "fHaveWatchonly\0unload\0canGetAddressesChanged\0"
    "availableAddressesChanged\0spendableAddresses\0"
    "allAddresses\0includeZeroValue\0"
    "timerTimeout\0startPollBalance\0"
    "updateStatus\0updateTransaction\0"
    "updateAddressBook\0address\0label\0isMine\0"
    "wallet::AddressPurpose\0purpose\0status\0"
    "updateWatchOnlyFlag\0pollBalanceChanged\0"
    "updateContractBook\0abi\0checkCoinAddresses\0"
    "checkCoinAddressesChanged\0"
    "checkStakeWeightChanged\0checkHardwareWallet\0"
    "checkHardwareDevice"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WalletModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      23,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      11,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  129,    2, 0x06 /* Public */,
       5,    0,  132,    2, 0x06 /* Public */,
       6,    0,  133,    2, 0x06 /* Public */,
       7,    3,  134,    2, 0x06 /* Public */,
      10,    3,  141,    2, 0x06 /* Public */,
      16,    2,  148,    2, 0x06 /* Public */,
      18,    1,  153,    2, 0x06 /* Public */,
      20,    0,  156,    2, 0x06 /* Public */,
      21,    0,  157,    2, 0x06 /* Public */,
      22,    3,  158,    2, 0x06 /* Public */,
      26,    0,  165,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      27,    0,  166,    2, 0x0a /* Public */,
      28,    0,  167,    2, 0x0a /* Public */,
      29,    0,  168,    2, 0x0a /* Public */,
      30,    5,  169,    2, 0x0a /* Public */,
      37,    1,  180,    2, 0x0a /* Public */,
      38,    0,  183,    2, 0x0a /* Public */,
      39,    4,  184,    2, 0x0a /* Public */,
      41,    0,  193,    2, 0x0a /* Public */,
      42,    0,  194,    2, 0x0a /* Public */,
      43,    0,  195,    2, 0x0a /* Public */,
      44,    0,  196,    2, 0x0a /* Public */,
      45,    0,  197,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::UInt,    8,    7,    9,
    QMetaType::Void, 0x80000000 | 11, 0x80000000 | 13, QMetaType::QByteArray,   12,   14,   15,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    8,   17,
    QMetaType::Void, QMetaType::Bool,   19,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QStringList, QMetaType::QStringList, QMetaType::Bool,   23,   24,   25,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Bool, 0x80000000 | 34, QMetaType::Int,   31,   32,   33,   35,   36,
    QMetaType::Void, QMetaType::Bool,   19,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::Int,   31,   32,   40,   36,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void WalletModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WalletModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->balanceChanged((*reinterpret_cast< const interfaces::WalletBalances(*)>(_a[1]))); break;
        case 1: _t->encryptionStatusChanged(); break;
        case 2: _t->requireUnlock(); break;
        case 3: _t->message((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3]))); break;
        case 4: _t->coinsSent((*reinterpret_cast< WalletModel*(*)>(_a[1])),(*reinterpret_cast< SendCoinsRecipient(*)>(_a[2])),(*reinterpret_cast< QByteArray(*)>(_a[3]))); break;
        case 5: _t->showProgress((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->notifyWatchonlyChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->unload(); break;
        case 8: _t->canGetAddressesChanged(); break;
        case 9: _t->availableAddressesChanged((*reinterpret_cast< QStringList(*)>(_a[1])),(*reinterpret_cast< QStringList(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 10: _t->timerTimeout(); break;
        case 11: _t->startPollBalance(); break;
        case 12: _t->updateStatus(); break;
        case 13: _t->updateTransaction(); break;
        case 14: _t->updateAddressBook((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< wallet::AddressPurpose(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 15: _t->updateWatchOnlyFlag((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->pollBalanceChanged(); break;
        case 17: _t->updateContractBook((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 18: _t->checkCoinAddresses(); break;
        case 19: _t->checkCoinAddressesChanged(); break;
        case 20: _t->checkStakeWeightChanged(); break;
        case 21: _t->checkHardwareWallet(); break;
        case 22: _t->checkHardwareDevice(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< WalletModel* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (WalletModel::*)(const interfaces::WalletBalances & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WalletModel::balanceChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (WalletModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WalletModel::encryptionStatusChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (WalletModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WalletModel::requireUnlock)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (WalletModel::*)(const QString & , const QString & , unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WalletModel::message)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (WalletModel::*)(WalletModel * , SendCoinsRecipient , QByteArray );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WalletModel::coinsSent)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (WalletModel::*)(const QString & , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WalletModel::showProgress)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (WalletModel::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WalletModel::notifyWatchonlyChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (WalletModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WalletModel::unload)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (WalletModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WalletModel::canGetAddressesChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (WalletModel::*)(QStringList , QStringList , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WalletModel::availableAddressesChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (WalletModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WalletModel::timerTimeout)) {
                *result = 10;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject WalletModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_WalletModel.data,
    qt_meta_data_WalletModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WalletModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WalletModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WalletModel.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int WalletModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    }
    return _id;
}

// SIGNAL 0
void WalletModel::balanceChanged(const interfaces::WalletBalances & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void WalletModel::encryptionStatusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void WalletModel::requireUnlock()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void WalletModel::message(const QString & _t1, const QString & _t2, unsigned int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void WalletModel::coinsSent(WalletModel * _t1, SendCoinsRecipient _t2, QByteArray _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void WalletModel::showProgress(const QString & _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void WalletModel::notifyWatchonlyChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void WalletModel::unload()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void WalletModel::canGetAddressesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void WalletModel::availableAddressesChanged(QStringList _t1, QStringList _t2, bool _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void WalletModel::timerTimeout()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
