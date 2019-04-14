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
    Location Location1;
    vector < Employee > Personnel;
    int NumOfPersonel;
    vector < Product > Assortment1;
    int NumOfAssortment;
    TempOffer * TemporaryOffer;
    

public:
    Shop();
    Shop(int=3, int=3, int=3);
    ~Shop();
    friend ostream& operator<< (ostream& ,const Shop&);
    friend Shop& operator+=(Shop& a, const Employee& b);
};
