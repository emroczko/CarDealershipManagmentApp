#include "mainwindow.h"
#include <QApplication>
#include <iostream>
#include <string>
#include <random>
using namespace std;
class CarUI
{
public:
    virtual double Get_Price()=0;
    virtual int Get_ID()=0;
    virtual string Get_Brand()=0;
};
class Car: public CarUI
{
protected:

    double Price_;
    int ID_;
public:
    static Car* makeCar(int , double);
    Car(int ID, double Price){ID_=ID; Price_=Price;}
};
class BMW: public Car
{
private:
    inline static const string Brand = "BMW";
public:
    BMW(double pr, int id) : Car(id, pr){}
    virtual double Get_Price();
    virtual int Get_ID();
    virtual string Get_Brand();
};
Car* Car::makeCar(int prod, double price)
{
    random_device rd;
    uniform_int_distribution<int> distID(1000, 10000);
    switch(prod)
    {
    case(1): return new BMW(price, distID(rd)); break;
    default: return NULL;
    }
}
double BMW::Get_Price(){return Price_;}
int BMW::Get_ID(){return ID_;}
string BMW::Get_Brand(){return Brand;}
int main(int argc, char *argv[])
{
   QApplication myApp(argc, argv);
   QWidget mainWindow;
   mainWindow.setWindowTitle("Car Shop");
   mainWindow.show();
   return myApp.exec();
   return 0;
}
