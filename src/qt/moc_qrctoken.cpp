/****************************************************************************
** Meta object code from reading C++ file 'qrctoken.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "qt/qrctoken.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qrctoken.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QRCToken_t {
    QByteArrayData data[31];
    char stringdata0[386];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QRCToken_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QRCToken_t qt_meta_stringdata_QRCToken = {
    {
QT_MOC_LITERAL(0, 0, 8), // "QRCToken"
QT_MOC_LITERAL(1, 9, 7), // "message"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 5), // "title"
QT_MOC_LITERAL(4, 24, 5), // "style"
QT_MOC_LITERAL(5, 30, 20), // "on_goToSendTokenPage"
QT_MOC_LITERAL(6, 51, 23), // "on_goToReceiveTokenPage"
QT_MOC_LITERAL(7, 75, 19), // "on_goToAddTokenPage"
QT_MOC_LITERAL(8, 95, 22), // "on_currentTokenChanged"
QT_MOC_LITERAL(9, 118, 11), // "QModelIndex"
QT_MOC_LITERAL(10, 130, 5), // "index"
QT_MOC_LITERAL(11, 136, 14), // "on_dataChanged"
QT_MOC_LITERAL(12, 151, 7), // "topLeft"
QT_MOC_LITERAL(13, 159, 11), // "bottomRight"
QT_MOC_LITERAL(14, 171, 12), // "QVector<int>"
QT_MOC_LITERAL(15, 184, 5), // "roles"
QT_MOC_LITERAL(16, 190, 17), // "on_currentChanged"
QT_MOC_LITERAL(17, 208, 7), // "current"
QT_MOC_LITERAL(18, 216, 8), // "previous"
QT_MOC_LITERAL(19, 225, 15), // "on_rowsInserted"
QT_MOC_LITERAL(20, 241, 5), // "first"
QT_MOC_LITERAL(21, 247, 4), // "last"
QT_MOC_LITERAL(22, 252, 14), // "contextualMenu"
QT_MOC_LITERAL(23, 267, 16), // "copyTokenAddress"
QT_MOC_LITERAL(24, 284, 16), // "copyTokenBalance"
QT_MOC_LITERAL(25, 301, 13), // "copyTokenName"
QT_MOC_LITERAL(26, 315, 17), // "copySenderAddress"
QT_MOC_LITERAL(27, 333, 11), // "removeToken"
QT_MOC_LITERAL(28, 345, 12), // "on_sendToken"
QT_MOC_LITERAL(29, 358, 15), // "on_receiveToken"
QT_MOC_LITERAL(30, 374, 11) // "on_addToken"

    },
    "QRCToken\0message\0\0title\0style\0"
    "on_goToSendTokenPage\0on_goToReceiveTokenPage\0"
    "on_goToAddTokenPage\0on_currentTokenChanged\0"
    "QModelIndex\0index\0on_dataChanged\0"
    "topLeft\0bottomRight\0QVector<int>\0roles\0"
    "on_currentChanged\0current\0previous\0"
    "on_rowsInserted\0first\0last\0contextualMenu\0"
    "copyTokenAddress\0copyTokenBalance\0"
    "copyTokenName\0copySenderAddress\0"
    "removeToken\0on_sendToken\0on_receiveToken\0"
    "on_addToken"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QRCToken[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,  104,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,  111,    2, 0x0a /* Public */,
       6,    0,  112,    2, 0x0a /* Public */,
       7,    0,  113,    2, 0x0a /* Public */,
       8,    1,  114,    2, 0x0a /* Public */,
      11,    3,  117,    2, 0x0a /* Public */,
      11,    2,  124,    2, 0x2a /* Public | MethodCloned */,
      16,    2,  129,    2, 0x0a /* Public */,
      19,    3,  134,    2, 0x0a /* Public */,
      22,    1,  141,    2, 0x0a /* Public */,
      23,    0,  144,    2, 0x0a /* Public */,
      24,    0,  145,    2, 0x0a /* Public */,
      25,    0,  146,    2, 0x0a /* Public */,
      26,    0,  147,    2, 0x0a /* Public */,
      27,    0,  148,    2, 0x0a /* Public */,
      28,    1,  149,    2, 0x0a /* Public */,
      29,    1,  152,    2, 0x0a /* Public */,
      30,    0,  155,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::UInt,    3,    1,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 9, 0x80000000 | 9, 0x80000000 | 14,   12,   13,   15,
    QMetaType::Void, 0x80000000 | 9, 0x80000000 | 9,   12,   13,
    QMetaType::Void, 0x80000000 | 9, 0x80000000 | 9,   17,   18,
    QMetaType::Void, 0x80000000 | 9, QMetaType::Int, QMetaType::Int,   10,   20,   21,
    QMetaType::Void, QMetaType::QPoint,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void,

       0        // eod
};

void QRCToken::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QRCToken *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->message((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3]))); break;
        case 1: _t->on_goToSendTokenPage(); break;
        case 2: _t->on_goToReceiveTokenPage(); break;
        case 3: _t->on_goToAddTokenPage(); break;
        case 4: _t->on_currentTokenChanged((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 5: _t->on_dataChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])),(*reinterpret_cast< const QVector<int>(*)>(_a[3]))); break;
        case 6: _t->on_dataChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 7: _t->on_currentChanged((*reinterpret_cast< QModelIndex(*)>(_a[1])),(*reinterpret_cast< QModelIndex(*)>(_a[2]))); break;
        case 8: _t->on_rowsInserted((*reinterpret_cast< QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 9: _t->contextualMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 10: _t->copyTokenAddress(); break;
        case 11: _t->copyTokenBalance(); break;
        case 12: _t->copyTokenName(); break;
        case 13: _t->copySenderAddress(); break;
        case 14: _t->removeToken(); break;
        case 15: _t->on_sendToken((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 16: _t->on_receiveToken((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 17: _t->on_addToken(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QRCToken::*)(const QString & , const QString & , unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QRCToken::message)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QRCToken::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_QRCToken.data,
    qt_meta_data_QRCToken,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QRCToken::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QRCToken::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QRCToken.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QRCToken::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void QRCToken::message(const QString & _t1, const QString & _t2, unsigned int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
