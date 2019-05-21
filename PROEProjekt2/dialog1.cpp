#include "dialog1.h"
#include "ui_dialog1.h"
#include <sstream>
#include <mainobjectshop.h>

Dialog1::Dialog1(const Shop& salon, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog1)
{
       ui->setupUi(this);

       auto motory = salon.getAssortment();
       QString temp;
       std::stringstream buffer;
       string auta;
       if(motory.size()!= 0)
       {
           for(auto & i : motory)
           {
           buffer << *i;
           auta = buffer.str();
           QString qstr = QString::fromStdString(auta);
           ui->listWidget->addItem(qstr);
           auta.clear();
           buffer.str(std::string());
           qstr.clear();
           }
       }

}

Dialog1::~Dialog1()
{
    delete ui;
}


