#include "deletecar.h"
#include "ui_deletecar.h"
#include <sstream>
#include <mainobjectshop.h>

deleteCar::deleteCar(const Shop& salon, QWidget *parent):
    QDialog(parent),
    ui(new Ui::deleteCar)
{
    ui->setupUi(this);

    //shared_ptr<Vehicle> motory;
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

deleteCar::~deleteCar()
{
    delete ui;
}

string deleteCar::on_listWidget_itemClicked()
{
    QString temp;
    temp += ui->listWidget->currentItem()->text();
    string ret = temp.toStdString();
    return ret;
}

void deleteCar::on_pushButton_clicked()
{
    deleteCar::close();
}
/*
void deleteCar::on_usun_clicked(const Shop& salon)
{
    string whichToDelete = deleteCar::on_listWidget_itemClicked();
    std::stringstream buffer;
    auto samochody = salon.getAssortment();
    if(samochody.size()!= 0)
    {

        //for(auto & i : samochody)
        for(int i=0; i<samochody.size(); i++)
        {
        buffer << *samochody[i];
        if(buffer.str()==whichToDelete)
        {
        samochody.erase(samochody.begin()+i);
        }
        buffer.str(std::string());
        }
    }
    deleteCar::close();

}*/


void deleteCar::on_pushButton_2_clicked(Shop& salon)
{

    /*

    string whichToDelete = deleteCar::on_listWidget_itemClicked();
    std::stringstream buffer;
    auto samochody = salon.getAssortment();
    if(samochody.size()!= 0)
    {

        //for(auto & i : samochody)
        for(int i=0; i<samochody.size(); i++)
        {
        buffer << *samochody[i];
        if(buffer.str()==whichToDelete)
        {
        samochody.erase(samochody.begin()+i);
        }
        buffer.str(std::string());
        }
    }*/
     deleteCar::close();
}
