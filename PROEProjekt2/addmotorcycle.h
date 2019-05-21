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

<<<<<<< Updated upstream
public slots:
    void on_Anuluj_clicked();

    shared_ptr<Vehicle> on_Akceptuj_clicked();

=======
private slots:
    void on_Anuluj_clicked();
    
    shared_ptr<Vehicle> on_Akceptuj_clicked();
    
>>>>>>> Stashed changes
private:
    Ui::AddMotorcycle *ui;
};

#endif // ADDMOTORCYCLE_H
