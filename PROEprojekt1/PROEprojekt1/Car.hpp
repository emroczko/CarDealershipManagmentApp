//
//  Car.hpp
//  PROEprojekt1
//
//  Created by Eryk Mroczko on 13/03/2019.
//  Copyright © 2019 Eryk Mroczko. All rights reserved.
//
#pragma once
#include <iostream>
#include <string>

using namespace std;

enum class condition {NEW, USED};
enum class engine {DIESEL, GASOLINE};

/*
struct CarInfo
{
    string carModel;
    double carPrice;
    int carID;
    condition condition_;
    engine engine_;
};*/

class Car{
private:
    
    string carModel;
    double carPrice;
    int carID;
    condition condition_;
    engine engine_;
    //CarInfo info;
public:
    Car();
    Car(const Car &car);
   // Car(CarInfo info);
    Car(string model, double price, int ID, condition condition_, engine engine_);
    ~Car();
    
    string getCondition() const;
    bool operator == (const Car &car);
    bool operator != (const Car &car);
    
    friend ostream& operator<< (ostream& ,const Car&);
};
