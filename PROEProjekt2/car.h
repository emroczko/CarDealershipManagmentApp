#pragma once
#include "welcomeWindow.h"
#include <QApplication>
#include <iostream>
#include <iomanip>
#include <string>
#include <memory>
using namespace std;

enum class Vehicle_Type{Car, Motor};

class VehicleUI
{
public:
    virtual double Get_Price()=0;
    virtual int Get_ID()=0;
    virtual string Get_Model() const = 0;
    virtual string Get_Condition()=0;
    virtual string Get_Engine()=0;
};
class Vehicle: public VehicleUI
{
protected:
    double price_;
    string condition_;
    int ID_;
    string engine_;
public:
    static shared_ptr<Vehicle> makeVehicle(Vehicle_Type , string, double, int, string, string);
    Vehicle(double price, int ID, string cond, string eng)  {price_=price; ID_=ID; condition_=cond; engine_=eng;}
    virtual double Get_Price();
    virtual int Get_ID();
    virtual string Get_Condition();
    virtual string Get_Engine();

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
    string model_;
public:
    Car(string mod, double price, int ID, string cond, string eng): Vehicle(price, ID, cond, eng){model_=mod;}
    virtual string Get_Model() const override;
    void setNewPrice(unsigned int price);
    bool operator == (const Car &car);
    bool operator != (const Car &car);
    Car &operator += (unsigned int raisePrice);
    Car &operator -= (unsigned int lowerPrice);

    virtual std::ostream& print(std::ostream& os) const override;
};

