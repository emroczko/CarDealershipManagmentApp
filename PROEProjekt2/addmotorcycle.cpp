#include "addmotorcycle.h"
#include "ui_addmotorcycle.h"

AddMotorcycle::AddMotorcycle(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddMotorcycle)
{
    ui->setupUi(this);
    ui->Model_wybierz->addItem("BMW K1600-Grand-America");
    ui->Model_wybierz->addItem("BMW R1250RS");
    ui->Model_wybierz->addItem("BMW R1250RT");
    ui->Model_wybierz->addItem("BMW R1250R");
    ui->Model_wybierz->addItem("BMW R1250GS");
    ui->Model_wybierz->addItem("BMW S1000RR");
    ui->Model_wybierz->addItem("BMW S1000R");
    ui->Model_wybierz->addItem("BMW S1000XR");
    ui->Model_wybierz->addItem("BMW F850GS");
    ui->Model_wybierz->addItem("BMW F800R");
    ui->Model_wybierz->addItem("BMW F750GS");
    ui->Model_wybierz->addItem("BMW R-nineT");
    ui->Model_wybierz->addItem("BMW HP4");
    ui->Paliw_wybierz->addItem("Benzyna");
    ui->Paliw_wybierz->addItem("Diesel");
    ui->Paliw_wybierz->addItem("Elektryczny");
    ui->Stan_wybierz->addItem("Nowy");
    ui->Stan_wybierz->addItem("Używany");
    ui->Typ_silnika_wybierz->addItem("Dwusuwowy");
    ui->Typ_silnika_wybierz->addItem("Czterosuwowy");
    ui->Typ_silnika_wybierz->addItem("Elektryczny");
    Check=1;
}

AddMotorcycle::~AddMotorcycle()
{
    delete ui;
}
shared_ptr<Vehicle> AddMotorcycle::Create()
{
    string Model, take_eng, take_cond, take_eng_type;
    Model = ui->Model_wybierz->currentText().toStdString();
    double value;
    int ID;
    value = ui->Cena_pisz->toPlainText().toInt();
    ID = ui->ID_pisz->toPlainText().toInt();
    take_eng = ui->Paliw_wybierz->currentText().toStdString();
    take_cond = ui->Stan_wybierz->currentText().toStdString();
    take_eng_type = ui->Typ_silnika_wybierz->currentText().toStdString();
    return Vehicle::makeMotorcycle(Model, value, ID, take_cond, take_eng, take_eng_type);
}
shared_ptr<Vehicle> AddMotorcycle::on_Akceptuj_clicked()
{
    AddMotorcycle::Check--;
    AddMotorcycle::accept();
    return Create();
}

bool AddMotorcycle::on_Anuluj_clicked()
{
    AddMotorcycle::reject();
    return Check;
}


