//
//  MainObjectShop.hpp
//  PROEprojekt1
//
//  Created by Eryk Mroczko on 21/03/2019.
//  Copyright © 2019 Eryk Mroczko. All rights reserved.
//

/*
#ifndef _DEBUG
 #define DEBUG_LOG(a) std::cout << __FILE__ << "(" << __LINE__ << "): " << a << std::endl;
#else
 #define DEBUG_LOG(a)
#endif                                                  // _DEBUG
*/


#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Locations.hpp"
#include "Employee.hpp"
#include "Car.hpp"


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
    Shop(int income_);
    Shop(const Shop& shop);
    ~Shop();
    
    void saveToFile(const Shop & shop);
    friend ostream& operator<< (ostream& ,const Shop&);
    friend Shop& operator+=(Shop& a, const Employee& b);
    bool operator == (const Shop &shop);
    bool operator > (const Shop &shop);
    bool operator < (const Shop &shop);
    Shop & operator ++ (); // adds a car
    Shop & operator -- (); // removes a car
  
};
