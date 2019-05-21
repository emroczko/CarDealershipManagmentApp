#include "addmotorcycle.h"
#include "ui_addmotorcycle.h"

AddMotorcycle::AddMotorcycle(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddMotorcycle)
{
    ui->setupUi(this);
    ui->Model_wybierz->addItem("BMW R 1250 RS");
    ui->Model_wybierz->addItem("BMW R 1250 RT");
    ui->Model_wybierz->addItem("BMW R 1250 R");
    ui->Model_wybierz->addItem("BMW R 1250 GS Adventure");
    ui->Model_wybierz->addItem("BMW S 1000 RR");
    ui->Model_wybierz->addItem("BMW S 1000 R");
    ui->Model_wybierz->addItem("BMW S 1000 XR");
    ui->Model_wybierz->addItem("BMW F 800 R");
    ui->Model_wybierz->addItem("BMW F 750 GS");
    ui->Model_wybierz->addItem("BMW G 310 GS");
    ui->Model_wybierz->addItem("BMW R nineT");
    ui->Model_wybierz->addItem("BMW R nineT Racer");
    ui->Model_wybierz->addItem("BMW K 1600 Grand America.");
    ui->Stan_wybierz->addItem("Nowy");
    ui->Stan_wybierz->addItem("Urzywany");
    ui->Paliw_wybierz->addItem("Benzyna");
    ui->Paliw_wybierz->addItem("Diesel");
}
void AddMotorcycle::on_Anuluj_clicked()
{
    AddMotorcycle::close();
}

AddMotorcycle::~AddMotorcycle()
{
    delete ui;
}
shared_ptr<Vehicle> AddMotorcycle::on_Akceptuj_clicked()
{
    string Model, take_eng, take_cond;
    Model = ui->Model_wybierz->currentText().toStdString();
    double value;
    int ID;
    value = ui->Cena_pisz->toPlainText().toInt();
    ID = ui->ID_pisz->toPlainText().toInt();
    take_eng = ui->Paliw_wybierz->currentText().toStdString();
    take_cond = ui->Stan_wybierz->currentText().toStdString();
    AddMotorcycle::close();
    return Vehicle::makeVehicle(Vehicle_Type::Motor, Model, value, ID, take_cond, take_eng);
}
