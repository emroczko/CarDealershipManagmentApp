#include "person.h"

shared_ptr<Person> Person::makeMechanic(string name, unsigned int money, string edu)
{
    return shared_ptr<Person>(new Mechanic(name, money, edu));
}
shared_ptr<Person> Person::makeSalesman(string name, unsigned int money, unsigned int exp)
{
    return shared_ptr<Person>(new Salesman(name, money, exp));
}
string Mechanic::Get_Name() const {return name_;}
unsigned int Mechanic::Get_Salary() const {return salary_;}
ostream& Mechanic::print(ostream &os) const
{
    os<<"Name: "<<Get_Name()<<"  Salary: "<<Get_Salary()<<"  Education: "<<education_;
    return os;
}
string Salesman::Get_Name() const  {return name_;}
unsigned int Salesman::Get_Salary() const {return salary_;}
ostream& Salesman::print(ostream &os) const
{
    os<<"Name: "<<Get_Name()<<"  Salary: "<<Get_Salary()<<"  Experience: "<<experience_<<"lata";
    return os;
}


//Salesman::~Salesman(){
