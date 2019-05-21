#include "mainwindow2.h"
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
    AddVehicle addCar;
    addCar.setModal(true);
    addCar.exec();
    salon+=addCar.on_Akceptuj_clicked();

}

void MainWindow2::on_Posiadane_samochodu_clicked()
{

    Dialog1 dial(salon);
    dial.setModal(true);
    dial.exec();
}

void MainWindow2::on_Dodaj_motocykl_clicked()
{
    AddMotorcycle addMotor;
    addMotor.setModal(true);
    addMotor.exec();
}
