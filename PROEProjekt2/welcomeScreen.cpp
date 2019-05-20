#include "welcomeScreen.h"
#include "ui_welcomescreen.h"

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
bool welcomeScreen::on_zacznijOdNowa_clicked()
{
    this->close();
    return true;
}
