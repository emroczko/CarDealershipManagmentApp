#include "addvehicle.h"
#include "ui_addvehicle.h"
#include "car.h"
AddVehicle::AddVehicle(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddVehicle)
{
    ui->setupUi(this);
}

AddVehicle::~AddVehicle()
{
    delete ui;
}

void AddVehicle::on_Akceptuj_clicked()
{
    string Model, take_eng, take_cond;
    //Model = ui->Model_wybierz->
    //int value, ID;
    //value = ui->Cena_pisz->
    //ID = ui->ID_pisz
    //take_eng = ui->Paliw_wybierz
    //take_cond = ui->Stan_wybierz
}

void AddVehicle::on_Anuluj_clicked()
{
    AddVehicle::close();
}
