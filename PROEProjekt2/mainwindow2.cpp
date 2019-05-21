#include "mainwindow2.h"
#include "ui_mainwindow2.h"
#include "addvehicle.h"
#include "showVehicleWindow.h"
#include "welcomeScreen.h"
#include "mainobjectshop.h"
#include "deleteWindow.h"
#include <sstream>

MainWindow2::MainWindow2(QWidget *parent) :
    QMainWindow(parent), salon(1000),
    ui(new Ui::MainWindow2)
{
    this->hide();
    ui->setupUi(this);
    welcomeScreen welcome;
    welcome.setModal(true);
    welcome.exec();
    this->showFullScreen();
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
    if(addCar.on_Anuluj_clicked()==false)
    {
        salon+=addCar.on_Akceptuj_clicked();
    }
}

void MainWindow2::on_Posiadane_samochodu_clicked()
{
    Dialog1 dial(salon, Vehicle_Type::Car);
    dial.setModal(true);
    dial.exec();
}
void MainWindow2::on_pushButton_clicked()
{
    AddMotorcycle addMotor;
    addMotor.setModal(true);
    addMotor.exec();
    if(addMotor.on_Anuluj_clicked()==false)
    {
        salon+=addMotor.on_Akceptuj_clicked();
    }
}

void MainWindow2::on_Wyjcie_clicked()
{
    MainWindow2::close();
}
void MainWindow2::on_Sprzedaj_Auto_clicked()
{
    deleteCar deletecar(salon, Vehicle_Type::Car);
    deletecar.setModal(true);
    deletecar.exec();
    std::stringstream buffer;

    if(salon.getAssortment().size()!= 0)
    {

        //for(auto & i : samochody)
        for(int i=0; i<salon.getAssortment().size(); i++)
        {
        buffer << *salon.getAssortment()[i];
        if(buffer.str()==deletecar.on_pushButton_2_clicked())
        {
        salon-=i;
        }
        buffer.str(std::string());
        }
}

}

void MainWindow2::on_Posiadane_motocykle_clicked()
{
    Dialog1 show(salon, Vehicle_Type::Motor);
    show.setModal(true);
    show.exec();
}

void MainWindow2::on_pushButton_2_clicked()
{
    deleteCar deletecar(salon, Vehicle_Type::Motor);
    deletecar.setModal(true);
    deletecar.exec();
    std::stringstream buffer;

    if(salon.getAssortment().size()!= 0)
    {

        //for(auto & i : samochody)
        for(int i=0; i<salon.getAssortment().size(); i++)
        {
        buffer << *salon.getAssortment()[i];
        if(buffer.str()==deletecar.on_pushButton_2_clicked())
        {
        salon-=i;
        }
        buffer.str(std::string());
        }
}

}
