#include "addvehicle.h"
#include "ui_addvehicle.h"
#include "car.h"
AddVehicle::AddVehicle(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddVehicle)
{
    ui->setupUi(this);
  //  ui->comboBox->addItem("335D");
    ui->Model_wybierz->addItem("BMW 335d");
    ui->Model_wybierz->addItem("BMW 318d");
    ui->Model_wybierz->addItem("BMW 130i");
    ui->Model_wybierz->addItem("BMW 535d");
    ui->Model_wybierz->addItem("BMW 735i");
    ui->Model_wybierz->addItem("BMW 325i");
    ui->Model_wybierz->addItem("BMW 240i");
    ui->Model_wybierz->addItem("BMW 435d");
    ui->Model_wybierz->addItem("BMW 520d");
    ui->Model_wybierz->addItem("BMW 528i");
    ui->Model_wybierz->addItem("BMW 118d");
    ui->Model_wybierz->addItem("BMW 850i");
    ui->Model_wybierz->addItem("BMW 760Li");
    ui->Stan_wybierz->addItem("Nowy");
    ui->Stan_wybierz->addItem("Używany");
    ui->Paliw_wybierz->addItem("Benzyna");
    ui->Paliw_wybierz->addItem("Diesel");
}

AddVehicle::~AddVehicle()
{
    delete ui;

}

shared_ptr<Vehicle> AddVehicle::on_Akceptuj_clicked()
{
    string Model, take_eng, take_cond;
    Model = ui->Model_wybierz->currentText().toStdString();
    double value;
    int ID;
    value = ui->Cena_pisz->toPlainText().toInt();
    ID = ui->ID_pisz->toPlainText().toInt();
    take_eng = ui->Paliw_wybierz->currentText().toStdString();
    take_cond = ui->Stan_wybierz->currentText().toStdString();



    AddVehicle::hide();

    return Car::makeVehicle(Vehicle_Type::Car, Model, value, ID, take_cond, take_eng);
}

void AddVehicle::on_Anuluj_clicked()
{
    AddVehicle::close();
}
/*
Car AddVehicle::getVehicle()
{
    Car samochod = on_Akceptuj_clicked();
    return samochod;
}*/
