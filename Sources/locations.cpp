#include <iomanip>
#include "../Headers/locations.h"
#include <fstream>



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
void Location::saveToFile(Location & location)
{
    string filename="saveLocation.txt";
    fstream file;

    file.open(filename.c_str(), ios::ate | ios::out);
    if (file.is_open()) {
        file <<location.city<<" "<< location.street<<" "<<location.number<<endl;
    }

    file.close();
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

ostream & operator << (ostream &os, const Location &location)
{
    os << location.city <<
    " ul. " <<location.street<<" "<<location.number<<endl;
    return os;
}

istream & operator >> (istream &is, Location &location)
{
    is >> location.city >> location.street >>location.number;
    return is;
}
