#include "addvehicle.h"
#include "ui_addvehicle.h"
#include "car.h"
AddVehicle::AddVehicle(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddVehicle)
{
    ui->setupUi(this);
  //  ui->comboBox->addItem("335D");
    ui->Model_wybierz->addItem("335d");
    ui->Model_wybierz->addItem("325i");
    ui->Model_wybierz->addItem("240i");
    ui->Model_wybierz->addItem("435d");
    ui->Model_wybierz->addItem("520d");
    ui->Model_wybierz->addItem("528i");
    ui->Model_wybierz->addItem("118d");
    ui->Model_wybierz->addItem("850i");
    ui->Model_wybierz->addItem("760Li");
    ui->Stan_wybierz->addItem("Nowy");
    ui->Stan_wybierz->addItem("Używany");
    ui->Paliw_wybierz->addItem("Benzyna");
    ui->Paliw_wybierz->addItem("Diesel");
}

AddVehicle::~AddVehicle()
{
    delete ui;

}

void AddVehicle::on_Akceptuj_clicked()
{
    string Model, take_eng, take_cond;
    Model = ui->Model_wybierz->currentText().toStdString();
    int value, ID;
    value = ui->Cena_pisz->toPlainText().toInt();
    ID = ui->ID_pisz->toPlainText().toInt();
    take_eng = ui->Paliw_wybierz->currentText().toStdString();
    take_cond = ui->Stan_wybierz->currentText().toStdString();
}

void AddVehicle::on_Anuluj_clicked()
{
    AddVehicle::close();
}
