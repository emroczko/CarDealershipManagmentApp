#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <memory>
using namespace std;

class Person
{
protected:
    string name_;
    unsigned int salary_;
public:
    Person(string name, unsigned int money) {name_=name; salary_=money;}
    static shared_ptr<Person> makeMechanic(string, unsigned int, string);
    static shared_ptr<Person> makeSalesman(string, unsigned int, unsigned int);
    virtual string Get_Name() const = 0;
    virtual unsigned int Get_Salary() const = 0;
    virtual ostream& print(ostream& os) const = 0;
    friend ostream& operator<< (ostream& os, const Person& p) {return p.print(os);}

};
using namespace std;

class Mechanic: public Person
{
private:
    string education_;
public:
    Mechanic(string name, unsigned int money, string edu): Person(name, money) {education_ = edu;}
    virtual string Get_Name() const override;
    virtual unsigned int Get_Salary() const override;
    virtual ostream& print(ostream& os) const override;
};

class Salesman: public Person
{
private:
    unsigned int experience_;
public:
    Salesman(string name, unsigned int money, unsigned int exp): Person(name, money) {experience_ = exp;}
    Salesman &operator += (unsigned int salaryRaise) {this->salary_+=salaryRaise; return *this;}
    Salesman &operator -= (unsigned int salaryReduction) {this->salary_-=salaryReduction; return *this;}
    virtual string Get_Name() const override;
    virtual unsigned int Get_Salary() const override;
    virtual ostream& print(ostream& os) const override;

};
#endif // PERSON_H
