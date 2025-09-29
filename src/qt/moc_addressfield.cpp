/****************************************************************************
** Meta object code from reading C++ file 'addressfield.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "qt/addressfield.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'addressfield.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AddressField_t {
    QByteArrayData data[13];
    char stringdata0[192];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AddressField_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AddressField_t qt_meta_stringdata_AddressField = {
    {
QT_MOC_LITERAL(0, 0, 12), // "AddressField"
QT_MOC_LITERAL(1, 13, 18), // "addressTypeChanged"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 11), // "AddressType"
QT_MOC_LITERAL(4, 45, 10), // "on_refresh"
QT_MOC_LITERAL(5, 56, 21), // "on_addressTypeChanged"
QT_MOC_LITERAL(6, 78, 18), // "on_editingFinished"
QT_MOC_LITERAL(7, 97, 28), // "on_availableAddressesChanged"
QT_MOC_LITERAL(8, 126, 18), // "spendableAddresses"
QT_MOC_LITERAL(9, 145, 12), // "allAddresses"
QT_MOC_LITERAL(10, 158, 16), // "includeZeroValue"
QT_MOC_LITERAL(11, 175, 11), // "addressType"
QT_MOC_LITERAL(12, 187, 4) // "UTXO"

    },
    "AddressField\0addressTypeChanged\0\0"
    "AddressType\0on_refresh\0on_addressTypeChanged\0"
    "on_editingFinished\0on_availableAddressesChanged\0"
    "spendableAddresses\0allAddresses\0"
    "includeZeroValue\0addressType\0UTXO"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AddressField[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       1,   52, // properties
       1,   56, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   42,    2, 0x0a /* Public */,
       5,    0,   43,    2, 0x0a /* Public */,
       6,    0,   44,    2, 0x0a /* Public */,
       7,    3,   45,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QStringList, QMetaType::QStringList, QMetaType::Bool,    8,    9,   10,

 // properties: name, type, flags
      11, 0x80000000 | 3, 0x0049510b,

 // properties: notify_signal_id
       0,

 // enums: name, alias, flags, count, data
       3,    3, 0x0,    1,   61,

 // enum data: key, value
      12, uint(AddressField::UTXO),

       0        // eod
};

void AddressField::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AddressField *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->addressTypeChanged((*reinterpret_cast< AddressType(*)>(_a[1]))); break;
        case 1: _t->on_refresh(); break;
        case 2: _t->on_addressTypeChanged(); break;
        case 3: _t->on_editingFinished(); break;
        case 4: _t->on_availableAddressesChanged((*reinterpret_cast< QStringList(*)>(_a[1])),(*reinterpret_cast< QStringList(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AddressField::*)(AddressType );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AddressField::addressTypeChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<AddressField *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< AddressType*>(_v) = _t->addressType(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<AddressField *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setAddressType(*reinterpret_cast< AddressType*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject AddressField::staticMetaObject = { {
    QMetaObject::SuperData::link<QComboBox::staticMetaObject>(),
    qt_meta_stringdata_AddressField.data,
    qt_meta_data_AddressField,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AddressField::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AddressField::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AddressField.stringdata0))
        return static_cast<void*>(this);
    return QComboBox::qt_metacast(_clname);
}

int AddressField::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QComboBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void AddressField::addressTypeChanged(AddressType _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
