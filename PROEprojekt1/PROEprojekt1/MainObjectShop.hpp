//
//  MainObjectShop.hpp
//  PROEprojekt1
//
//  Created by Eryk Mroczko on 21/03/2019.
//  Copyright © 2019 Eryk Mroczko. All rights reserved.
//



#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Locations.hpp"
#include "Employee.hpp"
#include "Car.hpp"
#include "Debug.hh"


using namespace std;

class Shop
{
private:
    int income;
    Location Location1;
    vector < Employee > Personnel;
    vector < Car > Assortment1;

    
public:
    Shop();
    Shop(int income_, Location location);
    Shop(const Shop& shop);
    ~Shop();
    
    void saveToFile(const Shop & shop);
    friend ostream& operator<< (ostream& ,const Shop&);
    friend Shop& operator+=(Shop& a, const Employee& b);
    bool operator == (const Shop &shop); //porownuje przychod placowki
    bool operator > (const Shop &shop); //porownuje przychod placowki
    bool operator < (const Shop &shop); //porownuje przychod placowki
    Shop & operator ++ (); // dodaje auto
    Shop & operator -- (); // usuwa auto
  
};
