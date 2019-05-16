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
    string Model;
    Model = ui->Model->text().toStdString();
    int value, ID;
    value = ui->Cena->text().toInt();
    ID = ui->ID->text().toInt();
    //engine take_eng = ui->Paliw_wybierz->;
    //condition take_cond = ui->Stan_wybierz;
}
