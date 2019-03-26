//
//  LOCATIONS.cpp
//  PROEprojekt1
//
//  Created by Eryk Mroczko on 13/03/2019.
//  Copyright © 2019 Eryk Mroczko. All rights reserved.
//

#include <iostream>
#include <string>
#include "Locations.hpp"

using namespace std;

Location::Location(string defCity, string defStreet, int defNumber){
    city = defCity;
    street = defStreet;
    number = defNumber;
}
void Location::showLocations(){
    cout<<"Wybrany sklep: "<<city<<", ulica "<<street<<" "<<number<<endl;
}
void Location::getAdress(){
    cout<<"Aby wybrać sklep podaj miasto: "<<endl;
    cin.ignore();
    getline(cin, city);
    cout<<"Wybrane miasto: "<<city<<endl;
    cout<<"Oto lista dostępnych sklepow w miescie "<<city<<endl;
    cout<<"Wybierz sklep (Podaj ulice na ktorej sie znajduje): "<<endl;
    getline(cin, street);
    
}
void Location::addLocation(){
    cout<<"Podaj miasto, w którym chcesz utworzyc sklep: "<<endl;
    cin.ignore();
    getline(cin, city);
    cout<<"Podaj ulice, na ktorej chcesz stworzyc sklep: "<<endl;
    getline(cin, street);
    cout<<"Brawo, utworzyles sklep w miescie "<<city<<", ulica "<<street<<endl;
}
Location::~Location(){
    
}
