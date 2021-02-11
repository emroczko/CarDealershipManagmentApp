#include <iostream>
#include "../Headers/employee.h"


using namespace std;


Employee::Employee():name_("Eryk Mroczko"), profession_("Szef"), salary_(50000){

}

Employee::Employee(string name, string profession, unsigned int salary){
    name_ = name;
    profession_ = profession;
    salary_ = salary;


}
Employee::Employee(const Employee &employee) : name_(employee.name_), profession_(employee.profession_), salary_(employee.salary_)
{
}

Employee::~Employee()
{
}

bool Employee::operator == (const Employee &employee)
{
    if(name_ != employee.name_)
        return false;
    if(profession_ != employee.profession_)
        return false;
    if(salary_ != employee.salary_)
        return false;
    return true;
}

bool Employee::operator != (const Employee &employee)
{
    return !(*this == employee);
}

Employee & Employee::operator += (unsigned int salary_raise)
{
    salary_ += salary_raise;
    return *this;
}

Employee & Employee::operator -= (unsigned int salary_reduction)
{
    if(salary_ - salary_reduction < 0)
    {
        cout<< "Blad! Pensja nie moze byc mniejsza od 0" <<endl;
        return *this;
    }
    else
    {
        salary_ -= salary_reduction;
        return *this;
    }
}


ostream& operator<<(ostream& os,const Employee& employee)
{
    os<<employee.name_<<" - "<<employee.profession_<<" - Zarobki: "<<employee.salary_<<endl;
    return os;
}
