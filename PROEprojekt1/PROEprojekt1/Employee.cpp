//
//  STAFF.cpp
//  PROEprojekt1
//
//  Created by Eryk Mroczko on 13/03/2019.
//  Copyright © 2019 Eryk Mroczko. All rights reserved.
//
#include <iostream>
#include "Employee.hpp"
using namespace std;

Employee::Employee(string n, string s, string p){
    name = n;
    surname = s;
    profession = p;
}

Employee::~Employee()
{
    
}

ostream& operator<<(ostream& os,const Employee& e)
{
    os<<e.name<<" "<<e.surname<<" - "<<e.profession<<endl;
    return os;
}
