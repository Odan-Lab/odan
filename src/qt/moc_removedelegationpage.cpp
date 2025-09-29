/****************************************************************************
** Meta object code from reading C++ file 'removedelegationpage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "qt/removedelegationpage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'removedelegationpage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RemoveDelegationPage_t {
    QByteArrayData data[16];
    char stringdata0[215];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RemoveDelegationPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RemoveDelegationPage_t qt_meta_stringdata_RemoveDelegationPage = {
    {
QT_MOC_LITERAL(0, 0, 20), // "RemoveDelegationPage"
QT_MOC_LITERAL(1, 21, 7), // "message"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 5), // "title"
QT_MOC_LITERAL(4, 36, 5), // "style"
QT_MOC_LITERAL(5, 42, 17), // "on_gasInfoChanged"
QT_MOC_LITERAL(6, 60, 13), // "blockGasLimit"
QT_MOC_LITERAL(7, 74, 11), // "minGasPrice"
QT_MOC_LITERAL(8, 86, 9), // "nGasPrice"
QT_MOC_LITERAL(9, 96, 6), // "accept"
QT_MOC_LITERAL(10, 103, 6), // "reject"
QT_MOC_LITERAL(11, 110, 4), // "show"
QT_MOC_LITERAL(12, 115, 22), // "on_clearButton_clicked"
QT_MOC_LITERAL(13, 138, 26), // "on_removeDelegationClicked"
QT_MOC_LITERAL(14, 165, 31), // "on_updateRemoveDelegationButton"
QT_MOC_LITERAL(15, 197, 17) // "updateDisplayUnit"

    },
    "RemoveDelegationPage\0message\0\0title\0"
    "style\0on_gasInfoChanged\0blockGasLimit\0"
    "minGasPrice\0nGasPrice\0accept\0reject\0"
    "show\0on_clearButton_clicked\0"
    "on_removeDelegationClicked\0"
    "on_updateRemoveDelegationButton\0"
    "updateDisplayUnit"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RemoveDelegationPage[] = {

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

void RemoveDelegationPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RemoveDelegationPage *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->message((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3]))); break;
        case 1: _t->on_gasInfoChanged((*reinterpret_cast< quint64(*)>(_a[1])),(*reinterpret_cast< quint64(*)>(_a[2])),(*reinterpret_cast< quint64(*)>(_a[3]))); break;
        case 2: _t->accept(); break;
        case 3: _t->reject(); break;
        case 4: _t->show(); break;
        case 5: _t->on_clearButton_clicked(); break;
        case 6: _t->on_removeDelegationClicked(); break;
        case 7: _t->on_updateRemoveDelegationButton(); break;
        case 8: _t->updateDisplayUnit(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (RemoveDelegationPage::*)(const QString & , const QString & , unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RemoveDelegationPage::message)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject RemoveDelegationPage::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_RemoveDelegationPage.data,
    qt_meta_data_RemoveDelegationPage,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *RemoveDelegationPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RemoveDelegationPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RemoveDelegationPage.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int RemoveDelegationPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void RemoveDelegationPage::message(const QString & _t1, const QString & _t2, unsigned int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
