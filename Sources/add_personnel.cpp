#include "../Headers/add_personnel.h"
#include "ui_addpersonnel.h"

AddPersonnel::AddPersonnel(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddPersonnel)
{
    ui->setupUi(this);
    ui->Spacjalizacja_mechanik_wybierz->addItem("Mechanik");
    ui->Spacjalizacja_mechanik_wybierz->addItem("Blacharz");
    ui->Spacjalizacja_mechanik_wybierz->addItem("Lakiernik");
    ui->Spacjalizacja_mechanik_wybierz->addItem("Elektromechanik");
    ui->Spacjalizacja_mechanik_wybierz->addItem("Wulkanizator");
    ui->Spacjalizacja_mechanik_wybierz->addItem("Diagnosta");
    check_=1;
}

AddPersonnel::~AddPersonnel()
{
    delete ui;
}

bool AddPersonnel::on_cancel_mechanic_clicked()
{
    AddPersonnel::reject();
    return check_;
}

bool AddPersonnel::on_cancel_salesman_clicked()
{
   return AddPersonnel::on_cancel_mechanic_clicked();
}
shared_ptr<Person> AddPersonnel::create_mechanic()
{
    string get_name, get_surname, get_specialization;
    unsigned int get_salary;
    get_specialization = ui->Spacjalizacja_mechanik_wybierz->currentText().toStdString();
    get_name = ui->Imie_mechanik_pisz->toPlainText().toStdString();
    get_surname = ui->Nazwisko_mechanik_pisz->toPlainText().toStdString();
    get_salary = ui->Wynagrodzenie_mechanik_pisz->toPlainText().toInt();
    return Person::makeMechanic(get_name, get_surname, get_salary, get_specialization);
}
shared_ptr<Person> AddPersonnel::create_salesman()
{
    string get_name, get_surname;
    unsigned int get_salary, get_experience;
    get_name = ui->Imie_sprzedawca_pisz->toPlainText().toStdString();
    get_surname = ui->Nazwisko_sprzedawca_pisz->toPlainText().toStdString();
    get_salary = ui->Wynagrodzenie_sprzedawca_pisz->toPlainText().toInt();
    get_experience = ui->Doswiadczenie_sprzedawca_pisz->toPlainText().toInt();
    return Person::makeSalesman(get_name, get_surname, get_salary, get_experience);
}
shared_ptr<Person> AddPersonnel::on_accept_mechanic_clicked()
{
    check_--;
    AddPersonnel::accept();
    return create_mechanic();
}

shared_ptr<Person> AddPersonnel::on_accept_salesman_clicked()
{
    check_--;
    AddPersonnel::accept();
    return create_salesman();
}
