//
//  main.cpp
//  PROEprojekt1
//
//  Created by Eryk Mroczko on 13/03/2019.
//  Copyright © 2019 Eryk Mroczko. All rights reserved.
//

#include <iostream>
#include "Locations.hpp"
#include "Staff.hpp"
#include "Assortment.hpp"
#include "TempOffer.hpp"

#define M 10
using namespace std;

int main(int argc, const char * argv[]) {
    Location FirstShop;
    Staff FirstEmployee;
  
    int operation;
    
    
    cout<<"Wybierz operacje: "<<endl;
    cout<<"1 - Znajdz sklep\n2 - Dodaj lokalizacje\n0 - konczy program"<<endl;
    cin>>operation;
  
    switch(operation)
    {
        case 0:
            break;
        case 1:
            FirstShop.getAdress();
            break;
        case 2:
            FirstShop.addLocation();
            break;
            
    }
    
    FirstShop.showLocations();
    FirstEmployee.showStaff();
    
    return 0;
}
