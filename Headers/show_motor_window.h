#pragma once

#include <QMainWindow>

namespace Ui {
class ShowMotorWindow;
}

class ShowMotorWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit ShowCarsWindow(QWidget *parent = nullptr);
    ~ShowCarsWindow();

private:
    Ui::ShowCarsWindow *ui;
};


