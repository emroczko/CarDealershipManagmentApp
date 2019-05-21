#include "mainwindow2.h"
#include "ui_mainwindow2.h"
<<<<<<< Updated upstream

=======
#include "addvehicle.h"
#include "dialog1.h"
#include "welcomeScreen.h"
#include "mainobjectshop.h"
#include "welcomeScreen.h"
#include "deletecar.h"
>>>>>>> Stashed changes
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
<<<<<<< Updated upstream
    AddVehicle addCar;
    addCar.setModal(true);
    addCar.exec();
    salon+=addCar.on_Akceptuj_clicked();
=======
    AddVehicle add;
    add.setModal(true);
    add.exec();
    salon+=add.on_Akceptuj_clicked();
>>>>>>> Stashed changes
}

void MainWindow2::on_Posiadane_samochodu_clicked()
{

    Dialog1 dial(salon);
    dial.setModal(true);
    dial.exec();
}

<<<<<<< Updated upstream
void MainWindow2::on_pushButton_clicked()
{
    AddMotorcycle addMotor;
    addMotor.setModal(true);
    addMotor.exec();
    salon+=addMotor.on_Akceptuj_clicked();
}

void MainWindow2::on_Wyjcie_clicked()
{
    MainWindow2::close();
=======
void MainWindow2::on_Sprzedaj_Auto_clicked()
{
    deleteCar deletecar(salon);
    deletecar.setModal(true);
    deletecar.exec();
>>>>>>> Stashed changes
}
