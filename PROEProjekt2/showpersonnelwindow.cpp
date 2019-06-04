#include "showpersonnelwindow.h"
#include "ui_showpersonnelwindow.h"


ShowPersonnelWindow::ShowPersonnelWindow(const vector<shared_ptr<Person>>& personnel,QWidget *parent) :
    QDialog(parent), Personnel(personnel),
    ui(new Ui::ShowPersonnelWindow)
{
    ui->setupUi(this);
    ui->radioWszyscy->setCheckable(true);
    ui->radioMechanik->setCheckable(true);
    ui->radioSprzedawca->setCheckable(true);
    ui->radioWszyscy->setChecked(true);

    showMethod(Personnel);
}

ShowPersonnelWindow::~ShowPersonnelWindow()
{
    delete ui;
}

bool ShowPersonnelWindow::on_radioWszyscy_clicked()
{
    showMethod(Personnel);
    return ui->radioWszyscy->isChecked();
}

bool ShowPersonnelWindow::on_radioSprzedawca_clicked()
{
    showMethod(showSpecialized<Salesman>());
    return ui->radioSprzedawca->isChecked();
}

bool ShowPersonnelWindow::on_radioMechanik_clicked()
{
    showMethod(showSpecialized<Mechanic>());
    return ui->radioMechanik->isChecked();
}
template<class T>
vector<shared_ptr<Person>> ShowPersonnelWindow::showSpecialized()
{
    vector<shared_ptr<Person>> temp;
    for(auto & i : Personnel)
    if(typeid(*i)==typeid(T)) temp.emplace_back(i);
    return temp;
}

void ShowPersonnelWindow::showMethod(const vector<shared_ptr<Person>>& list){
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
