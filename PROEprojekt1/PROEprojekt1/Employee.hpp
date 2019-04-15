//
//  STAFF.hpp
//  PROEprojekt1
//
//  Created by Eryk Mroczko on 13/03/2019.
//  Copyright © 2019 Eryk Mroczko. All rights reserved.
//
#ifdef _DEBUG
#define DEBUG_LOG(a) std::cout << __FILE__ << "(" << __LINE__ << "): " << a << std::endl;
#else
#define DEBUG_LOG(a)
#endif

#pragma once
#include <iostream>
#include <string>

using namespace std;


class Employee{
private:
    string name;
    string profession;
    unsigned int salary;
    
public:
    Employee(string="Jan Kowalski", string="Kierownik", int = 2000);
    Employee(const Employee &employee);
    
    void showEmployees();
    void addEmployee();
    void removeEmployee();
    ~Employee();
    
    friend Employee operator+=(const Employee& a,const Employee& b);
    friend ostream& operator<< (ostream& ,const Employee&);
    Employee &operator += (unsigned int salaryRaise);
    Employee &operator -= (unsigned int salaryReduction);        
    
};

