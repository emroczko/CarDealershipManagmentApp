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
#include "Car.hpp"
#include "MainObjectShop.hpp"
#include "Debug.hh"
#include "catch.hpp"

using namespace std;

int main(int argc, const char * argv[]) {

   
    Shop shop(20000);
    Location("Lomza", "Dluga", 50);
    Employee manager("Julia Stanislawska", "Manager");

    shop+=manager;
    
    
    cout<<"Usuwam samochód"<<endl;
    
    --shop;
    
    cout<<shop;
    
    shop.saveToFile(shop);
    
    
    
    return 0;
}


