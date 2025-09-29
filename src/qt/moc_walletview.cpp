/****************************************************************************
** Meta object code from reading C++ file 'walletview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "qt/walletview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'walletview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WalletView_t {
    QByteArrayData data[59];
    char stringdata0[804];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WalletView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WalletView_t qt_meta_stringdata_WalletView = {
    {
QT_MOC_LITERAL(0, 0, 10), // "WalletView"
QT_MOC_LITERAL(1, 11, 10), // "setPrivacy"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 7), // "privacy"
QT_MOC_LITERAL(4, 31, 18), // "transactionClicked"
QT_MOC_LITERAL(5, 50, 9), // "coinsSent"
QT_MOC_LITERAL(6, 60, 7), // "message"
QT_MOC_LITERAL(7, 68, 5), // "title"
QT_MOC_LITERAL(8, 74, 5), // "style"
QT_MOC_LITERAL(9, 80, 23), // "encryptionStatusChanged"
QT_MOC_LITERAL(10, 104, 19), // "incomingTransaction"
QT_MOC_LITERAL(11, 124, 4), // "date"
QT_MOC_LITERAL(12, 129, 11), // "BitcoinUnit"
QT_MOC_LITERAL(13, 141, 4), // "unit"
QT_MOC_LITERAL(14, 146, 7), // "CAmount"
QT_MOC_LITERAL(15, 154, 6), // "amount"
QT_MOC_LITERAL(16, 161, 4), // "type"
QT_MOC_LITERAL(17, 166, 7), // "address"
QT_MOC_LITERAL(18, 174, 5), // "label"
QT_MOC_LITERAL(19, 180, 10), // "walletName"
QT_MOC_LITERAL(20, 191, 24), // "incomingTokenTransaction"
QT_MOC_LITERAL(21, 216, 23), // "outOfSyncWarningClicked"
QT_MOC_LITERAL(22, 240, 8), // "showMore"
QT_MOC_LITERAL(23, 249, 9), // "sendCoins"
QT_MOC_LITERAL(24, 259, 4), // "addr"
QT_MOC_LITERAL(25, 264, 12), // "receiveCoins"
QT_MOC_LITERAL(26, 277, 16), // "gotoOverviewPage"
QT_MOC_LITERAL(27, 294, 15), // "gotoHistoryPage"
QT_MOC_LITERAL(28, 310, 20), // "gotoReceiveCoinsPage"
QT_MOC_LITERAL(29, 331, 17), // "gotoSendCoinsPage"
QT_MOC_LITERAL(30, 349, 22), // "gotoCreateContractPage"
QT_MOC_LITERAL(31, 372, 22), // "gotoSendToContractPage"
QT_MOC_LITERAL(32, 395, 20), // "gotoCallContractPage"
QT_MOC_LITERAL(33, 416, 13), // "gotoTokenPage"
QT_MOC_LITERAL(34, 430, 13), // "gotoStakePage"
QT_MOC_LITERAL(35, 444, 18), // "gotoDelegationPage"
QT_MOC_LITERAL(36, 463, 19), // "gotoSuperStakerPage"
QT_MOC_LITERAL(37, 483, 18), // "gotoSignMessageTab"
QT_MOC_LITERAL(38, 502, 20), // "gotoVerifyMessageTab"
QT_MOC_LITERAL(39, 523, 21), // "processNewTransaction"
QT_MOC_LITERAL(40, 545, 11), // "QModelIndex"
QT_MOC_LITERAL(41, 557, 6), // "parent"
QT_MOC_LITERAL(42, 564, 5), // "start"
QT_MOC_LITERAL(43, 570, 26), // "processNewTokenTransaction"
QT_MOC_LITERAL(44, 597, 13), // "encryptWallet"
QT_MOC_LITERAL(45, 611, 12), // "backupWallet"
QT_MOC_LITERAL(46, 624, 13), // "restoreWallet"
QT_MOC_LITERAL(47, 638, 16), // "changePassphrase"
QT_MOC_LITERAL(48, 655, 12), // "unlockWallet"
QT_MOC_LITERAL(49, 668, 8), // "fromMenu"
QT_MOC_LITERAL(50, 677, 10), // "lockWallet"
QT_MOC_LITERAL(51, 688, 14), // "signTxHardware"
QT_MOC_LITERAL(52, 703, 2), // "tx"
QT_MOC_LITERAL(53, 706, 20), // "usedSendingAddresses"
QT_MOC_LITERAL(54, 727, 22), // "usedReceivingAddresses"
QT_MOC_LITERAL(55, 750, 12), // "showProgress"
QT_MOC_LITERAL(56, 763, 9), // "nProgress"
QT_MOC_LITERAL(57, 773, 22), // "disableTransactionView"
QT_MOC_LITERAL(58, 796, 7) // "disable"

    },
    "WalletView\0setPrivacy\0\0privacy\0"
    "transactionClicked\0coinsSent\0message\0"
    "title\0style\0encryptionStatusChanged\0"
    "incomingTransaction\0date\0BitcoinUnit\0"
    "unit\0CAmount\0amount\0type\0address\0label\0"
    "walletName\0incomingTokenTransaction\0"
    "outOfSyncWarningClicked\0showMore\0"
    "sendCoins\0addr\0receiveCoins\0"
    "gotoOverviewPage\0gotoHistoryPage\0"
    "gotoReceiveCoinsPage\0gotoSendCoinsPage\0"
    "gotoCreateContractPage\0gotoSendToContractPage\0"
    "gotoCallContractPage\0gotoTokenPage\0"
    "gotoStakePage\0gotoDelegationPage\0"
    "gotoSuperStakerPage\0gotoSignMessageTab\0"
    "gotoVerifyMessageTab\0processNewTransaction\0"
    "QModelIndex\0parent\0start\0"
    "processNewTokenTransaction\0encryptWallet\0"
    "backupWallet\0restoreWallet\0changePassphrase\0"
    "unlockWallet\0fromMenu\0lockWallet\0"
    "signTxHardware\0tx\0usedSendingAddresses\0"
    "usedReceivingAddresses\0showProgress\0"
    "nProgress\0disableTransactionView\0"
    "disable"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WalletView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      43,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      12,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  229,    2, 0x06 /* Public */,
       4,    0,  232,    2, 0x06 /* Public */,
       5,    0,  233,    2, 0x06 /* Public */,
       6,    3,  234,    2, 0x06 /* Public */,
       9,    0,  241,    2, 0x06 /* Public */,
      10,    7,  242,    2, 0x06 /* Public */,
      20,    7,  257,    2, 0x06 /* Public */,
      21,    0,  272,    2, 0x06 /* Public */,
      22,    0,  273,    2, 0x06 /* Public */,
      23,    1,  274,    2, 0x06 /* Public */,
      23,    0,  277,    2, 0x26 /* Public | MethodCloned */,
      25,    0,  278,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      26,    0,  279,    2, 0x0a /* Public */,
      27,    0,  280,    2, 0x0a /* Public */,
      28,    0,  281,    2, 0x0a /* Public */,
      29,    1,  282,    2, 0x0a /* Public */,
      29,    0,  285,    2, 0x2a /* Public | MethodCloned */,
      30,    0,  286,    2, 0x0a /* Public */,
      31,    0,  287,    2, 0x0a /* Public */,
      32,    0,  288,    2, 0x0a /* Public */,
      33,    0,  289,    2, 0x0a /* Public */,
      34,    0,  290,    2, 0x0a /* Public */,
      35,    0,  291,    2, 0x0a /* Public */,
      36,    0,  292,    2, 0x0a /* Public */,
      37,    1,  293,    2, 0x0a /* Public */,
      37,    0,  296,    2, 0x2a /* Public | MethodCloned */,
      38,    1,  297,    2, 0x0a /* Public */,
      38,    0,  300,    2, 0x2a /* Public | MethodCloned */,
      39,    3,  301,    2, 0x0a /* Public */,
      43,    3,  308,    2, 0x0a /* Public */,
      44,    0,  315,    2, 0x0a /* Public */,
      45,    0,  316,    2, 0x0a /* Public */,
      46,    0,  317,    2, 0x0a /* Public */,
      47,    0,  318,    2, 0x0a /* Public */,
      48,    1,  319,    2, 0x0a /* Public */,
      48,    0,  322,    2, 0x2a /* Public | MethodCloned */,
      50,    0,  323,    2, 0x0a /* Public */,
      51,    1,  324,    2, 0x0a /* Public */,
      51,    0,  327,    2, 0x2a /* Public | MethodCloned */,
      53,    0,  328,    2, 0x0a /* Public */,
      54,    0,  329,    2, 0x0a /* Public */,
      55,    2,  330,    2, 0x0a /* Public */,
      57,    1,  335,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::UInt,    7,    6,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 12, 0x80000000 | 14, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,   11,   13,   15,   16,   17,   18,   19,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,   11,   15,   16,   17,   18,   19,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   24,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   24,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   24,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   24,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 40, QMetaType::Int, QMetaType::Int,   41,   42,    2,
    QMetaType::Void, 0x80000000 | 40, QMetaType::Int, QMetaType::Int,   41,   42,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   49,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   52,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    7,   56,
    QMetaType::Void, QMetaType::Bool,   58,

       0        // eod
};

