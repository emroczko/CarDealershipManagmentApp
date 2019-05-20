#include "mainwindow2.h"
#include "ui_mainwindow2.h"
#include "addvehicle.h"
#include "dialog1.h"
#include "welcomeWindow.h"
MainWindow2::MainWindow2(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow2)
{
    this->hide();
    mainWindow = new MainWindow(this);
    mainWindow->show();
    mainWindow->setAttribute(Qt::WA_DeleteOnClose);

    ui->setupUi(this);

}

MainWindow2::~MainWindow2()
{
    delete ui;
}
void MainWindow2::on_Dodaj_samochod_clicked()
{
    AddVehicle add;
    add.setModal(true);
    add.exec();

}

void MainWindow2::on_Posiadane_samochodu_clicked()
{
    Dialog1 dial;
    dial.setModal(true);
    dial.exec();


}
