#ifndef MAINWINDOW2_H
#define MAINWINDOW2_H

#include <QMainWindow>
#include "mainobjectshop.h"
#include "addvehicle.h"
#include "showVehicleWindow.h"
#include "welcomeScreen.h"
#include "addmotorcycle.h"

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
    void on_Wyjcie_clicked();
    void on_Sprzedaj_Auto_clicked();
    void on_Posiadane_motocykle_clicked();
    void on_stanKontsa_windowIconTextChanged(const QString &iconText);
    void on_Savetofile_clicked();
    void on_SprzedajMotocykl_clicked();
    void on_SalonInfo_clicked();

private:

    Ui::MainWindow2 *ui;

};

#endif // MAINWINDOW2_H
