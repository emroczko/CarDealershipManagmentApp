#ifndef ADDMOTORCYCLE_H
#define ADDMOTORCYCLE_H

#include <QDialog>
#include <QString>
#include "car.h"

namespace Ui {
class AddMotorcycle;
}

class AddMotorcycle : public QDialog
{
    Q_OBJECT

public:
    explicit AddMotorcycle(QWidget *parent = 0);
    ~AddMotorcycle();
public slots:
    bool on_Anuluj_clicked();
    shared_ptr<Vehicle> on_Akceptuj_clicked();
private:
    int Check;
    shared_ptr<Vehicle> Create_motorcycle();
    Ui::AddMotorcycle *ui;
};

#endif // ADDMOTORCYCLE_H
