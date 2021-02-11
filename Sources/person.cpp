#include "../Headers/person.h"

shared_ptr<Person> Person::make_mechanic(string name, string surname, unsigned int money, string spec)
{
    return shared_ptr<Person>(new Mechanic(name, surname, money, spec));
}
shared_ptr<Person> Person::make_salesman(string name, string surname, unsigned int money, unsigned int exp)
{
    return shared_ptr<Person>(new Salesman(name, surname, money, exp));
}
string Mechanic::get_name() const {return name_;}
string Mechanic::get_surname() const {return surname_;}
unsigned int Mechanic::get_salary() const {return salary_;}
ostream& Mechanic::print(ostream &os) const
{
    os<<"Imie: "<<get_name()<<"  Nazwisko: "<<get_surname()<<"  Wynagrodzenie: "<<get_salary()<<"  Specializacja: "<<specialization_;
    return os;
}
string Salesman::get_name() const  {return name_;}
string Salesman::get_surname() const {return surname_;}
unsigned int Salesman::get_salary() const {return salary_;}
ostream& Salesman::print(ostream &os) const
{
    os<<"Imie: "<<get_name()<<"  Nazwisko: "<<get_surname()<<"  Wynagrodzenie: "<<get_salary()<<"  Doświadczenie(lata): "<<experience_;
    return os;
}
