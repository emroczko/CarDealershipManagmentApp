#include "person.h"

shared_ptr<Person> Person::makePerson(Role role, string name, unsigned int money)
{
    if(role==Role::Mechanic) {return shared_ptr<Person>(new Mechanic(name, money));}
    if(role==Role::Salesman) {return shared_ptr<Person>(new Salesman(name, money));}
    else return NULL;
}
string Mechanic::Get_Name() const {return name_;}
unsigned int Mechanic::Get_Money() const {return money_;}
ostream& Mechanic::print(ostream &os) const
{
    os<<"Name: "<<Get_Name()<<"  Money: "<<Get_Money();
    return os;
}
string Salesman::Get_Name() const  {return name_;}
unsigned int Salesman::Get_Money() const {return money_;}
ostream& Salesman::print(ostream &os) const
{
    os<<"Name: "<<Get_Name()<<"  Money: "<<Get_Money();
    return os;
}


