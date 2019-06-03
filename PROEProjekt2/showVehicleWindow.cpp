#include "showVehicleWindow.h"



Dialog1::Dialog1(const std::vector<std::shared_ptr<Vehicle>>& vehicles, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog1)
{
       ui->setupUi(this);
       QString temp;
       std::stringstream buffer;

           for(auto & i : vehicles)
           {
           buffer << *i;
           QString qstr = QString::fromStdString(buffer.str());
           ui->listWidget->addItem(qstr);
           buffer.str(std::string());
           }
}

Dialog1::~Dialog1()
{
    delete ui;
}


