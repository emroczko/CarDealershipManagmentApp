#include <iostream>
#include "../Headers/employee.h"


using namespace std;


Employee::Employee():name("Eryk Mroczko"), profession("Szef"), salary(50000){
   // DEBUG_LOG("Employee - k. domyslny");
}

Employee::Employee(string n, string p, unsigned int s){
    name = n;
    profession = p;
    salary = s;
   // DEBUG_LOG("Employee - k. z parametrami");

}
Employee::Employee(const Employee &employee) : name(employee.name), profession(employee.profession), salary(employee.salary)
{
   //DEBUG_LOG("Employee - k. kopiujacy");
}

Employee::~Employee()
{
  //  DEBUG_LOG("Employee - destruktor");
}

bool Employee::operator == (const Employee &employee)
{
    if(name != employee.name)
        return false;
    if(profession != employee.profession)
        return false;
    if(salary != employee.salary)
        return false;
    return true;
}

bool Employee::operator != (const Employee &employee)
{
    return !(*this == employee);
}

Employee & Employee::operator += (unsigned int salaryRaise)
{
    salary += salaryRaise;
    return *this;
}

Employee & Employee::operator -= (unsigned int salaryReduction)
{
    if(salary - salaryReduction < 0)
    {
        cout<< "Blad! Pensja nie moze byc mniejsza od 0" <<endl;
        return *this;
    }
    else
    {
        salary -= salaryReduction;
        return *this;
    }
}


ostream& operator<<(ostream& os,const Employee& e)
{
    os<<e.name<<" - "<<e.profession<<" - Zarobki: "<<e.salary<<endl;
    return os;
}
