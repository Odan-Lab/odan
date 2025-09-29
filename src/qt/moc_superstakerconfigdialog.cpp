/****************************************************************************
** Meta object code from reading C++ file 'superstakerconfigdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "qt/superstakerconfigdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'superstakerconfigdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SuperStakerConfigDialog_t {
    QByteArrayData data[13];
    char stringdata0[191];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SuperStakerConfigDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SuperStakerConfigDialog_t qt_meta_stringdata_SuperStakerConfigDialog = {
    {
QT_MOC_LITERAL(0, 0, 23), // "SuperStakerConfigDialog"
QT_MOC_LITERAL(1, 24, 17), // "chooseAddressType"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 3), // "idx"
QT_MOC_LITERAL(4, 47, 6), // "accept"
QT_MOC_LITERAL(5, 54, 6), // "reject"
QT_MOC_LITERAL(6, 61, 19), // "on_buttonOk_clicked"
QT_MOC_LITERAL(7, 81, 23), // "on_buttonCancel_clicked"
QT_MOC_LITERAL(8, 105, 19), // "changeConfigEnabled"
QT_MOC_LITERAL(9, 125, 17), // "updateDisplayUnit"
QT_MOC_LITERAL(10, 143, 21), // "setAddressListVisible"
QT_MOC_LITERAL(11, 165, 7), // "visible"
QT_MOC_LITERAL(12, 173, 17) // "on_enableOkButton"

    },
    "SuperStakerConfigDialog\0chooseAddressType\0"
    "\0idx\0accept\0reject\0on_buttonOk_clicked\0"
    "on_buttonCancel_clicked\0changeConfigEnabled\0"
    "updateDisplayUnit\0setAddressListVisible\0"
    "visible\0on_enableOkButton"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SuperStakerConfigDialog[] = {

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
       1,    1,   59,    2, 0x0a /* Public */,
       4,    0,   62,    2, 0x0a /* Public */,
       5,    0,   63,    2, 0x0a /* Public */,
       6,    0,   64,    2, 0x08 /* Private */,
       7,    0,   65,    2, 0x08 /* Private */,
       8,    0,   66,    2, 0x08 /* Private */,
       9,    0,   67,    2, 0x08 /* Private */,
      10,    1,   68,    2, 0x08 /* Private */,
      12,    0,   71,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void,

       0        // eod
};

void SuperStakerConfigDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SuperStakerConfigDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->chooseAddressType((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->accept(); break;
        case 2: _t->reject(); break;
        case 3: _t->on_buttonOk_clicked(); break;
        case 4: _t->on_buttonCancel_clicked(); break;
        case 5: _t->changeConfigEnabled(); break;
        case 6: _t->updateDisplayUnit(); break;
        case 7: _t->setAddressListVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->on_enableOkButton(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SuperStakerConfigDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_SuperStakerConfigDialog.data,
    qt_meta_data_SuperStakerConfigDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SuperStakerConfigDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SuperStakerConfigDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SuperStakerConfigDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int SuperStakerConfigDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
