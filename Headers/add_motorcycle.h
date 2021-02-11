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
    bool on_cancel_clicked();
    shared_ptr<Vehicle> on_accept_clicked();

private:
    int check_;
    shared_ptr<Vehicle> create_motorcycle();
    Ui::AddMotorcycle *ui;
};

