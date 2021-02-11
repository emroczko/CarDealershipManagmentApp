#pragma once

#include <iostream>
#include <memory>
#include <fstream>

using namespace std;

class Person
{
protected:
    string name_;
    string surname_;
    unsigned int salary_;
public:
    Person(string name, string surname,  unsigned int money) {name_ = name; surname_ = surname; salary_ = money;}
    static shared_ptr<Person> make_mechanic(string, string, unsigned int, string);
    static shared_ptr<Person> make_salesman(string, string, unsigned int, unsigned int);
    virtual string get_name() const = 0;
    virtual string get_surname() const = 0;
    virtual unsigned int get_salary() const = 0;
    virtual string type_identifier() const = 0;
    virtual ofstream& save(ofstream& os) const
    {
        os << this->type_identifier();
        save(static_cast<ostream&>(os));
        return os;
    }
    virtual ostream& save(ostream& os) const
    {
        os << name_ << surname_<< salary_;
        return os;
    }
    virtual istream& load(istream& is)
    {
        string null;
        is >> name_ >> surname_>> salary_;
        return is;
    }
    virtual ostream& print(ostream& os) const = 0;
    friend
    ostream& operator<< (ostream& os, const Person& v) {return v.save(os);}
    friend
    ofstream& operator<< (ofstream& os, const Person& v) {return v.save(os);}
    friend
    istream& operator>> (istream& is, Person&v) {return v.load(is);}

    virtual ~Person()  {}

};
using namespace std;

class Mechanic: public Person
{
private:
    string specialization_;
public:
    Mechanic(string name, string surname, unsigned int money, string spec): Person(name, surname, money) {specialization_ = spec;}
    Mechanic(): Person("Eryk", "Mroczko", 20000) {specialization_= "Blacharz";}
    virtual string get_name() const override;
    virtual string get_surname() const override;
    virtual unsigned int get_salary() const override;
    virtual ostream& print(ostream& os) const override;
    string type_identifier() const override {return "Mechanicy";}
    ostream& save(ostream& os) const override
    {
        Person::save(os);
        os << specialization_;
        return os;
    }
    istream& load(istream& is) override
    {
        Person::load(is);
        is >> specialization_;
        return is;
    }
};

class Salesman: public Person
{
private:
    unsigned int experience_;
public:
    Salesman(string name, string surname, unsigned int money, unsigned int exp): Person(name, surname, money) {experience_ = exp;}
    Salesman(): Person("Eryk", "Mroczko", 20000) {experience_ = 10;}
    Salesman &operator += (unsigned int salaryRaise) {this->salary_+=salaryRaise; return *this;}
    Salesman &operator -= (unsigned int salaryReduction) {this->salary_-=salaryReduction; return *this;}
    virtual string get_name() const override;
    virtual string get_surname() const override;
    virtual unsigned int get_salary() const override;
    virtual ostream& print(ostream& os) const override;
    string type_identifier() const override {return "Sprzedawcy";}
    ostream& save(ostream& os) const override
    {
        Person::save(os);
        os << experience_;
        return os;
    }
    istream& load(istream& is) override
    {
        Person::load(is);
        is >> experience_;
        return is;
    }

};
