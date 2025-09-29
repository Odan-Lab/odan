/****************************************************************************
** Meta object code from reading C++ file 'receiverequestdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "qt/receiverequestdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'receiverequestdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ReceiveRequestDialog_t {
    QByteArrayData data[11];
    char stringdata0[175];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ReceiveRequestDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ReceiveRequestDialog_t qt_meta_stringdata_ReceiveRequestDialog = {
    {
QT_MOC_LITERAL(0, 0, 20), // "ReceiveRequestDialog"
QT_MOC_LITERAL(1, 21, 5), // "clear"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 6), // "reject"
QT_MOC_LITERAL(4, 35, 6), // "accept"
QT_MOC_LITERAL(5, 42, 21), // "on_btnCopyURI_clicked"
QT_MOC_LITERAL(6, 64, 25), // "on_btnCopyAddress_clicked"
QT_MOC_LITERAL(7, 90, 28), // "on_btnRefreshAddress_clicked"
QT_MOC_LITERAL(8, 119, 28), // "on_btnRequestPayment_clicked"
QT_MOC_LITERAL(9, 148, 19), // "on_btnClear_clicked"
QT_MOC_LITERAL(10, 168, 6) // "update"

    },
    "ReceiveRequestDialog\0clear\0\0reject\0"
    "accept\0on_btnCopyURI_clicked\0"
    "on_btnCopyAddress_clicked\0"
    "on_btnRefreshAddress_clicked\0"
    "on_btnRequestPayment_clicked\0"
    "on_btnClear_clicked\0update"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ReceiveRequestDialog[] = {

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
       1,    0,   59,    2, 0x0a /* Public */,
       3,    0,   60,    2, 0x0a /* Public */,
       4,    0,   61,    2, 0x0a /* Public */,
       5,    0,   62,    2, 0x08 /* Private */,
       6,    0,   63,    2, 0x08 /* Private */,
       7,    0,   64,    2, 0x08 /* Private */,
       8,    0,   65,    2, 0x08 /* Private */,
       9,    0,   66,    2, 0x08 /* Private */,
      10,    0,   67,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
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

void ReceiveRequestDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ReceiveRequestDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->clear(); break;
        case 1: _t->reject(); break;
        case 2: _t->accept(); break;
        case 3: _t->on_btnCopyURI_clicked(); break;
        case 4: _t->on_btnCopyAddress_clicked(); break;
        case 5: _t->on_btnRefreshAddress_clicked(); break;
        case 6: _t->on_btnRequestPayment_clicked(); break;
        case 7: _t->on_btnClear_clicked(); break;
        case 8: _t->update(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject ReceiveRequestDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_ReceiveRequestDialog.data,
    qt_meta_data_ReceiveRequestDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ReceiveRequestDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ReceiveRequestDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ReceiveRequestDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int ReceiveRequestDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
