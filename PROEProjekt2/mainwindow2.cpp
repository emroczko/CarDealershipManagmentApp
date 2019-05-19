#include "mainwindow2.h"
#include "ui_mainwindow2.h"
#include "addvehicle.h"
#include "dialog1.h"
MainWindow2::MainWindow2(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow2)
{
    ui->setupUi(this);
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
//<<<<<<< Updated upstream
//=======
   // add->setAttribute(Qt::WA_DeleteOnClose);﻿
}

void MainWindow2::on_Posiadane_samochodu_clicked()
{
    Dialog1 dial;
    dial.setModal(true);
    dial.exec();

//>>>>>>> Stashed changes
}
