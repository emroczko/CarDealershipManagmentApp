#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <memory>
using namespace std;

class Person
{
protected:
    string name_;
    string surname_;
    unsigned int salary_;
public:
    Person(string name, string surname,  unsigned int money) {name_=name; surname_=surname; salary_=money;}
    static shared_ptr<Person> makeMechanic(string, string, unsigned int, string);
    static shared_ptr<Person> makeSalesman(string, string, unsigned int, unsigned int);
    virtual string Get_Name() const = 0;
    virtual string Get_Surname() const = 0;
    virtual unsigned int Get_Salary() const = 0;
    virtual ostream& print(ostream& os) const = 0;
    friend ostream& operator<< (ostream& os, const Person& p) {return p.print(os);}

};
using namespace std;

class Mechanic: public Person
{
private:
    string specialization_;
public:
    Mechanic(string name, string surname, unsigned int money, string spec): Person(name, surname, money) {specialization_ = spec;}
    virtual string Get_Name() const;
    virtual string Get_Surname() const;
    virtual unsigned int Get_Salary() const;
    virtual ostream& print(ostream& os) const override;
};

class Salesman: public Person
{
private:
    unsigned int experience_;
public:
    Salesman(string name, string surname, unsigned int money, unsigned int exp): Person(name, surname, money) {experience_ = exp;}
    Salesman &operator += (unsigned int salaryRaise) {this->salary_+=salaryRaise; return *this;}
    Salesman &operator -= (unsigned int salaryReduction) {this->salary_-=salaryReduction; return *this;}
    virtual string Get_Name() const;
    virtual string Get_Surname() const;
    virtual unsigned int Get_Salary() const;
    virtual ostream& print(ostream& os) const override;

};
#endif // PERSON_H
