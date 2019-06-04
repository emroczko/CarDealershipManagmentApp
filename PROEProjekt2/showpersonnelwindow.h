#ifndef SHOWPERSONNELWINDOW_H
#define SHOWPERSONNELWINDOW_H

#include <QDialog>
#include <sstream>
#include <mainobjectshop.h>
#include "person.h"

namespace Ui {
class ShowPersonnelWindow;
}

class ShowPersonnelWindow : public QDialog
{
    Q_OBJECT

public:
    explicit ShowPersonnelWindow(const vector<shared_ptr<Person>>&, QWidget *parent = 0);
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

#endif // SHOWPERSONNELWINDOW_H
