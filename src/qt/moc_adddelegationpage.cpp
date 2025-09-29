/****************************************************************************
** Meta object code from reading C++ file 'adddelegationpage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "qt/adddelegationpage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'adddelegationpage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AddDelegationPage_t {
    QByteArrayData data[16];
    char stringdata0[206];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AddDelegationPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AddDelegationPage_t qt_meta_stringdata_AddDelegationPage = {
    {
QT_MOC_LITERAL(0, 0, 17), // "AddDelegationPage"
QT_MOC_LITERAL(1, 18, 7), // "message"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 5), // "title"
QT_MOC_LITERAL(4, 33, 5), // "style"
QT_MOC_LITERAL(5, 39, 17), // "on_gasInfoChanged"
QT_MOC_LITERAL(6, 57, 13), // "blockGasLimit"
QT_MOC_LITERAL(7, 71, 11), // "minGasPrice"
QT_MOC_LITERAL(8, 83, 9), // "nGasPrice"
QT_MOC_LITERAL(9, 93, 6), // "accept"
QT_MOC_LITERAL(10, 100, 6), // "reject"
QT_MOC_LITERAL(11, 107, 4), // "show"
QT_MOC_LITERAL(12, 112, 22), // "on_clearButton_clicked"
QT_MOC_LITERAL(13, 135, 23), // "on_addDelegationClicked"
QT_MOC_LITERAL(14, 159, 28), // "on_updateAddDelegationButton"
QT_MOC_LITERAL(15, 188, 17) // "updateDisplayUnit"

    },
    "AddDelegationPage\0message\0\0title\0style\0"
    "on_gasInfoChanged\0blockGasLimit\0"
    "minGasPrice\0nGasPrice\0accept\0reject\0"
    "show\0on_clearButton_clicked\0"
    "on_addDelegationClicked\0"
    "on_updateAddDelegationButton\0"
    "updateDisplayUnit"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AddDelegationPage[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    3,   66,    2, 0x0a /* Public */,
       9,    0,   73,    2, 0x0a /* Public */,
      10,    0,   74,    2, 0x0a /* Public */,
      11,    0,   75,    2, 0x0a /* Public */,
      12,    0,   76,    2, 0x08 /* Private */,
      13,    0,   77,    2, 0x08 /* Private */,
      14,    0,   78,    2, 0x08 /* Private */,
      15,    0,   79,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::UInt,    3,    1,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::ULongLong, QMetaType::ULongLong, QMetaType::ULongLong,    6,    7,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AddDelegationPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AddDelegationPage *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->message((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3]))); break;
        case 1: _t->on_gasInfoChanged((*reinterpret_cast< quint64(*)>(_a[1])),(*reinterpret_cast< quint64(*)>(_a[2])),(*reinterpret_cast< quint64(*)>(_a[3]))); break;
        case 2: _t->accept(); break;
        case 3: _t->reject(); break;
        case 4: _t->show(); break;
        case 5: _t->on_clearButton_clicked(); break;
        case 6: _t->on_addDelegationClicked(); break;
        case 7: _t->on_updateAddDelegationButton(); break;
        case 8: _t->updateDisplayUnit(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AddDelegationPage::*)(const QString & , const QString & , unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AddDelegationPage::message)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AddDelegationPage::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_AddDelegationPage.data,
    qt_meta_data_AddDelegationPage,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AddDelegationPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AddDelegationPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AddDelegationPage.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int AddDelegationPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void AddDelegationPage::message(const QString & _t1, const QString & _t2, unsigned int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
