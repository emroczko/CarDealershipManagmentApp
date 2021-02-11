#pragma once
#include <string>
#include <memory>
#include <QDialog>
#include "person.h"

using namespace std;

namespace Ui {
class AddPersonnel;
}

class AddPersonnel : public QDialog
{
    Q_OBJECT

public:
    explicit AddPersonnel(QWidget *parent = nullptr);
    ~AddPersonnel();

public slots:
    bool on_cancel_mechanic_clicked();
    bool on_cancel_salesman_clicked();
    shared_ptr<Person> on_accept_mechanic_clicked();
    shared_ptr<Person> on_accept_salesman_clicked();
private slots:



private:
    int check_;
    shared_ptr<Person> create_salesman();
    shared_ptr<Person> create_mechanic();
    Ui::AddPersonnel *ui;
};


