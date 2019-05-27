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

           string name1 = fileName.toStdString();

           ifstream io;
           io.open(name1);

           QString gut;

           if(!io.is_open())
           {
               QMessageBox::information(this, tr("Unable to open file"),
                   file.errorString());
               return ;
           }
           else {
               io>>temp;
               io.close();
               gut = "dziala";
           }

           file.close();


           if(gut.isEmpty()) {
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


