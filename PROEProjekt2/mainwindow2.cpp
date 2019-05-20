#include "mainwindow2.h"
#include "ui_mainwindow2.h"
#include "addvehicle.h"
#include "dialog1.h"
#include "welcomeWindow.h"
#include "mainobjectshop.h"
MainWindow2::MainWindow2(QWidget *parent) :
     salon(1000), QMainWindow(parent),
    ui(new Ui::MainWindow2)
{
    this->hide();
    ui->setupUi(this);
    mainWindow = new MainWindow(this);
    mainWindow->show();
    mainWindow->setAttribute(Qt::WA_DeleteOnClose);


    /*MainWindow mainWindow;
    mainWindow.setModal(true);
    mainWindow.exec();*/


    //Shop salon(1000);
   /* if(mainWindow->on_pushButton_pressed()){
        mainWindow->hide();

    }*/
this->show();





}

MainWindow2::~MainWindow2()
{
    delete ui;
    delete mainWindow;
}
Shop getShop(){
    Shop shop2;
    return shop2;
}
void MainWindow2::on_Dodaj_samochod_clicked()
{
    AddVehicle add;
    add.setModal(true);
    add.exec();

}

void MainWindow2::on_Posiadane_samochodu_clicked()
{
    //Shop sklep;
    Dialog1 dial(salon);
    dial.setModal(true);
    dial.exec();
}
