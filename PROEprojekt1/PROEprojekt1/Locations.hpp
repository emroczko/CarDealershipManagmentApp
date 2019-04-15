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
#include "Debug.hh"


using namespace std;

class Location
{
private:
    string city;
    string street;
    int number;
    
public:
    Location();
    Location(string cityName, string streetName, int Number);
    Location(const Location &location);
    ~Location();
    bool operator != (const Location &location);
    Location & operator = (const Location &location);
    friend std::ostream & operator << (std::ostream &os, const Location &location);
};



