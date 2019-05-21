#ifndef ADDVEHICLE_H
#define ADDVEHICLE_H

#include <QDialog>
#include <QString>
#include "car.h"

namespace Ui {
class AddVehicle;
}

class AddVehicle : public QDialog
{
    Q_OBJECT

public:
    explicit AddVehicle(QWidget *parent = 0);
    ~AddVehicle();
    Car getVehicle();
public slots:
    shared_ptr<Vehicle> on_Akceptuj_clicked();
    void on_Anuluj_clicked();
private:
    Ui::AddVehicle *ui;
};

#endif // ADDVEHICLE_H

