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
    explicit deleteCar(const Shop& salon, QWidget *parent = nullptr);
    ~deleteCar();

private slots:
    string on_listWidget_itemClicked();

    void on_pushButton_clicked();

    //void on_usun_clicked(const Shop& salon);



    void on_pushButton_2_clicked(Shop& salon);

private:
    Ui::deleteCar *ui;
};

#endif // DELETECAR_H
