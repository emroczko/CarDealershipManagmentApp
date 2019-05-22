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
    explicit Dialog1(const std::vector<std::shared_ptr<Vehicle>>& vehicles, QWidget *parent=nullptr);
    ~Dialog1();
private:
    Ui::Dialog1 *ui;
};

#endif // DIALOG1_H
