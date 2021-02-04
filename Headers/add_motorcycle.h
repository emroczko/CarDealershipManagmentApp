#pragma once

#include <QDialog>
#include <QString>
#include "vehicle.h"
#include <string>

namespace Ui {
class AddMotorcycle;
}

class AddMotorcycle : public QDialog
{
    Q_OBJECT

public:
    explicit AddMotorcycle(QWidget *parent = nullptr);
    ~AddMotorcycle();
public slots:
    bool on_Anuluj_clicked();
    shared_ptr<Vehicle> on_Akceptuj_clicked();
private:
    int Check;
    shared_ptr<Vehicle> Create();
    Ui::AddMotorcycle *ui;
};

