#ifndef DIALOG1_H
#define DIALOG1_H

#include <QDialog>
#include "mainobjectshop.h"
namespace Ui {
class Dialog1;
}

class Dialog1 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog1(Shop& sklep, QWidget *parent = nullptr);
    ~Dialog1();

private slots:
   // void on_listView_indexesMoved(const QModelIndexList &indexes);

private:
    Ui::Dialog1 *ui;
};

#endif // DIALOG1_H
