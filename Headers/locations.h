#pragma once
#include <iostream>
#include <string>



using namespace std;

class Location
{
private:
    string city_;
    string street_;
    int number_;

public:
    Location();
    Location(string cityName, string streetName, int Number);
    Location(const Location &location);
    ~Location();
    void save_to_file(Location& location);
    friend Location load_from_file();
    bool operator != (const Location &location);
    Location & operator = (const Location &location);
    friend ostream & operator << (ostream &os, const Location &location);
    friend istream & operator >> (istream &is, Location &location);
};
