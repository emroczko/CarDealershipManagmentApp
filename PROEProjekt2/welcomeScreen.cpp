#include "welcomeScreen.h"
#include "ui_welcomeScreen.h"

welcomeScreen::welcomeScreen(QWidget *parent) :
    QDialog(parent), temp(1000000),
    ui(new Ui::welcomeScreen)
{
    ui->setupUi(this);
     Check=1;
}
welcomeScreen::~welcomeScreen() {delete ui;}
bool welcomeScreen::on_zacznijOdNowa_clicked()
{
    this->accept();
    return Check;
}
void welcomeScreen::closeEvent (QCloseEvent *event)
{
    QMessageBox::StandardButton resBtn = QMessageBox::question( this, " ", tr("Czy jesteś pewny?\n"), QMessageBox::No | QMessageBox::Yes);
    if (resBtn != QMessageBox::Yes) {
        event->ignore();
    } else {
        exit(1);
    }

}

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
           QString model, price, id, condition, transmission,transmission2, engine, temp_;
           QString name, surname, money, spec, exp;



           //in>>"Samochody:";
           in>>temp_;

           while (!in.atEnd())
           {

           //in>>"BMW" >>model>>"Cena:">>price>>"zł">>"ID:">>id>>"Stan:">>condition>>"Silnik:">>engine>>"Skrzynia biegów:">>transmission;

           in>>temp_;
           if(temp_=="Motocykle:")
               break;

           in>>model>>temp_>>price>>temp_>>temp_>>id>>temp_>>condition>>temp_>>engine>>temp_>>temp_>>transmission;
           if(transmission!="Manualna")
           {
               in>>transmission2;
               temp+=Vehicle::makeCar("BMW "+model.toStdString(), price.toInt(), id.toInt(), condition.toStdString(), engine.toStdString(), transmission.toStdString()+transmission2.toStdString());
           }
           else
           temp+=Vehicle::makeCar("BMW "+model.toStdString(), price.toInt(), id.toInt(), condition.toStdString(), engine.toStdString(), transmission.toStdString());
           }


           while (!in.atEnd())
           {

           in>>temp_;
           if(temp_=="Sprzedawcy:")
               break;
           in>>model>>temp_>>price>>temp_>>temp_>>id>>temp_>>condition>>temp_>>engine>>temp_>>temp_>>transmission;


           temp+=Vehicle::makeMotorcycle("BMW "+model.toStdString(), price.toInt(), id.toInt(), condition.toStdString(), engine.toStdString(), transmission.toStdString());
           }

           while (!in.atEnd())
           {
           in>>temp_;
           if(temp_=="Mechanicy:")
           break;

           in>>name>>temp_>>surname>>temp_>>money>>temp_>>exp;

           temp+=Person::makeSalesman(name.toStdString(), surname.toStdString(), money.toInt(), exp.toInt());
           }
           while (!in.atEnd())
           {
           in>>temp_>>name;
           if(name=="")
           break;

           in>>temp_>>surname>>temp_>>money>>temp_>>spec;

           temp+=Person::makeMechanic(name.toStdString(), surname.toStdString(), money.toInt(), spec.toStdString());
           }

           temp_="cos co potem naprawie";

           file.close();


           if(temp_.isEmpty()) {
               QMessageBox::information(this, tr("Plik jest pusty"),
                   tr("Plik jest pusty"));
                    return ;
           } else {

               this->accept();
               return;
           }
           }


}
Shop welcomeScreen::pass_the_shop() const
{
    return temp;
}
