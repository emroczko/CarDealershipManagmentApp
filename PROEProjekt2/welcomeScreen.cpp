#include "welcomescreen.h"
#include "ui_welcomeScreen.h"
#include <QMessageBox>
#include <QString>
#include <QFileDialog>
#include <QTextStream>
#include "mainobjectshop.h"
#include <cstring>
#include <sstream>


welcomeScreen::welcomeScreen(QWidget *parent) :
    QDialog(parent), temp(1000000),
    ui(new Ui::welcomeScreen)
{
    ui->setupUi(this);
     Check=1;
}

welcomeScreen::~welcomeScreen()
{
    delete ui;
}
bool welcomeScreen::on_zacznijOdNowa_clicked()
{
    this->close();
    return Check;
}
/*
void welcomeScreen::on_wczytajStan_clicked()
{
    Check--;
    Shop tempSalon(1000000);
    QString fileName = QFileDialog::getOpenFileName(this,
           tr("Otwórz poprzedni stan"), "",
           tr("Salon (*.txt);;All Files (*)"));

       if (fileName.isEmpty())
           return ;
       else {

          QFile file(fileName);

           if (!file.open(QIODevice::ReadOnly)) {
               QMessageBox::information(this, tr("Unable to open file"),
                   file.errorString());
               return ;
           }

           shared_ptr<Vehicle> tempVehicle;
           string tempStringShop;
           QString qmotorcycle = "Motocykle: ";
           string motorcycle = "Motocykle: ";
           QString qcar = "Samochody: ";
           QTextStream in(&file);
           QString line;
           QString temp1;
           QString r;
           QString modelNumber;

            int i = 1;
            in >> temp1;
            in >> r;
            in >> modelNumber;


           while (!in.atEnd())
           {
                 line += in.readLine();
                 if(line!=qcar && line!=qmotorcycle)
                 {
                     tempStringShop += line.toStdString()+"\n";
                 }
                 line.clear();
                 i=0;

           }
           if(i==0)
           {
               line+="Good";
           }


           file.close();

           string nowy = tempStringShop;

           if (line.isEmpty()) {
               QMessageBox::information(this, tr("Plik jest pusty"),
                   tr("Plik jest pusty"));
                    return ;
           } else {

               std::istringstream f(tempStringShop);
               std::string line1, cena=" Cena: ";
               while (std::getline(f, line1)) {
                    string now = line1;
                    string model;
                    size_t found = line1.find(cena);
                    if (found != string::npos)
                    model = line1.substr(0,found);
                    temp+=Vehicle::makeCar(model, 12000, 90, "Używany", "Diesel", "Automat");
                     }

               //string car = "Samochody: ";
               this->close();
               return;

           }
       }

}
*/
void welcomeScreen::on_wczytajStan_clicked()
{
    Check--;
    QString fileName = QFileDialog::getOpenFileName(this,
           tr("Odtwórz poprzedni stan"), "",
           tr("Salon (*.txt);;All Files (*)"));

       if (fileName.isEmpty())
           return ;
       else {

          QFile file(fileName);

           if (!file.open(QIODevice::ReadOnly)) {
               QMessageBox::information(this, tr("Unable to open file"),
                   file.errorString());
               return ;
           }

           QTextStream in(&file);
           QString model, price, id, condition, transmission, engine;

            in>>"Samochody:";

           while (!in.atEnd())
           {
           in>>"BMW">>model>>"Cena:">>price>>"zł">>"ID:">>id>>"Stan:">>condition>>"Silnik:">>engine>>"Skrzynia biegów:">>transmission;

           temp+=Vehicle::makeCar(model.toStdString(), price.toInt(), id.toInt(), condition.toStdString(), engine.toStdString(), transmission.toStdString());
           }
           QString line="cos";

           file.close();


           if (line.isEmpty()) {
               QMessageBox::information(this, tr("Plik jest pusty"),
                   tr("Plik jest pusty"));
                    return ;
           } else {


               this->close();
               return;
            }
           }


}
Shop welcomeScreen::pass_the_shop() const
{
    return temp;
}
