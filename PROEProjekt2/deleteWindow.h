#ifndef DELETECAR_H
#define DELETECAR_H

#include <QDialog>
#include "mainobjectshop.h"
#include <QListWidgetItem>




namespace Ui {
class deleteCar;
}

class deleteCar : public QDialog
{
    Q_OBJECT

public:

    explicit deleteCar(const std::vector<std::shared_ptr<Vehicle>>&, QWidget *parent=nullptr);

    ~deleteCar();

public slots:
    string on_listWidget_itemClicked();

    bool on_pushButton_clicked();

    string on_pushButton_2_clicked();

private:
    Ui::deleteCar *ui;
    int Check;
};

#endif // DELETECAR_H
