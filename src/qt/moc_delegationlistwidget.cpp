/****************************************************************************
** Meta object code from reading C++ file 'delegationlistwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "qt/delegationlistwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'delegationlistwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DelegationListWidget_t {
    QByteArrayData data[25];
    char stringdata0[279];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DelegationListWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DelegationListWidget_t qt_meta_stringdata_DelegationListWidget = {
    {
QT_MOC_LITERAL(0, 0, 20), // "DelegationListWidget"
QT_MOC_LITERAL(1, 21, 10), // "splitCoins"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 11), // "QModelIndex"
QT_MOC_LITERAL(4, 45, 5), // "index"
QT_MOC_LITERAL(5, 51, 16), // "removeDelegation"
QT_MOC_LITERAL(6, 68, 13), // "addDelegation"
QT_MOC_LITERAL(7, 82, 18), // "restoreDelegations"
QT_MOC_LITERAL(8, 101, 7), // "clicked"
QT_MOC_LITERAL(9, 109, 15), // "on_rowsInserted"
QT_MOC_LITERAL(10, 125, 6), // "parent"
QT_MOC_LITERAL(11, 132, 5), // "start"
QT_MOC_LITERAL(12, 138, 3), // "end"
QT_MOC_LITERAL(13, 142, 14), // "on_rowsRemoved"
QT_MOC_LITERAL(14, 157, 12), // "on_rowsMoved"
QT_MOC_LITERAL(15, 170, 11), // "destination"
QT_MOC_LITERAL(16, 182, 3), // "row"
QT_MOC_LITERAL(17, 186, 13), // "on_modelReset"
QT_MOC_LITERAL(18, 200, 16), // "on_layoutChanged"
QT_MOC_LITERAL(19, 217, 14), // "on_dataChanged"
QT_MOC_LITERAL(20, 232, 7), // "topLeft"
QT_MOC_LITERAL(21, 240, 11), // "bottomRight"
QT_MOC_LITERAL(22, 252, 10), // "on_clicked"
QT_MOC_LITERAL(23, 263, 8), // "position"
QT_MOC_LITERAL(24, 272, 6) // "button"

    },
    "DelegationListWidget\0splitCoins\0\0"
    "QModelIndex\0index\0removeDelegation\0"
    "addDelegation\0restoreDelegations\0"
    "clicked\0on_rowsInserted\0parent\0start\0"
    "end\0on_rowsRemoved\0on_rowsMoved\0"
    "destination\0row\0on_modelReset\0"
    "on_layoutChanged\0on_dataChanged\0topLeft\0"
    "bottomRight\0on_clicked\0position\0button"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DelegationListWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06 /* Public */,
       5,    1,   77,    2, 0x06 /* Public */,
       6,    0,   80,    2, 0x06 /* Public */,
       7,    0,   81,    2, 0x06 /* Public */,
       8,    1,   82,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    3,   85,    2, 0x0a /* Public */,
      13,    3,   92,    2, 0x0a /* Public */,
      14,    5,   99,    2, 0x0a /* Public */,
      17,    0,  110,    2, 0x0a /* Public */,
      18,    0,  111,    2, 0x0a /* Public */,
      19,    2,  112,    2, 0x0a /* Public */,
      22,    2,  117,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Int,   10,   11,   12,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Int,   10,   11,   12,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Int, 0x80000000 | 3, QMetaType::Int,   10,   11,   12,   15,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,   20,   21,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   23,   24,

       0        // eod
};

void DelegationListWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DelegationListWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->splitCoins((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 1: _t->removeDelegation((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 2: _t->addDelegation(); break;
        case 3: _t->restoreDelegations(); break;
        case 4: _t->clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 5: _t->on_rowsInserted((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 6: _t->on_rowsRemoved((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 7: _t->on_rowsMoved((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QModelIndex(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 8: _t->on_modelReset(); break;
        case 9: _t->on_layoutChanged(); break;
        case 10: _t->on_dataChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 11: _t->on_clicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DelegationListWidget::*)(const QModelIndex & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DelegationListWidget::splitCoins)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DelegationListWidget::*)(const QModelIndex & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DelegationListWidget::removeDelegation)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DelegationListWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DelegationListWidget::addDelegation)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (DelegationListWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DelegationListWidget::restoreDelegations)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (DelegationListWidget::*)(const QModelIndex & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DelegationListWidget::clicked)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DelegationListWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_DelegationListWidget.data,
    qt_meta_data_DelegationListWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DelegationListWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DelegationListWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DelegationListWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int DelegationListWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void DelegationListWidget::splitCoins(const QModelIndex & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DelegationListWidget::removeDelegation(const QModelIndex & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DelegationListWidget::addDelegation()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void DelegationListWidget::restoreDelegations()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void DelegationListWidget::clicked(const QModelIndex & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
