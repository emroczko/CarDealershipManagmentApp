#include "../Headers/add_car.h"
#include "ui_addvehicle.h"

AddVehicle::AddVehicle(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddVehicle)
{
    ui->setupUi(this);
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
    ui->Paliw_wybierz->addItem("Elektryczny");
    ui->Skrzynia_biegow_wybierz->addItem("Automatyczna hydrauliczna");
    ui->Skrzynia_biegow_wybierz->addItem("Automatyczna bezstopniowa");
    ui->Skrzynia_biegow_wybierz->addItem("Automatyczna dwusprzęgłowa");
    ui->Skrzynia_biegow_wybierz->addItem("Manualna");
    ui->Skrzynia_biegow_wybierz->addItem("Półautomatyczna");
    Check=1;
}

AddVehicle::~AddVehicle()
{
    delete ui;

}
shared_ptr<Vehicle> AddVehicle::Create_car()
{
    string Model, take_eng, take_cond, take_transmission;
    Model = ui->Model_wybierz->currentText().toStdString();
    double value;
    int ID;
    value = ui->Cena_pisz->toPlainText().toInt();
    ID = ui->ID_pisz->toPlainText().toInt();
    take_eng = ui->Paliw_wybierz->currentText().toStdString();
    take_cond = ui->Stan_wybierz->currentText().toStdString();
    take_transmission = ui->Skrzynia_biegow_wybierz->currentText().toStdString();
    return Vehicle::makeCar(Model, value, ID, take_cond, take_eng, take_transmission);
}
shared_ptr<Vehicle> AddVehicle::on_Akceptuj_clicked()
{  
    AddVehicle::accept();
    return Create_car();
}
bool AddVehicle::on_Anuluj_clicked()
{
    AddVehicle::Check--;
    AddVehicle::reject();
    return AddVehicle::Check;
}
