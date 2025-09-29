/****************************************************************************
** Meta object code from reading C++ file 'splitutxopage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "qt/splitutxopage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'splitutxopage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SplitUTXOPage_t {
    QByteArrayData data[11];
    char stringdata0[137];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SplitUTXOPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SplitUTXOPage_t qt_meta_stringdata_SplitUTXOPage = {
    {
QT_MOC_LITERAL(0, 0, 13), // "SplitUTXOPage"
QT_MOC_LITERAL(1, 14, 7), // "message"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 5), // "title"
QT_MOC_LITERAL(4, 29, 5), // "style"
QT_MOC_LITERAL(5, 35, 6), // "accept"
QT_MOC_LITERAL(6, 42, 6), // "reject"
QT_MOC_LITERAL(7, 49, 17), // "updateDisplayUnit"
QT_MOC_LITERAL(8, 67, 25), // "on_updateSplitCoinsButton"
QT_MOC_LITERAL(9, 93, 20), // "on_splitCoinsClicked"
QT_MOC_LITERAL(10, 114, 22) // "on_cancelButtonClicked"

    },
    "SplitUTXOPage\0message\0\0title\0style\0"
    "accept\0reject\0updateDisplayUnit\0"
    "on_updateSplitCoinsButton\0"
    "on_splitCoinsClicked\0on_cancelButtonClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SplitUTXOPage[] = {

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
       1,    3,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   56,    2, 0x0a /* Public */,
       6,    0,   57,    2, 0x0a /* Public */,
       7,    0,   58,    2, 0x08 /* Private */,
       8,    0,   59,    2, 0x08 /* Private */,
       9,    0,   60,    2, 0x08 /* Private */,
      10,    0,   61,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::UInt,    3,    1,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SplitUTXOPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SplitUTXOPage *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->message((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3]))); break;
        case 1: _t->accept(); break;
        case 2: _t->reject(); break;
        case 3: _t->updateDisplayUnit(); break;
        case 4: _t->on_updateSplitCoinsButton(); break;
        case 5: _t->on_splitCoinsClicked(); break;
        case 6: _t->on_cancelButtonClicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SplitUTXOPage::*)(const QString & , const QString & , unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SplitUTXOPage::message)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SplitUTXOPage::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_SplitUTXOPage.data,
    qt_meta_data_SplitUTXOPage,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SplitUTXOPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SplitUTXOPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SplitUTXOPage.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int SplitUTXOPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
void SplitUTXOPage::message(const QString & _t1, const QString & _t2, unsigned int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
