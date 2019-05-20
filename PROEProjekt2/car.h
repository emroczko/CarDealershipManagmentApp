#pragma once
#include <QApplication>
#include <iostream>
#include <iomanip>
#include <string>
#include <memory>
using namespace std;

enum class Vehicle_Type{Car, Motor}; 

class Vehicle
{
protected:
    string model_;
    double price_;
    string condition_;
    int ID_;
    string engine_;
public:
    static shared_ptr<Vehicle> makeVehicle(Vehicle_Type , string, double, int, string, string);
    Vehicle(string mod, double price, int ID, string cond, string eng)  {model_=mod; price_=price; ID_=ID; condition_=cond; engine_=eng;}
    virtual double Get_Price() const =0;
    virtual int Get_ID() const =0;
    virtual string Get_Model() const = 0;
    virtual string Get_Condition() const =0;
    virtual string Get_Engine() const =0;
    virtual std::ostream& print(std::ostream& os) const = 0;
    friend
    std::ostream& operator<< (std::ostream& os, const Vehicle& v)
    {
        return v.print(os);
    }
};


class Car: public Vehicle
{
private:
    //int dors_;
public:
    Car(string mod, double price, int ID, string cond, string eng): Vehicle(mod, price, ID, cond, eng) {}
    virtual string Get_Model() const override;
    virtual double Get_Price() const override;
    virtual int Get_ID() const override;
    virtual string Get_Condition() const override;
    virtual string Get_Engine() const override;
    void setNewPrice(unsigned int price);
    bool operator == (const Car &car);
    bool operator != (const Car &car);
    Car &operator += (unsigned int raisePrice);
    Car &operator -= (unsigned int lowerPrice);
    virtual std::ostream& print(std::ostream& os) const override;
};

class Motorcycle: public Vehicle
{
private:

public:
    Motorcycle(string mod, double price, int ID, string cond, string eng): Vehicle(mod, price, ID, cond, eng) {}
    virtual string Get_Model() const override;
    virtual double Get_Price() const override;
    virtual int Get_ID() const override;
    virtual string Get_Condition() const override;
    virtual string Get_Engine() const override;
    void setNewPrice(unsigned int price);
    bool operator == (const Motorcycle&);
    bool operator != (const Motorcycle&);
    Motorcycle &operator += (unsigned int raisePrice);
    Motorcycle &operator -= (unsigned int lowerPrice);
    virtual std::ostream& print(std::ostream& os) const override;
};

