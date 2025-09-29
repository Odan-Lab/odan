/****************************************************************************
** Meta object code from reading C++ file 'tokenlistwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "qt/tokenlistwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tokenlistwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TokenListWidget_t {
    QByteArrayData data[24];
    char stringdata0[245];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TokenListWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TokenListWidget_t qt_meta_stringdata_TokenListWidget = {
    {
QT_MOC_LITERAL(0, 0, 15), // "TokenListWidget"
QT_MOC_LITERAL(1, 16, 9), // "sendToken"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 11), // "QModelIndex"
QT_MOC_LITERAL(4, 39, 5), // "index"
QT_MOC_LITERAL(5, 45, 12), // "receiveToken"
QT_MOC_LITERAL(6, 58, 8), // "addToken"
QT_MOC_LITERAL(7, 67, 7), // "clicked"
QT_MOC_LITERAL(8, 75, 15), // "on_rowsInserted"
QT_MOC_LITERAL(9, 91, 6), // "parent"
QT_MOC_LITERAL(10, 98, 5), // "start"
QT_MOC_LITERAL(11, 104, 3), // "end"
QT_MOC_LITERAL(12, 108, 14), // "on_rowsRemoved"
QT_MOC_LITERAL(13, 123, 12), // "on_rowsMoved"
QT_MOC_LITERAL(14, 136, 11), // "destination"
QT_MOC_LITERAL(15, 148, 3), // "row"
QT_MOC_LITERAL(16, 152, 13), // "on_modelReset"
QT_MOC_LITERAL(17, 166, 16), // "on_layoutChanged"
QT_MOC_LITERAL(18, 183, 14), // "on_dataChanged"
QT_MOC_LITERAL(19, 198, 7), // "topLeft"
QT_MOC_LITERAL(20, 206, 11), // "bottomRight"
QT_MOC_LITERAL(21, 218, 10), // "on_clicked"
QT_MOC_LITERAL(22, 229, 8), // "position"
QT_MOC_LITERAL(23, 238, 6) // "button"

    },
    "TokenListWidget\0sendToken\0\0QModelIndex\0"
    "index\0receiveToken\0addToken\0clicked\0"
    "on_rowsInserted\0parent\0start\0end\0"
    "on_rowsRemoved\0on_rowsMoved\0destination\0"
    "row\0on_modelReset\0on_layoutChanged\0"
    "on_dataChanged\0topLeft\0bottomRight\0"
    "on_clicked\0position\0button"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TokenListWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06 /* Public */,
       5,    1,   72,    2, 0x06 /* Public */,
       6,    0,   75,    2, 0x06 /* Public */,
       7,    1,   76,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    3,   79,    2, 0x0a /* Public */,
      12,    3,   86,    2, 0x0a /* Public */,
      13,    5,   93,    2, 0x0a /* Public */,
      16,    0,  104,    2, 0x0a /* Public */,
      17,    0,  105,    2, 0x0a /* Public */,
      18,    2,  106,    2, 0x0a /* Public */,
      21,    2,  111,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Int,    9,   10,   11,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Int,    9,   10,   11,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Int, 0x80000000 | 3, QMetaType::Int,    9,   10,   11,   14,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,   19,   20,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   22,   23,

       0        // eod
};

void TokenListWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TokenListWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->sendToken((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 1: _t->receiveToken((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 2: _t->addToken(); break;
        case 3: _t->clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 4: _t->on_rowsInserted((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 5: _t->on_rowsRemoved((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 6: _t->on_rowsMoved((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QModelIndex(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 7: _t->on_modelReset(); break;
        case 8: _t->on_layoutChanged(); break;
        case 9: _t->on_dataChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 10: _t->on_clicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TokenListWidget::*)(const QModelIndex & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TokenListWidget::sendToken)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TokenListWidget::*)(const QModelIndex & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TokenListWidget::receiveToken)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (TokenListWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TokenListWidget::addToken)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (TokenListWidget::*)(const QModelIndex & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TokenListWidget::clicked)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TokenListWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_TokenListWidget.data,
    qt_meta_data_TokenListWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TokenListWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TokenListWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TokenListWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int TokenListWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void TokenListWidget::sendToken(const QModelIndex & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TokenListWidget::receiveToken(const QModelIndex & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void TokenListWidget::addToken()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void TokenListWidget::clicked(const QModelIndex & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
