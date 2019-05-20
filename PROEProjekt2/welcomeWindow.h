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

private slots:
    void on_Zacznij_od_nowa_clicked();

    void on_Wczytaj_poprzedni_stan_clicked();

private:
    Ui::MainWindow *ui;
    //MainWindow2 *mainWindow_2;
};

#endif // MAINWINDOW_H
