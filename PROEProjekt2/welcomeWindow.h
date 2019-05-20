#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
//#include "mainwindow2.h"


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
public slots:

    bool on_pushButton_clicked();
    bool on_pushButton_pressed();

private slots:
<<<<<<< HEAD
    void on_Zacznij_od_nowa_clicked();

    void on_Wczytaj_poprzedni_stan_clicked();
=======





>>>>>>> 9cf888ebb115f179d1fd1ea9630e673d8440cc34

private:
    Ui::MainWindow *ui;

};

#endif // MAINWINDOW_H
