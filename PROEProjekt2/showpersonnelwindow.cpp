#include "showpersonnelwindow.h"
#include "ui_showpersonnelwindow.h"


ShowPersonnelWindow::ShowPersonnelWindow(const vector<shared_ptr<Person>>& personnel,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ShowPersonnelWindow)
{
    ui->setupUi(this); 
    ui->radioWszyscy->setChecked(true);
    QString temp;
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
        }
}

ShowPersonnelWindow::~ShowPersonnelWindow()
{
    delete ui;
}

bool ShowPersonnelWindow::on_radioWszyscy_clicked() {
    return ui->radioWszyscy->isChecked();
}
bool ShowPersonnelWindow::on_radioSprzedawca_clicked() {return ui->radioSprzedawca->isChecked();}
bool ShowPersonnelWindow::on_radioMechanik_clicked() {
    ui->radioMechanik->setChecked(true);
    return ui->radioMechanik->isChecked();}
