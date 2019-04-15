//
//  LOCATIONS.cpp
//  PROEprojekt1
//
//  Created by Eryk Mroczko on 13/03/2019.
//  Copyright © 2019 Eryk Mroczko. All rights reserved.
//
#include <iomanip>
#include "Locations.hpp"



Location::Location() : city("Warszawa"), street("Marszalkowska"), number(1)
{
   // DEBUG_LOG("Location - k. domyslny");

}

Location::Location(string cityName, string streetName, int Number) :
city(cityName), street(streetName), number(Number)
{
    //DEBUG_LOG("Location - k. z parametrami");

}

Location::Location(const Location &location)
{
    //DEBUG_LOG("Location - k. kopiujacy");

    city = location.city;
    street = location.street;
    number = location.number;
}

Location::~Location()
{
    //DEBUG_LOG("Location - destrukutor");

}

bool Location::operator != (const Location &location)
{
    if(city != location.city)
        return true;
    if(street != location.street)
        return true;
    if(number != location.number)
        return true;
    return false;
}

Location & Location::operator = (const Location &location)
{
    city = location.city;
    street = location.street;
    number = location.number;
    return *this;
}

std::ostream & operator << (std::ostream &os, const Location &location)
{
    os << location.city <<
    " ul. " <<location.street<<" "<<location.number<<endl;
    return os;
}






