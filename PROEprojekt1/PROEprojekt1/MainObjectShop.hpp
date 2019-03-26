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
#include "Locations.hpp"
#include "Staff.hpp"
#include "Assortment.hpp"
#include "TempOffer.hpp"
using namespace std;

class Shop
{
private:
    Location Location1;
    Staff Personnel;
    Assortment Assortment1;
    TempOffer TemporaryOffer;
public:
    Shop();
    Shop(Location,  Staff, Assortment, TempOffer);
    
};
