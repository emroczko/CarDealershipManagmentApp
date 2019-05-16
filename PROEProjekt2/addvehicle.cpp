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
    //QString Model;
    //Model = ui->Model;
    //qint32 value, ID;
    //value = ui->Cena;
    //ID = ui->ID;
    //engine take_eng = ui->Paliw_wybierz->;
    //condition take_cond = ui->Stan_wybierz;
}
