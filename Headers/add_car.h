#pragma once
#include <QDialog>
#include <QString>
#include <QMessageBox>
#include "vehicle.h"

namespace Ui {
class AddVehicle;
}

class AddVehicle : public QDialog
{
    Q_OBJECT

public:
    explicit AddVehicle(QWidget *parent = nullptr);
    ~AddVehicle();
    shared_ptr<Vehicle> create_car();

public slots:
    shared_ptr<Vehicle> on_accept_clicked();
    bool on_cancel_clicked();

private:
    int check_;
    Ui::AddVehicle *ui;
};

