#pragma once
#include <iostream>
#include <string>



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
    void saveToFile(Location& location);
    friend Location loadFromFile();
    bool operator != (const Location &location);
    Location & operator = (const Location &location);
    friend ostream & operator << (ostream &os, const Location &location);
    friend istream & operator >> (istream &is, Location &location);
};
