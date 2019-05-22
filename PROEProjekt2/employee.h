ragma once
#include <iostream>
#include <string>
#include "debug.h"


using namespace std;


class Employee{
private:
    string name;
    string profession;
    unsigned int salary;

public:
    Employee();
    Employee(string name_, string proffesion_, unsigned int salary_);
    Employee(const Employee &employee);
    ~Employee();

    bool operator == (const Employee &employee);
    bool operator != (const Employee &employee);
    Employee &operator += (unsigned int salaryRaise);
    Employee &operator -= (unsigned int salaryReduction);
    friend ostream& operator<< (ostream& ,const Employee&);

};
