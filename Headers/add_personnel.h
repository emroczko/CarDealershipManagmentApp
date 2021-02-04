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
    bool on_Anuluj_mechanik_clicked();
    bool on_Anuluj_sprzedawca_clicked();
    shared_ptr<Person> on_Akceptuj_mechanik_clicked();
    shared_ptr<Person> on_Akceptuj_clicked();
private slots:



private:
    int Check;
    shared_ptr<Person> Create_salesman();
    shared_ptr<Person> Create_mechanic();
    Ui::AddPersonnel *ui;
};


