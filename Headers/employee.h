#pragma once
#include <iostream>
#include <string>


using namespace std;


class Employee{
private:
    string name_;
    string profession_;
    unsigned int salary_;

public:
    Employee();
    Employee(string name, string proffesion, unsigned int salary);
    Employee(const Employee &employee);
    ~Employee();

    bool operator == (const Employee &employee);
    bool operator != (const Employee &employee);
    Employee &operator += (unsigned int salary_raise);
    Employee &operator -= (unsigned int salary_reduction);
    friend ostream& operator<< (ostream& ,const Employee&);

};
