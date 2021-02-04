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
    shared_ptr<Vehicle> Create_car();
public slots:
    shared_ptr<Vehicle> on_Akceptuj_clicked();
    bool on_Anuluj_clicked();

private:
    int Check;

    Ui::AddVehicle *ui;
};

