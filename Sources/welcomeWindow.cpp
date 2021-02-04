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
bool MainWindow::on_pushButton_clicked()
{

}
bool MainWindow::on_pushButton_pressed()
{
    this->hide();
    return true;
}
