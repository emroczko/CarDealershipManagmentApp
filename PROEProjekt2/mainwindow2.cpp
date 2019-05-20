#include "mainwindow2.h"
#include "ui_mainwindow2.h"
#include "addvehicle.h"
#include "dialog1.h"
#include "welcomeScreen.h"
#include "mainobjectshop.h"
#include "welcomescreen.h"
MainWindow2::MainWindow2(QWidget *parent) :
    QMainWindow(parent), salon(1000),
    ui(new Ui::MainWindow2)
{
    this->hide();
    ui->setupUi(this);
    welcomeScreen welcome;
    welcome.setModal(true);
    welcome.exec();
    this->show();
}

MainWindow2::~MainWindow2()
{
    delete ui;
}

void MainWindow2::on_Dodaj_samochod_clicked()
{
    AddVehicle add;
    add.setModal(true);
    add.exec();
    salon+=add.on_Akceptuj_clicked();

}

void MainWindow2::on_Posiadane_samochodu_clicked()
{

    Dialog1 dial(salon);
    dial.setModal(true);
    dial.exec();
}
