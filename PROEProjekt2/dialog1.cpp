#include "dialog1.h"
#include "ui_dialog1.h"
#include <sstream>
#include <mainobjectshop.h>

Dialog1::Dialog1(const Shop& salon, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog1)
{


       string auta = salon.getAss(salon);

       QString qstr = QString::fromStdString(auta);

       ui->setupUi(this);
       ui->listWidget->addItem(qstr);

}

Dialog1::~Dialog1()
{
    delete ui;
}


