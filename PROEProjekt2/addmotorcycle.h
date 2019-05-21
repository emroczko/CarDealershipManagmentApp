#ifndef ADDMOTORCYCLE_H
#define ADDMOTORCYCLE_H

#include <QDialog>

namespace Ui {
class AddMotorcycle;
}

class AddMotorcycle : public QDialog
{
    Q_OBJECT

public:
    explicit AddMotorcycle(QWidget *parent = 0);
    ~AddMotorcycle();

private:
    Ui::AddMotorcycle *ui;
};

#endif // ADDMOTORCYCLE_H
