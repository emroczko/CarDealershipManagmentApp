/*#pragma once
#include <iostream>
#include <string>
#include "debug.h"

#define _DEBUG

using namespace std;




class Car{
private:

    string carModel;
    double carPrice;
    int carID;



public:
    Car();
    Car(const Car &car);
    Car(string model, double price, int ID, condition condition_, engine engine_);
    ~Car();
    double getPrice();
    void makeACar(string model, double price, int ID, condition condition_, engine engine_);
    void saveToFile();
    string getModel();
    string getModelAndPrice();
    string getCondition() const;
    string getEngine() const;



};
*/

#pragma once
#include "mainwindow.h"
#include <QApplication>
#include <iostream>
#include <string>
#include <random>

using namespace std;

enum class engine {DIESEL, GASOLINE};
enum class condition {NEW, USED};

class VehicleUI
{
public:
    virtual double Get_Price()=0;
    virtual int Get_ID()=0;
    virtual string Get_Model()=0;
};
class Vehicle: public VehicleUI
{
protected:
    double price_;
    condition condition_;
    int ID_;
public:
    static Vehicle* makeCar(int , double, condition, int);
    Vehicle(int ID, double Price, condition Condition_){ID_=ID; price_=Price; Condition_=condition::NEW;}
};
class Car: public Vehicle
{
private:
    string model;
    engine engine_;
public:
    Car(string model, engine engine_, double price, condition Condition, int id);
    //Car(double pr, int id, condition c) : Vehicle(id, pr, c){}
    double Get_Price();
    int Get_ID();
    string Get_Model();
    string Get_condition();
    void setNewPrice(unsigned int price);
    bool operator == (const Car &car);
    bool operator != (const Car &car);
    Car &operator += (unsigned int raisePrice);
    Car &operator -= (unsigned int lowerPrice);
    friend ostream& operator<< (ostream& ,const Car&);
};


/*int main()
{
   Vehicle *bmw=Vehicle::makeCar(1, 500000);
   cout<<"Price: "<<bmw->Get_Price()<<endl<<"ID: "<<bmw->Get_ID()<<endl;
   cout<<"Brand: "<<bmw->Get_Model()<<endl;
   return 0;
}*/

