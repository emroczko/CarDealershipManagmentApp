#pragma once

#include <QMainWindow>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
public slots:

    bool on_pushButton_clicked();
    bool on_pushButton_pressed();
private:
    Ui::MainWindow *ui;

};


