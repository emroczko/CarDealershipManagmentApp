#include "showmotorcyclewindow.h"
#include "ui_showmotorcyclewindow.h"
#include <sstream>
#include <string>
#include "mainobjectshop.h"

ShowMotorcycleWindow::ShowMotorcycleWindow(const Shop& salon, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ShowMotorcycleWindow)
{
    ui->setupUi(this);


    auto motory = salon.getAssortment();
    QString temp;
    std::stringstream buffer;
    std::string auta;
    if(motory.size()!= 0)
    {
        for(auto & i : motory)
        {
            if(typeid(*i)==typeid(Motorcycle)){
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

ShowMotorcycleWindow::~ShowMotorcycleWindow()
{
    delete ui;
}
