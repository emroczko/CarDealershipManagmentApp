#-------------------------------------------------
#
# Project created by QtCreator 2019-05-14T22:29:24
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ShopQT
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
    ../Sources/add_car.cpp \
    ../Sources/add_motorcycle.cpp \
    ../Sources/add_personnel.cpp \
    ../Sources/customer.cpp \
    ../Sources/delete_window.cpp \
    ../Sources/employee.cpp \
    ../Sources/locations.cpp \
    ../Sources/main.cpp \
    ../Sources/main_object_shop.cpp \
    ../Sources/main_window.cpp \
    ../Sources/person.cpp \
    ../Sources/show_personnel_window.cpp \
    ../Sources/show_vehicle_window.cpp \
    ../Sources/vehicle.cpp \
    ../Sources/welcome_screen.cpp


HEADERS += \
    ../Headers/add_car.h \
    ../Headers/add_motorcycle.h \
    ../Headers/add_personnel.h \
    ../Headers/customer.h \
    ../Headers/delete_window.h \
    ../Headers/employee.h \
    ../Headers/locations.h \
    ../Headers/main_object_shop.h \
    ../Headers/main_window.h \
    ../Headers/person.h \
    ../Headers/show_personnel_window.h \
    ../Headers/show_vehicle_window.h \
    ../Headers/vehicle.h \
    ../Headers/welcome_screen.h


FORMS += \
    addvehicle.ui \
    deletewindow.ui \
    mainwindow.ui \
    showvehiclewindow.ui \
    welcomeScreen.ui \
    addmotorcycle.ui \
    addpersonnel.ui \
    showpersonnelwindow.ui


RESOURCES += \
    pics.qrc
