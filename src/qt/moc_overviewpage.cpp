/****************************************************************************
** Meta object code from reading C++ file 'overviewpage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "qt/overviewpage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'overviewpage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OverviewPage_t {
    QByteArrayData data[27];
    char stringdata0[421];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OverviewPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OverviewPage_t qt_meta_stringdata_OverviewPage = {
    {
QT_MOC_LITERAL(0, 0, 12), // "OverviewPage"
QT_MOC_LITERAL(1, 13, 15), // "showMoreClicked"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 18), // "transactionClicked"
QT_MOC_LITERAL(4, 49, 11), // "QModelIndex"
QT_MOC_LITERAL(5, 61, 5), // "index"
QT_MOC_LITERAL(6, 67, 23), // "outOfSyncWarningClicked"
QT_MOC_LITERAL(7, 91, 16), // "sendCoinsClicked"
QT_MOC_LITERAL(8, 108, 4), // "addr"
QT_MOC_LITERAL(9, 113, 19), // "receiveCoinsClicked"
QT_MOC_LITERAL(10, 133, 10), // "setBalance"
QT_MOC_LITERAL(11, 144, 26), // "interfaces::WalletBalances"
QT_MOC_LITERAL(12, 171, 8), // "balances"
QT_MOC_LITERAL(13, 180, 10), // "setPrivacy"
QT_MOC_LITERAL(14, 191, 7), // "privacy"
QT_MOC_LITERAL(15, 199, 21), // "checkForInvalidTokens"
QT_MOC_LITERAL(16, 221, 20), // "LimitTransactionRows"
QT_MOC_LITERAL(17, 242, 17), // "updateDisplayUnit"
QT_MOC_LITERAL(18, 260, 12), // "updateAlerts"
QT_MOC_LITERAL(19, 273, 8), // "warnings"
QT_MOC_LITERAL(20, 282, 21), // "updateWatchOnlyLabels"
QT_MOC_LITERAL(21, 304, 13), // "showWatchOnly"
QT_MOC_LITERAL(22, 318, 17), // "setMonospacedFont"
QT_MOC_LITERAL(23, 336, 25), // "on_showMoreButton_clicked"
QT_MOC_LITERAL(24, 362, 21), // "on_buttonSend_clicked"
QT_MOC_LITERAL(25, 384, 24), // "on_buttonReceive_clicked"
QT_MOC_LITERAL(26, 409, 11) // "showDetails"

    },
    "OverviewPage\0showMoreClicked\0\0"
    "transactionClicked\0QModelIndex\0index\0"
    "outOfSyncWarningClicked\0sendCoinsClicked\0"
    "addr\0receiveCoinsClicked\0setBalance\0"
    "interfaces::WalletBalances\0balances\0"
    "setPrivacy\0privacy\0checkForInvalidTokens\0"
    "LimitTransactionRows\0updateDisplayUnit\0"
    "updateAlerts\0warnings\0updateWatchOnlyLabels\0"
    "showWatchOnly\0setMonospacedFont\0"
    "on_showMoreButton_clicked\0"
    "on_buttonSend_clicked\0on_buttonReceive_clicked\0"
    "showDetails"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OverviewPage[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  104,    2, 0x06 /* Public */,
       3,    1,  105,    2, 0x06 /* Public */,
       6,    0,  108,    2, 0x06 /* Public */,
       7,    1,  109,    2, 0x06 /* Public */,
       7,    0,  112,    2, 0x26 /* Public | MethodCloned */,
       9,    0,  113,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    1,  114,    2, 0x0a /* Public */,
      13,    1,  117,    2, 0x0a /* Public */,
      15,    0,  120,    2, 0x0a /* Public */,
      16,    0,  121,    2, 0x08 /* Private */,
      17,    0,  122,    2, 0x08 /* Private */,
      18,    1,  123,    2, 0x08 /* Private */,
      20,    1,  126,    2, 0x08 /* Private */,
      22,    1,  129,    2, 0x08 /* Private */,
      23,    0,  132,    2, 0x08 /* Private */,
      24,    0,  133,    2, 0x08 /* Private */,
      25,    0,  134,    2, 0x08 /* Private */,
      26,    0,  135,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, QMetaType::Bool,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   19,
    QMetaType::Void, QMetaType::Bool,   21,
    QMetaType::Void, QMetaType::QFont,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void OverviewPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<OverviewPage *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->showMoreClicked(); break;
        case 1: _t->transactionClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 2: _t->outOfSyncWarningClicked(); break;
        case 3: _t->sendCoinsClicked((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->sendCoinsClicked(); break;
        case 5: _t->receiveCoinsClicked(); break;
        case 6: _t->setBalance((*reinterpret_cast< const interfaces::WalletBalances(*)>(_a[1]))); break;
        case 7: _t->setPrivacy((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->checkForInvalidTokens(); break;
        case 9: _t->LimitTransactionRows(); break;
        case 10: _t->updateDisplayUnit(); break;
        case 11: _t->updateAlerts((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: _t->updateWatchOnlyLabels((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->setMonospacedFont((*reinterpret_cast< const QFont(*)>(_a[1]))); break;
        case 14: _t->on_showMoreButton_clicked(); break;
        case 15: _t->on_buttonSend_clicked(); break;
        case 16: _t->on_buttonReceive_clicked(); break;
        case 17: _t->showDetails(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (OverviewPage::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OverviewPage::showMoreClicked)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (OverviewPage::*)(const QModelIndex & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OverviewPage::transactionClicked)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (OverviewPage::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OverviewPage::outOfSyncWarningClicked)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (OverviewPage::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OverviewPage::sendCoinsClicked)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (OverviewPage::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OverviewPage::receiveCoinsClicked)) {
                *result = 5;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OverviewPage::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_OverviewPage.data,
    qt_meta_data_OverviewPage,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OverviewPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OverviewPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OverviewPage.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int OverviewPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void OverviewPage::showMoreClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void OverviewPage::transactionClicked(const QModelIndex & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void OverviewPage::outOfSyncWarningClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void OverviewPage::sendCoinsClicked(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 5
void OverviewPage::receiveCoinsClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
