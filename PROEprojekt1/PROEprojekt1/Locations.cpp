//
//  LOCATIONS.cpp
//  PROEprojekt1
//
//  Created by Eryk Mroczko on 13/03/2019.
//  Copyright © 2019 Eryk Mroczko. All rights reserved.
//
#include <iomanip>
#include "Locations.hpp"
#include "Debug.hh"

std::size_t Location::numberOfLocations = 0;

Location::Location() : city("Warszawa"), street("Marszalkowska"), number(1)
{
   // DEBUG_LOG("Location - k. domyslny");
    ++numberOfLocations;
}

Location::Location(string cityName, string streetName, int Number) :
city(cityName), street(streetName), number(Number)
{
    //DEBUG_LOG("Location - k. z parametrami");
    ++numberOfLocations;
}

Location::Location(const Location &location)
{
   // DEBUG_LOG("Location - k. kopiujacy");
    ++numberOfLocations;
    city = location.city;
    street = location.street;
}

Location::~Location()
{
   // DEBUG_LOG("Location - destrukutor");
    --numberOfLocations;
}

bool Location::operator != (const Location &location)
{
    if(city != location.city)
        return true;
    if(street != location.street)
        return true;
    return false;
}

Location & Location::operator = (const Location &location)
{
    city = location.city;
    street = location.street;
    return *this;
}

std::istream & operator >> (std::istream &is, Location &location)
{
    is >> location.city>> location.street;
    return is;
}

std::ostream & operator << (std::ostream &os, const Location &location)
{
    os << location.city <<
    "ul. " <<location.street<<" "<<location.number<<endl;
    return os;
}


std::size_t Location::getNumberOfLocations(void)
{
    return numberOfLocations;
}





