#include "addmotorcycle.h"
#include "ui_addmotorcycle.h"

AddMotorcycle::AddMotorcycle(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddMotorcycle)
{
    ui->setupUi(this);
    ui->Model_wybierz->addItem("BMW K 1600 Grand America.");
    ui->Model_wybierz->addItem("BMW R 1250 RS");
    ui->Model_wybierz->addItem("BMW R 1250 RT");
    ui->Model_wybierz->addItem("BMW R 1250 R");
    ui->Model_wybierz->addItem("BMW R 1250 GS Adventure");
    ui->Model_wybierz->addItem("BMW S 1000 RR");
    ui->Model_wybierz->addItem("BMW S 1000 R");
    ui->Model_wybierz->addItem("BMW S 1000 XR");
    ui->Model_wybierz->addItem("BMW F 850 GS");
    ui->Model_wybierz->addItem("BMW F 800 R");
    ui->Model_wybierz->addItem("BMW F 750 GS");
    ui->Model_wybierz->addItem("BMW R nineT Scrambler");
    ui->Model_wybierz->addItem("BMW HP4 RACE");
    ui->Paliw_wybierz->addItem("Benzyna");
    ui->Paliw_wybierz->addItem("Diesel");
    ui->Stan_wybierz->addItem("Nowy");
    ui->Stan_wybierz->addItem("Urzywany");
}

AddMotorcycle::~AddMotorcycle()
{
    delete ui;
}
