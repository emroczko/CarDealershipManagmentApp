#include "mainwindow.h"
#include <QApplication>
#include "car.h"
#include "mainobjectshop.h"
#include "addvehicle.h"

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    MainWindow w;

    return a.exec();

}
