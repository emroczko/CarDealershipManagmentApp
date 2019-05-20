#include "mainwindow2.h"
#include <QApplication>
#include "car.h"
#include "mainobjectshop.h"
#include "addvehicle.h"

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);


    a.setQuitOnLastWindowClosed(false);
    MainWindow2 w;
    //w.show();


    return a.exec();;

}
