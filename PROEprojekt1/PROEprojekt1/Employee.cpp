//
//  STAFF.cpp
//  PROEprojekt1
//
//  Created by Eryk Mroczko on 13/03/2019.
//  Copyright © 2019 Eryk Mroczko. All rights reserved.
//
#include <iostream>
#include "Employee.hpp"
#include "Debug.hh"

using namespace std;

Employee::Employee(string n, string p, int s){
    name = n;
    profession = p;
    salary = s;
    
}
Employee::Employee(const Employee &employee) : name(employee.name), profession(employee.profession), salary(employee.salary)
{
    _DEBUG("Employee - k. kopiujacy");
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
Employee::~Employee()
{
    
}

ostream& operator<<(ostream& os,const Employee& e)
{
    os<<e.name<<" - "<<e.profession<<endl;
    return os;
}
