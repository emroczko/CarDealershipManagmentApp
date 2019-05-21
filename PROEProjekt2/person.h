#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <memory>
using namespace std;

enum class Role{Mechanic, Salesman};

class Person
{
protected:
    string name_;
    unsigned int money_;
public:
    Person(string name, unsigned int money) {name_=name; money_=money;}
    //~Person();
    static shared_ptr<Person> makePerson(Role, string, unsigned int);
    virtual string Get_Name() const = 0;
    virtual unsigned int Get_Money() const = 0;
    virtual ostream& print(ostream& os) const = 0;
    friend ostream& operator<< (ostream& os, const Person& p) {return p.print(os);}

};
class Mechanic: public Person
{
private:
public:
    Mechanic(string name, unsigned int money): Person(name, money) {}
    virtual string Get_Name() const override;
    virtual unsigned int Get_Money() const override;
    virtual ostream& print(ostream& os) const override;
};

class Salesman: public Person
{
private:
public:
    Salesman(string name, unsigned int money): Person(name, money) {}
    Salesman &operator += (unsigned int salaryRaise) {this->money_+=salaryRaise; return *this;}
    Salesman &operator -= (unsigned int salaryReduction) {this->money_-=salaryReduction; return *this;}
    virtual string Get_Name() const override;
    virtual unsigned int Get_Money() const override;
    virtual ostream& print(ostream& os) const override;

};
#endif // PERSON_H
