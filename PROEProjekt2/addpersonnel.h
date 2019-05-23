#ifndef ADDPERSONNEL_H
#define ADDPERSONNEL_H

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
    explicit AddPersonnel(QWidget *parent = 0);
    ~AddPersonnel();

public slots:
    bool on_Anuluj_mechanik_clicked();
    bool on_Anuluj_sprzedawca_clicked();
    shared_ptr<Person> on_Akceptuj_mechanik_clicked();
    shared_ptr<Person> on_Akceptuj_clicked();
private:
    int Check;
    shared_ptr<Person> Create_salesman();
    shared_ptr<Person> Create_mechanic();
    Ui::AddPersonnel *ui;
};

#endif // ADDPERSONNEL_H