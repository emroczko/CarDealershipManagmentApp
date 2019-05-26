#ifndef MAINWINDOW2_H
#define MAINWINDOW2_H

#include <QMainWindow>
#include "mainobjectshop.h"
#include "addvehicle.h"
#include "showVehicleWindow.h"
#include "welcomeScreen.h"
#include "addmotorcycle.h"
#include "showpersonnelwindow.h"
#include "deleteWindow.h"
#include <sstream>
#include <QString>
#include <QFileDialog>
#include <QTextStream>
#include <QMessageBox>
#include "addpersonnel.h"

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
    void on_pushButton_clicked();
    void on_Sprzedaj_Auto_clicked();
    void on_Posiadane_motocykle_clicked();
    void on_stanKontsa_windowIconTextChanged(const QString &iconText);
    void on_Savetofile_clicked();
    void on_SprzedajMotocykl_clicked();
    void on_SalonInfo_clicked();
    void on_Zatrudnij_nowego_clicked();
    void on_Zatrudnieni_pracownicy_clicked();
    void on_Wyjscie_clicked();
private:
    void Income();
    void Add_car();
    void Add_motorcycle();
    void Add_employee();
    void Sell_car();
    void Sell_motorcycle();
    void Motorcycles_owned();
    void Cars_owned();
    void Salon_info();
    Ui::MainWindow2 *ui;

};

#endif // MAINWINDOW2_H
