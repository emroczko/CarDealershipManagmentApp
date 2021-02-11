#include "../Headers/welcome_screen.h"
#include "ui_welcomeScreen.h"

welcomeScreen::welcomeScreen(QWidget *parent) :
    QDialog(parent), tempShop_(1000000),
    ui(new Ui::welcomeScreen)
{
    ui->setupUi(this);
    check_=1;
}
welcomeScreen::~welcomeScreen() {delete ui;}

bool welcomeScreen::on_zacznijOdNowa_clicked()
{
    this->accept();
    return check_;
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
    check_--;
    QString fileName = QFileDialog::getOpenFileName(this, tr("Odtwórz poprzedni stan"), "", tr("Salon (*.txt);;All Files (*)"));

    if (fileName.isEmpty())
        return ;
    else{
        ifstream io(fileName.toStdString());

        if(!io.is_open()){
               QMessageBox::information(this, tr("Nie można otworzyć!"), tr("Nie można otworzyć!"));
               return ;
           }
        io>>tempShop_;
        io.close();
        this->accept();
        }
}

Shop welcomeScreen::pass_the_shop() const
{
    return tempShop_;
}


