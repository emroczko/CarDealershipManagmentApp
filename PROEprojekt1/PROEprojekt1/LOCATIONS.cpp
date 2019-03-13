//
//  LOCATIONS.cpp
//  PROEprojekt1
//
//  Created by Eryk Mroczko on 13/03/2019.
//  Copyright © 2019 Eryk Mroczko. All rights reserved.
//

#include <iostream>
#include <string>
#include "LOCATIONS.hpp"

using namespace std;

Location::Location(string defCity, string defStreet, int defNumber){
    city = defCity;
    street = defStreet;
    number = defNumber;
}
void Location::showLocations(){
    cout<<"Pierwszy sklep: "<<city<<", ulica "<<street<<" "<<number<<endl;
}
void Location::getAdress(){
    
}
