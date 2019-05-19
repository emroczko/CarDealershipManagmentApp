#pragma once
#include "mainwindow.h"
#include <QApplication>
#include <iostream>
#include <iomanip>
#include <string>
#include <random>

using namespace std;

//enum class engine {DIESEL, GASOLINE};
//enum class condition {NEW, USED};

class VehicleUI
{
public:
    virtual double Get_Price()=0;
    virtual int Get_ID()=0;
    virtual string Get_Model()=0;
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
    static Vehicle* makeVehicle(int , string, double, int, string, string);
    Vehicle(double price, int ID, string cond, string eng)  {price_=price; ID_=ID; condition_=cond; engine_=eng;}
    virtual double Get_Price();
    virtual int Get_ID();
    virtual string Get_Condition();
    virtual string Get_Engine();
};
class Car: public Vehicle
{
private:
    string model_;
public:
    Car(string mod, double price, int ID, string cond, string eng): Vehicle(price, ID, cond, eng){model_=mod;}
    virtual string Get_Model();
    void setNewPrice(unsigned int price);
    bool operator == (const Car &car);
    bool operator != (const Car &car);
    Car &operator += (unsigned int raisePrice);
    Car &operator -= (unsigned int lowerPrice);
    friend ostream& operator<< (ostream& ,const Car&);
};

