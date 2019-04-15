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
#include "Product.hpp"
#include "TempOffer.hpp"

using namespace std;

class Shop
{
private:
    int income;
    Location Location1;
    vector < Employee > Personnel;
    unsigned int numberOfEmployees;
    vector < Product > Assortment1;
    unsigned int numberOfProducts;
   // TempOffer * TemporaryOffer;
    
    
    
public:
    Shop();
    Shop(int=3, int=3, int=3);
    Shop(const Shop& shop);
    ~Shop();
    friend ostream& operator<< (ostream& ,const Shop&);
    friend Shop& operator+=(Shop& a, const Employee& b);
    bool operator == (const Shop &shop);
    bool operator > (const Shop &shop);
    bool operator < (const Shop &shop);
  
};
