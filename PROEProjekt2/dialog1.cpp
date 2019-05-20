#include "dialog1.h"
#include "ui_dialog1.h"
#include <sstream>

Dialog1::Dialog1(const Shop& sklep, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog1)
{



    std::stringstream buffer;
    buffer << sklep<< std::endl;

    QString qstr = QString::fromStdString(buffer.str());

    ui->setupUi(this);
    ui->listWidget->addItem(qstr);
}

Dialog1::~Dialog1()
{
    delete ui;
}


