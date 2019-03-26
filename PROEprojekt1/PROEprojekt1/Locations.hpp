//
//  LOCATIONS.hpp
//  PROEprojekt1
//
//  Created by Eryk Mroczko on 13/03/2019.
//  Copyright © 2019 Eryk Mroczko. All rights reserved.
//
#pragma once
#include <iostream>
#include <string>
using namespace std;

class Location{
    
private:
    string city;
    string street;
    int number;
public:
    Location(string="Warszawa", string="Marszalkowska", int=1);
    void showLocations();
    void getAdress();
    void addLocation();
    ~Location();
};
