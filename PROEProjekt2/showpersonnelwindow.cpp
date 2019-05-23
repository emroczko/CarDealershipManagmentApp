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
    ui->radioWszyscy->setEnabled(true);
    showMethod(Personnel);
}

ShowPersonnelWindow::~ShowPersonnelWindow()
{
    delete ui;
}

bool ShowPersonnelWindow::on_radioWszyscy_clicked() {
    showMethod(Personnel);
    return ui->radioWszyscy->isChecked();
}

bool ShowPersonnelWindow::on_radioSprzedawca_clicked() {
    vector<shared_ptr<Person>> temp;
    for(auto & i : Personnel){
        if(typeid(*i)==typeid(Salesman))
        {
        temp.emplace_back(i);
        }
    }
    showMethod(temp);
    return ui->radioSprzedawca->isChecked();}
bool ShowPersonnelWindow::on_radioMechanik_clicked() {
    vector<shared_ptr<Person>> temp;
    for(auto & i : Personnel){
        if(typeid(*i)==typeid(Mechanic))
        {
        temp.emplace_back(i);
        }
    }
    showMethod(temp);
    return ui->radioMechanik->isChecked();}

void ShowPersonnelWindow::showMethod(const vector<shared_ptr<Person>>& list){
    QString temp;
    std::stringstream buffer;
    string people;
    ui->listaPersonnel->clear();
    for(auto & i : list)
    {
        buffer << *i;
        people = buffer.str();
        QString qstr = QString::fromStdString(people);
        ui->listaPersonnel->addItem(qstr);
        people.clear();
        buffer.str(std::string());
        qstr.clear();
    }
}
