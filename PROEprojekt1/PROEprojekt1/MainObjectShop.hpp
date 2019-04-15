//
//  MainObjectShop.hpp
//  PROEprojekt1
//
//  Created by Eryk Mroczko on 21/03/2019.
//  Copyright © 2019 Eryk Mroczko. All rights reserved.
//



#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Locations.hpp"
#include "Employee.hpp"
#include "Car.hpp"
#include "Debug.hh"


using namespace std;

class Shop
{
private:
    int income;
    Location Location1;
    vector < Employee > Personnel;
    vector < Car > Assortment1;

    
public:
    Shop();
    Shop(int income_, Location location);
    Shop(const Shop& shop);
    ~Shop();
    
    void saveToFile(const Shop & shop);
    void loadFromFile();
    friend ostream& operator<< (ostream& ,const Shop&);
    
    bool operator == (const Shop &shop); //porownuje przychod placowki
    bool operator > (const Shop &shop); //porownuje przychod placowki
    bool operator < (const Shop &shop); //porownuje przychod placowki
    Shop & operator += (const Employee& employee); // dodaje pracownika do sklepu
    Shop & operator += (const Shop &shop); //łączy dwie placówki
    Shop & operator += (const Car &car_); // dodaje auto
    Shop & operator -- (); // usuwa ostatnie auto
    string operator [] (unsigned int number); //pokazuje wybrane (po indeksie) auto z placowki 
};
