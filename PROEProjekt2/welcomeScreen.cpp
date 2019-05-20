#include "welcomeScreen.h"
#include "ui_welcomescreen.h"
#include <QMessageBox>
#include <QString>

welcomeScreen::welcomeScreen(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::welcomeScreen)
{
    ui->setupUi(this);
}

welcomeScreen::~welcomeScreen()
{
    delete ui;
}
void welcomeScreen::on_zacznijOdNowa_clicked()
{
    this->close();

}
