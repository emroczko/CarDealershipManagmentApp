#ifndef MAINWINDOW2_H
#define MAINWINDOW2_H

#include <QMainWindow>
#include "mainobjectshop.h"
#include "welcomeScreen.h"
#include "ui_mainwindow2.h"
#include "addvehicle.h"
#include "addmotorcycle.h"
#include "dialog1.h"
namespace Ui {
class MainWindow2;
}

class MainWindow2 : public QMainWindow
{
    Q_OBJECT
private:
    Shop salon;
public:
    explicit MainWindow2(QWidget *parent = nullptr);
    ~MainWindow2();

private slots:
    void on_Dodaj_samochod_clicked();

    void on_Posiadane_samochodu_clicked();

    void on_Dodaj_motocykl_clicked();

private:

    Ui::MainWindow2 *ui;

};

#endif // MAINWINDOW2_H
