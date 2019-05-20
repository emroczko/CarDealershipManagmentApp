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
private slots:
    Car on_Akceptuj_clicked();

    void on_Anuluj_clicked();
public slots:
    //Car on_Akceptuj_clicked();
    //void on_Akceptuj_clicked();
    //void on_AddVehicle_finished(int result);

private slots:

    //void on_Stan_wybierz_activated(const QString &arg1);

private:
    Ui::AddVehicle *ui;
};

#endif // ADDVEHICLE_H

