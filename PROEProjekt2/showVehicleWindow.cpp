#include "showVehicleWindow.h"
#include "ui_dialog1.h"
#include <sstream>
#include <mainobjectshop.h>
#include "car.h"


Dialog1::Dialog1(const std::vector<std::shared_ptr<Vehicle>>& vehicles, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog1)
{
       ui->setupUi(this);
       QString temp;
       std::stringstream buffer;
       string auta;
           for(auto & i : vehicles)
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

Dialog1::~Dialog1()
{
    delete ui;
}


