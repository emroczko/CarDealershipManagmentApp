#include "showCarsWindow.h"
#include "ui_dialog1.h"
#include <sstream>
#include <mainobjectshop.h>
#include "car.h"

Dialog1::Dialog1(const Shop& salon, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog1)
{
       ui->setupUi(this);

       auto autaWskazniki = salon.getAssortment();
       QString temp;
       std::stringstream buffer;
       string auta;
       if(autaWskazniki.size()!= 0)
       {

           for(auto & i : autaWskazniki)
           {
               if(typeid(*i)==typeid(Car)){
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

}

Dialog1::~Dialog1()
{
    delete ui;
}


