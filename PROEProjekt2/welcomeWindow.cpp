#include "welcomeWindow.h"
#include "ui_mainwindow.h"
#include "mainwindow2.h"
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
<<<<<<< HEAD
void MainWindow::on_Zacznij_od_nowa_clicked()
=======


bool MainWindow::on_pushButton_clicked()
>>>>>>> 9cf888ebb115f179d1fd1ea9630e673d8440cc34
{

}

bool MainWindow::on_pushButton_pressed()
{
    this->hide();
    return true;
}
void MainWindow::on_Wczytaj_poprzedni_stan_clicked()
{

}
