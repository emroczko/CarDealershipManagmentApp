#pragma once

#include <QDialog>
#include <sstream>
#include "main_object_shop.h"
#include "person.h"

namespace Ui {
class ShowPersonnelWindow;
}

class ShowPersonnelWindow : public QDialog
{
    Q_OBJECT

public:
    explicit ShowPersonnelWindow(const vector<shared_ptr<Person>>&, QWidget *parent = nullptr);
    void change_text();
    ~ShowPersonnelWindow();
    void showMethod(const vector<shared_ptr<Person>>&);
    template<class T> vector<shared_ptr<Person>> showSpecialized();


public slots:
    bool on_radioWszyscy_clicked();
    bool on_radioSprzedawca_clicked();
    bool on_radioMechanik_clicked();

private:
    const vector<shared_ptr<Person>>& Personnel;
    Ui::ShowPersonnelWindow *ui;

};


