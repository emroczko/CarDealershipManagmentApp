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
    void on_push_continue_clicked();

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    //MainWindow2 *mainWindow_2;
};

#endif // MAINWINDOW_H
