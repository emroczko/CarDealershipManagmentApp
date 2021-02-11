#include <iomanip>
#include "../Headers/locations.h"
#include <fstream>



Location::Location() : city_("Warszawa"), street_("Marszalkowska"), number_(1)
{

}

Location::Location(string city_name, string street_name, int number) :
city_(city_name), street_(street_name), number_(number)
{

}

Location::Location(const Location &location)
{
    city_ = location.city_;
    street_ = location.street_;
    number_ = location.number_;
}

Location::~Location()
{

}
void Location::save_to_file(Location & location)
{
    string file_name="saveLocation.txt";
    fstream file;

    file.open(file_name.c_str(), ios::ate | ios::out);
    if (file.is_open()) {
        file <<location.city_<<" "<< location.street_<<" "<<location.number_<<endl;
    }

    file.close();
}

bool Location::operator != (const Location &location)
{
    if(city_ != location.city_)
        return true;
    if(street_ != location.street_)
        return true;
    if(number_ != location.number_)
        return true;
    return false;
}

Location & Location::operator = (const Location &location)
{
    city_ = location.city_;
    street_ = location.street_;
    number_ = location.number_;
    return *this;
}

ostream & operator << (ostream &os, const Location &location)
{
    os << location.city_ << " ul. " <<location.street_<<" "<<location.number_<<endl;
    return os;
}

istream & operator >> (istream &is, Location &location)
{
    is >> location.city_ >> location.street_ >>location.number_;
    return is;
}
