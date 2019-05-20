#include "dialog1.h"
#include "ui_dialog1.h"

Dialog1::Dialog1(Shop& sklep, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog1)
{

    ui->setupUi(this);
    ui->listWidget->addItem()
}

Dialog1::~Dialog1()
{
    delete ui;
}


