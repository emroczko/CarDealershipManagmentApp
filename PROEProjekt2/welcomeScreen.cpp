#include "welcomeScreen.h"
#include "ui_welcomeScreen.h"
#include <QMessageBox>
#include <QString>
#include <QFileDialog>
#include "mainobjectshop.h"

welcomeScreen::welcomeScreen(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::welcomeScreen)
{
    ui->setupUi(this);
}
welcomeScreen::~welcomeScreen() {delete ui;}
void welcomeScreen::on_zacznijOdNowa_clicked() {this->close();}
void welcomeScreen::on_wczytajStan_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this,
           tr("Otwórz poprzedni stan"), "",
           tr("Salon (*.txt);;All Files (*)"));

       if (fileName.isEmpty())
           return;
       else {

          QFile file(fileName);

           if (!file.open(QIODevice::ReadOnly)) {
               QMessageBox::information(this, tr("Unable to open file"),
                   file.errorString());
               return;
           }

           QDataStream in(&file);
           QString wczytajSalon;

           in >> wczytajSalon;

           if (wczytajSalon.isEmpty()) {
               QMessageBox::information(this, tr("Plik jest pusty"),
                   tr("Plik jest pusty"));
           } else {
               //QMap<QString, QString>::iterator i = contacts.begin();
               //nameLine->setText(i.key());
               //addressText->setText(i.value());
           }
       }

}