void WalletView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WalletView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setPrivacy((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->transactionClicked(); break;
        case 2: _t->coinsSent(); break;
        case 3: _t->message((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3]))); break;
        case 4: _t->encryptionStatusChanged(); break;
        case 5: _t->incomingTransaction((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< BitcoinUnit(*)>(_a[2])),(*reinterpret_cast< const CAmount(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5])),(*reinterpret_cast< const QString(*)>(_a[6])),(*reinterpret_cast< const QString(*)>(_a[7]))); break;
        case 6: _t->incomingTokenTransaction((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5])),(*reinterpret_cast< const QString(*)>(_a[6])),(*reinterpret_cast< const QString(*)>(_a[7]))); break;
        case 7: _t->outOfSyncWarningClicked(); break;
        case 8: _t->showMore(); break;
        case 9: _t->sendCoins((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->sendCoins(); break;
        case 11: _t->receiveCoins(); break;
        case 12: _t->gotoOverviewPage(); break;
        case 13: _t->gotoHistoryPage(); break;
        case 14: _t->gotoReceiveCoinsPage(); break;
        case 15: _t->gotoSendCoinsPage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 16: _t->gotoSendCoinsPage(); break;
        case 17: _t->gotoCreateContractPage(); break;
        case 18: _t->gotoSendToContractPage(); break;
        case 19: _t->gotoCallContractPage(); break;
        case 20: _t->gotoTokenPage(); break;
        case 21: _t->gotoStakePage(); break;
        case 22: _t->gotoDelegationPage(); break;
        case 23: _t->gotoSuperStakerPage(); break;
        case 24: _t->gotoSignMessageTab((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 25: _t->gotoSignMessageTab(); break;
        case 26: _t->gotoVerifyMessageTab((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 27: _t->gotoVerifyMessageTab(); break;
        case 28: _t->processNewTransaction((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 29: _t->processNewTokenTransaction((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 30: _t->encryptWallet(); break;
        case 31: _t->backupWallet(); break;
        case 32: _t->restoreWallet(); break;
        case 33: _t->changePassphrase(); break;
        case 34: _t->unlockWallet((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 35: _t->unlockWallet(); break;
        case 36: _t->lockWallet(); break;
        case 37: _t->signTxHardware((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 38: _t->signTxHardware(); break;
        case 39: _t->usedSendingAddresses(); break;
        case 40: _t->usedReceivingAddresses(); break;
        case 41: _t->showProgress((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 42: _t->disableTransactionView((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (WalletView::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WalletView::setPrivacy)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (WalletView::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WalletView::transactionClicked)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (WalletView::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WalletView::coinsSent)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (WalletView::*)(const QString & , const QString & , unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WalletView::message)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (WalletView::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WalletView::encryptionStatusChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (WalletView::*)(const QString & , BitcoinUnit , const CAmount & , const QString & , const QString & , const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WalletView::incomingTransaction)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (WalletView::*)(const QString & , const QString & , const QString & , const QString & , const QString & , const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WalletView::incomingTokenTransaction)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (WalletView::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WalletView::outOfSyncWarningClicked)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (WalletView::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WalletView::showMore)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (WalletView::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WalletView::sendCoins)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (WalletView::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WalletView::receiveCoins)) {
                *result = 11;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject WalletView::staticMetaObject = { {
    QMetaObject::SuperData::link<QStackedWidget::staticMetaObject>(),
    qt_meta_stringdata_WalletView.data,
    qt_meta_data_WalletView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WalletView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WalletView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WalletView.stringdata0))
        return static_cast<void*>(this);
    return QStackedWidget::qt_metacast(_clname);
}

int WalletView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStackedWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 43)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 43;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 43)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 43;
    }
    return _id;
}

// SIGNAL 0
void WalletView::setPrivacy(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void WalletView::transactionClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void WalletView::coinsSent()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void WalletView::message(const QString & _t1, const QString & _t2, unsigned int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void WalletView::encryptionStatusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void WalletView::incomingTransaction(const QString & _t1, BitcoinUnit _t2, const CAmount & _t3, const QString & _t4, const QString & _t5, const QString & _t6, const QString & _t7)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t6))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t7))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void WalletView::incomingTokenTransaction(const QString & _t1, const QString & _t2, const QString & _t3, const QString & _t4, const QString & _t5, const QString & _t6, const QString & _t7)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t6))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t7))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void WalletView::outOfSyncWarningClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void WalletView::showMore()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void WalletView::sendCoins(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 11
void WalletView::receiveCoins()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
