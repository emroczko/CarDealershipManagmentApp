#include "../Headers/show_personnel_window.h"
#include "ui_showpersonnelwindow.h"


ShowPersonnelWindow::ShowPersonnelWindow(const vector<shared_ptr<Person>>& personnel,QWidget *parent) :
    QDialog(parent), personnel_(personnel),
    ui(new Ui::ShowPersonnelWindow)
{
    ui->setupUi(this);
    ui->radioWszyscy->setCheckable(true);
    ui->radioMechanik->setCheckable(true);
    ui->radioSprzedawca->setCheckable(true);
    ui->radioWszyscy->setChecked(true);

    this->show_method(personnel_);
}

ShowPersonnelWindow::~ShowPersonnelWindow()
{
    delete ui;
}

bool ShowPersonnelWindow::on_radioWszyscy_clicked()
{
    show_method(personnel_);
    return ui->radioWszyscy->isChecked();
}

bool ShowPersonnelWindow::on_radioSprzedawca_clicked()
{
    show_method(show_specialized<Salesman>());
    return ui->radioSprzedawca->isChecked();
}

bool ShowPersonnelWindow::on_radioMechanik_clicked()
{
    show_method(show_specialized<Mechanic>());
    return ui->radioMechanik->isChecked();
}
template<class T>
vector<shared_ptr<Person>> ShowPersonnelWindow::show_specialized()
{
    vector<shared_ptr<Person>> temp;
    for(auto  i : personnel_)
    if(typeid(*i)==typeid(T)) temp.emplace_back(i);
    return temp;
}

void ShowPersonnelWindow::show_method(const vector<shared_ptr<Person>>& list){
    QString temp;
    std::stringstream buffer;
    ui->listaPersonnel->clear();
    for(auto & i : list)
    {
        buffer << *i;
        QString qstr = QString::fromStdString(buffer.str());
        ui->listaPersonnel->addItem(qstr);
        buffer.str(std::string());
        qstr.clear();
    }
}
