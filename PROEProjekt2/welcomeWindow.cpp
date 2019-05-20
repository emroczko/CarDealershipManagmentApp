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
void MainWindow::on_Zacznij_od_nowa_clicked()
{
  this->hide();
}
void MainWindow::on_Wczytaj_poprzedni_stan_clicked()
{

}
