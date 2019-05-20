#ifndef MAINWINDOW2_H
#define MAINWINDOW2_H

#include <QMainWindow>
#include "welcomeWindow.h"
#include "mainobjectshop.h"

namespace Ui {
class MainWindow2;
}

class MainWindow2 : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow2(QWidget *parent = nullptr);
    Shop getShop();
    ~MainWindow2();

private slots:
    void on_Dodaj_samochod_clicked();

    void on_Posiadane_samochodu_clicked(Shop& sklep);

private:
    Ui::MainWindow2 *ui;
    MainWindow* mainWindow;
    Shop salon;
};

#endif // MAINWINDOW2_H
