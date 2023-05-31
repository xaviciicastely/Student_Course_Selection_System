/****************************************************************************
** Meta object code from reading C++ file 'optionwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../stucos/optionwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'optionwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Optionwindow_t {
    QByteArrayData data[6];
    char stringdata0[114];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Optionwindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Optionwindow_t qt_meta_stringdata_Optionwindow = {
    {
QT_MOC_LITERAL(0, 0, 12), // "Optionwindow"
QT_MOC_LITERAL(1, 13, 24), // "on_enterButton_2_clicked"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 24), // "on_enterButton_3_clicked"
QT_MOC_LITERAL(4, 64, 24), // "on_enterButton_4_clicked"
QT_MOC_LITERAL(5, 89, 24) // "on_enterButton_5_clicked"

    },
    "Optionwindow\0on_enterButton_2_clicked\0"
    "\0on_enterButton_3_clicked\0"
    "on_enterButton_4_clicked\0"
    "on_enterButton_5_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Optionwindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x08 /* Private */,
       3,    0,   35,    2, 0x08 /* Private */,
       4,    0,   36,    2, 0x08 /* Private */,
       5,    0,   37,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Optionwindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Optionwindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_enterButton_2_clicked(); break;
        case 1: _t->on_enterButton_3_clicked(); break;
        case 2: _t->on_enterButton_4_clicked(); break;
        case 3: _t->on_enterButton_5_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject Optionwindow::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_Optionwindow.data,
    qt_meta_data_Optionwindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Optionwindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Optionwindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Optionwindow.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Optionwindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
