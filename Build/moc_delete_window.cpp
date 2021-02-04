/****************************************************************************
** Meta object code from reading C++ file 'delete_window.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Headers/delete_window.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'delete_window.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_deleteWindow_t {
    QByteArrayData data[6];
    char stringdata0[89];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_deleteWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_deleteWindow_t qt_meta_stringdata_deleteWindow = {
    {
QT_MOC_LITERAL(0, 0, 12), // "deleteWindow"
QT_MOC_LITERAL(1, 13, 15), // "on_Usun_clicked"
QT_MOC_LITERAL(2, 29, 6), // "string"
QT_MOC_LITERAL(3, 36, 0), // ""
QT_MOC_LITERAL(4, 37, 17), // "on_Anuluj_clicked"
QT_MOC_LITERAL(5, 55, 33) // "on_lista_do_usuniecia_itemCli..."

    },
    "deleteWindow\0on_Usun_clicked\0string\0"
    "\0on_Anuluj_clicked\0on_lista_do_usuniecia_itemClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_deleteWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    3, 0x0a /* Public */,
       4,    0,   30,    3, 0x0a /* Public */,
       5,    0,   31,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2,
    QMetaType::Bool,
    0x80000000 | 2,

       0        // eod
};

void deleteWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<deleteWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { string _r = _t->on_Usun_clicked();
            if (_a[0]) *reinterpret_cast< string*>(_a[0]) = std::move(_r); }  break;
        case 1: { bool _r = _t->on_Anuluj_clicked();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 2: { string _r = _t->on_lista_do_usuniecia_itemClicked();
            if (_a[0]) *reinterpret_cast< string*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject deleteWindow::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_deleteWindow.data,
    qt_meta_data_deleteWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *deleteWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *deleteWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_deleteWindow.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int deleteWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
