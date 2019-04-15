//
//  main.cpp
//  PROEprojekt1
//
//  Created by Eryk Mroczko on 13/03/2019.
//  Copyright © 2019 Eryk Mroczko. All rights reserved.
//
#include <ctime>
#include <stdint.h>
#include <iostream>
#include "Locations.hpp"
#include "Employee.hpp"
#include "Product.hpp"
#include "TempOffer.hpp"
#include "MainObjectShop.hpp"


using namespace std;

int main(int argc, const char * argv[]) {

   
    Shop shop(5,5,5);
    cout<<shop;
    Employee manager("Julia Stanislawska", "Manager");

    shop+=manager;
    cout<<shop;
    
    return 0;
}
