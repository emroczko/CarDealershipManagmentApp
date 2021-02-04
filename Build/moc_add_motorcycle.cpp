/****************************************************************************
** Meta object code from reading C++ file 'add_motorcycle.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Headers/add_motorcycle.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'add_motorcycle.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AddMotorcycle_t {
    QByteArrayData data[5];
    char stringdata0[73];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AddMotorcycle_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AddMotorcycle_t qt_meta_stringdata_AddMotorcycle = {
    {
QT_MOC_LITERAL(0, 0, 13), // "AddMotorcycle"
QT_MOC_LITERAL(1, 14, 17), // "on_Anuluj_clicked"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 19), // "on_Akceptuj_clicked"
QT_MOC_LITERAL(4, 53, 19) // "shared_ptr<Vehicle>"

    },
    "AddMotorcycle\0on_Anuluj_clicked\0\0"
    "on_Akceptuj_clicked\0shared_ptr<Vehicle>"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AddMotorcycle[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x0a /* Public */,
       3,    0,   25,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Bool,
    0x80000000 | 4,

       0        // eod
};

void AddMotorcycle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AddMotorcycle *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { bool _r = _t->on_Anuluj_clicked();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 1: { shared_ptr<Vehicle> _r = _t->on_Akceptuj_clicked();
            if (_a[0]) *reinterpret_cast< shared_ptr<Vehicle>*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AddMotorcycle::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_AddMotorcycle.data,
    qt_meta_data_AddMotorcycle,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AddMotorcycle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AddMotorcycle::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AddMotorcycle.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int AddMotorcycle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
