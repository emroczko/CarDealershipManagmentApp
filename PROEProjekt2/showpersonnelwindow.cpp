#include "showpersonnelwindow.h"
#include "ui_showpersonnelwindow.h"


ShowPersonnelWindow::ShowPersonnelWindow(const vector<shared_ptr<Person>>& personnel,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ShowPersonnelWindow)
{
    ui->setupUi(this); 
    ui->radioWszyscy->setCheckable(true);
    ui->radioMechanik->setCheckable(true);
    ui->radioSprzedawca->setCheckable(true);
    change_text(personnel);
    /*QString temp;
    std::stringstream buffer;
    string people;
        for(auto & i : personnel)
        {
        buffer << *i;
        people = buffer.str();
        QString qstr = QString::fromStdString(people);
        ui->listaPersonnel->addItem(qstr);
        people.clear();
        buffer.str(std::string());
        qstr.clear();
        }*/
}

ShowPersonnelWindow::~ShowPersonnelWindow()
{
    delete ui;
}
void ShowPersonnelWindow::change_text(const vector<shared_ptr<Person>>& list)
{
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
    //ui->listaPersonnel->update();
}
bool ShowPersonnelWindow::on_radioWszyscy_clicked() {
    return ui->radioWszyscy->isChecked();}
bool ShowPersonnelWindow::on_radioSprzedawca_clicked() {
    return ui->radioSprzedawca->isChecked();}
bool ShowPersonnelWindow::on_radioMechanik_clicked() {
    return ui->radioMechanik->isChecked();}
