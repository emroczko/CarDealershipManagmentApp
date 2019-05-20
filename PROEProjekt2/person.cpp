#include "person.h"

shared_ptr<Person> Person::makePerson(Role role, string name, unsigned int money)
{
    if(role==Role::CUSTOMER) {return shared_ptr<Person>(new Customer(name, money));}
    if(role==Role::EMPLOYEE) {return shared_ptr<Person>(new Employee(name, money));}
}
string Customer::Get_Name() const {return name_;}
unsigned int Customer::Get_Money() const {return money_;}
ostream& Customer::print(ostream &os) const
{
    os<<"Name: "<<Get_Name()<<"  Money: "<<Get_Money();
}
string Employee::Get_Name() const  {return name_;}
unsigned int Employee::Get_Money() const {return money_;}
ostream& Employee::print(ostream &os) const
{
    os<<"Name: "<<Get_Name()<<"  Money: "<<Get_Money();
}


