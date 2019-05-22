#include "addpersonnel.h"
#include "ui_addpersonnel.h"

AddPersonnel::AddPersonnel(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddPersonnel)
{
    ui->setupUi(this);
    ui->Spacjalizacja_mechanik_wybierz->addItem("");
    ui->Spacjalizacja_mechanik_wybierz->addItem("");
    ui->Spacjalizacja_mechanik_wybierz->addItem("");
    ui->Spacjalizacja_mechanik_wybierz->addItem("");
    Check=1;
}

AddPersonnel::~AddPersonnel()
{
    delete ui;
}

bool AddPersonnel::on_Anuluj_mechanik_clicked()
{
    AddPersonnel::reject();
    return Check;
}

bool AddPersonnel::on_Anuluj_sprzedawca_clicked()
{
   return AddPersonnel::on_Anuluj_mechanik_clicked();
}

shared_ptr<Person> AddPersonnel::on_Akceptuj_mechanik_clicked()
{
    Check--;
    string get_name, get_surname, get_specialization;
    unsigned int get_salary;
    get_specialization = ui->Spacjalizacja_mechanik_wybierz->currentText().toStdString();
    get_name = ui->Imie_mechanik_pisz->toPlainText().toStdString();
    get_surname = ui->Nazwisko_mechanik_pisz->toPlainText().toStdString();
    get_salary = ui->Wynagrodzenie_mechanik_pisz->toPlainText().toInt();
    AddPersonnel::accept();
    return Person::makeMechanic(get_name, get_surname, get_salary, get_specialization);

}
