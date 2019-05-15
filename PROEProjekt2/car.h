#pragma once
#include <iostream>
#include <string>
#include "debug.h"

#define _DEBUG

using namespace std;

enum class condition {NEW, USED};
enum class engine {DIESEL, GASOLINE};


class Car{
private:

    string carModel;
    double carPrice;
    int carID;
    condition condition_;
    engine engine_;

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
    void setNewPrice(unsigned int price);
    bool operator == (const Car &car);
    bool operator != (const Car &car);
    Car &operator += (unsigned int raisePrice);
    Car &operator -= (unsigned int lowerPrice);

    friend ostream& operator<< (ostream& ,const Car&);
};
