/****************************************************************************
** Meta object code from reading C++ file 'sendtocontract.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "qt/sendtocontract.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sendtocontract.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SendToContract_t {
    QByteArrayData data[19];
    char stringdata0[306];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SendToContract_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SendToContract_t qt_meta_stringdata_SendToContract = {
    {
QT_MOC_LITERAL(0, 0, 14), // "SendToContract"
QT_MOC_LITERAL(1, 15, 7), // "message"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 5), // "title"
QT_MOC_LITERAL(4, 30, 5), // "style"
QT_MOC_LITERAL(5, 36, 18), // "on_clearAllClicked"
QT_MOC_LITERAL(6, 55, 24), // "on_sendToContractClicked"
QT_MOC_LITERAL(7, 80, 17), // "on_gasInfoChanged"
QT_MOC_LITERAL(8, 98, 13), // "blockGasLimit"
QT_MOC_LITERAL(9, 112, 11), // "minGasPrice"
QT_MOC_LITERAL(10, 124, 9), // "nGasPrice"
QT_MOC_LITERAL(11, 134, 29), // "on_updateSendToContractButton"
QT_MOC_LITERAL(12, 164, 17), // "on_newContractABI"
QT_MOC_LITERAL(13, 182, 18), // "on_functionChanged"
QT_MOC_LITERAL(14, 201, 18), // "on_saveInfoClicked"
QT_MOC_LITERAL(15, 220, 18), // "on_loadInfoClicked"
QT_MOC_LITERAL(16, 239, 22), // "on_pasteAddressClicked"
QT_MOC_LITERAL(17, 262, 25), // "on_contractAddressChanged"
QT_MOC_LITERAL(18, 288, 17) // "updateDisplayUnit"

    },
    "SendToContract\0message\0\0title\0style\0"
    "on_clearAllClicked\0on_sendToContractClicked\0"
    "on_gasInfoChanged\0blockGasLimit\0"
    "minGasPrice\0nGasPrice\0"
    "on_updateSendToContractButton\0"
    "on_newContractABI\0on_functionChanged\0"
    "on_saveInfoClicked\0on_loadInfoClicked\0"
    "on_pasteAddressClicked\0on_contractAddressChanged\0"
    "updateDisplayUnit"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SendToContract[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   74,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   81,    2, 0x0a /* Public */,
       6,    0,   82,    2, 0x0a /* Public */,
       7,    3,   83,    2, 0x0a /* Public */,
      11,    0,   90,    2, 0x0a /* Public */,
      12,    0,   91,    2, 0x0a /* Public */,
      13,    0,   92,    2, 0x0a /* Public */,
      14,    0,   93,    2, 0x0a /* Public */,
      15,    0,   94,    2, 0x0a /* Public */,
      16,    0,   95,    2, 0x0a /* Public */,
      17,    0,   96,    2, 0x0a /* Public */,
      18,    0,   97,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::UInt,    3,    1,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::ULongLong, QMetaType::ULongLong, QMetaType::ULongLong,    8,    9,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SendToContract::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SendToContract *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->message((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3]))); break;
        case 1: _t->on_clearAllClicked(); break;
        case 2: _t->on_sendToContractClicked(); break;
        case 3: _t->on_gasInfoChanged((*reinterpret_cast< quint64(*)>(_a[1])),(*reinterpret_cast< quint64(*)>(_a[2])),(*reinterpret_cast< quint64(*)>(_a[3]))); break;
        case 4: _t->on_updateSendToContractButton(); break;
        case 5: _t->on_newContractABI(); break;
        case 6: _t->on_functionChanged(); break;
        case 7: _t->on_saveInfoClicked(); break;
        case 8: _t->on_loadInfoClicked(); break;
        case 9: _t->on_pasteAddressClicked(); break;
        case 10: _t->on_contractAddressChanged(); break;
        case 11: _t->updateDisplayUnit(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SendToContract::*)(const QString & , const QString & , unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SendToContract::message)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SendToContract::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_SendToContract.data,
    qt_meta_data_SendToContract,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SendToContract::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SendToContract::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SendToContract.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int SendToContract::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void SendToContract::message(const QString & _t1, const QString & _t2, unsigned int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
