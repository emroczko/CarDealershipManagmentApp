/****************************************************************************
** Meta object code from reading C++ file 'main_window.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Headers/main_window.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'main_window.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[17];
    char stringdata0[497];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 25), // "on_add_car_button_clicked"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 28), // "on_cars_owned_button_clicked"
QT_MOC_LITERAL(4, 67, 33), // "on_add_motorcycles_button_cli..."
QT_MOC_LITERAL(5, 101, 26), // "on_sell_car_button_clicked"
QT_MOC_LITERAL(6, 128, 35), // "on_motorcycles_owned_button_c..."
QT_MOC_LITERAL(7, 164, 30), // "on_save_to_file_button_clicked"
QT_MOC_LITERAL(8, 195, 33), // "on_sell_motorcycle_button_cli..."
QT_MOC_LITERAL(9, 229, 28), // "on_salon_info_button_clicked"
QT_MOC_LITERAL(10, 258, 30), // "on_add_employee_button_clicked"
QT_MOC_LITERAL(11, 289, 27), // "on_employees_button_clicked"
QT_MOC_LITERAL(12, 317, 22), // "on_exit_button_clicked"
QT_MOC_LITERAL(13, 340, 46), // "on_cash_level_label_main_wind..."
QT_MOC_LITERAL(14, 387, 8), // "iconText"
QT_MOC_LITERAL(15, 396, 46), // "on_cash_level_label_cars_wind..."
QT_MOC_LITERAL(16, 443, 53) // "on_cash_level_label_motorcycl..."

    },
    "MainWindow\0on_add_car_button_clicked\0"
    "\0on_cars_owned_button_clicked\0"
    "on_add_motorcycles_button_clicked\0"
    "on_sell_car_button_clicked\0"
    "on_motorcycles_owned_button_clicked\0"
    "on_save_to_file_button_clicked\0"
    "on_sell_motorcycle_button_clicked\0"
    "on_salon_info_button_clicked\0"
    "on_add_employee_button_clicked\0"
    "on_employees_button_clicked\0"
    "on_exit_button_clicked\0"
    "on_cash_level_label_main_windowIconTextChanged\0"
    "iconText\0on_cash_level_label_cars_windowIconTextChanged\0"
    "on_cash_level_label_motorcycles_windowIconTextChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x08 /* Private */,
       3,    0,   85,    2, 0x08 /* Private */,
       4,    0,   86,    2, 0x08 /* Private */,
       5,    0,   87,    2, 0x08 /* Private */,
       6,    0,   88,    2, 0x08 /* Private */,
       7,    0,   89,    2, 0x08 /* Private */,
       8,    0,   90,    2, 0x08 /* Private */,
       9,    0,   91,    2, 0x08 /* Private */,
      10,    0,   92,    2, 0x08 /* Private */,
      11,    0,   93,    2, 0x08 /* Private */,
      12,    0,   94,    2, 0x08 /* Private */,
      13,    1,   95,    2, 0x08 /* Private */,
      15,    1,   98,    2, 0x08 /* Private */,
      16,    1,  101,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, QMetaType::QString,   14,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_add_car_button_clicked(); break;
        case 1: _t->on_cars_owned_button_clicked(); break;
        case 2: _t->on_add_motorcycles_button_clicked(); break;
        case 3: _t->on_sell_car_button_clicked(); break;
        case 4: _t->on_motorcycles_owned_button_clicked(); break;
        case 5: _t->on_save_to_file_button_clicked(); break;
        case 6: _t->on_sell_motorcycle_button_clicked(); break;
        case 7: _t->on_salon_info_button_clicked(); break;
        case 8: _t->on_add_employee_button_clicked(); break;
        case 9: _t->on_employees_button_clicked(); break;
        case 10: _t->on_exit_button_clicked(); break;
        case 11: _t->on_cash_level_label_main_windowIconTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: _t->on_cash_level_label_cars_windowIconTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 13: _t->on_cash_level_label_motorcycles_windowIconTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
