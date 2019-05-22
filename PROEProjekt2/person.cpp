#include "person.h"

shared_ptr<Person> Person::makeMechanic(string name, string surname, unsigned int money, string spec)
{
    return shared_ptr<Person>(new Mechanic(name, surname, money, spec));
}
/*shared_ptr<Person> Person::makeSalesman(string name, string surname, unsigned int money, unsigned int)
{
    return shared_ptr<Person>(new Salesman(name, surname, money,));
}*/
string Mechanic::Get_Name() const {return name_;}
unsigned int Mechanic::Get_Salary() const {return salary_;}
ostream& Mechanic::print(ostream &os) const
{
    os<<"Name: "<<Get_Name()<<"  Salary: "<<Get_Salary()<<"  Specializacja: "<<specialization_;
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
