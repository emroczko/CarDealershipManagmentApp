#include "showmotorcyclewindow.h"
#include "ui_showmotorcyclewindow.h"

ShowMotorcycleWindow::ShowMotorcycleWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ShowMotorcycleWindow)
{
    ui->setupUi(this);
}

ShowMotorcycleWindow::~ShowMotorcycleWindow()
{
    delete ui;
}
