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

    void on_pushButton_clicked();

    //void on_usun_clicked(const Shop& salon);



    string on_pushButton_2_clicked();





   // void on_deleteCar_destroyed(Shop& shop, string whichToDelete);

private:
    Ui::deleteCar *ui;
};

#endif // DELETECAR_H
