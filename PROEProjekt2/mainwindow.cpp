#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mainwindow2.h"
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //QPixmap pix("Macintosh HD⁩/⁨Users⁩/⁨erykmroczko⁩/Downloads/117682899_37k1L8Im.jpg⁩");
   // ui->label1->setPixmap(pix);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_push_continue_clicked()
{
    mainWindow_2 = new MainWindow2(this);
    mainWindow_2->show();
    this->hide();
}
