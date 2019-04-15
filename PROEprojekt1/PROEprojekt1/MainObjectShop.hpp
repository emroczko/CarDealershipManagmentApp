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
#include "Customer.hpp"
#include "Debug.hh"



using namespace std;

class Shop
{
private:
    int income;
    Location Location1;
    vector < Employee > Personnel;
    vector < Car > Assortment;

    
public:
    Shop();
    Shop(int income_, Location location);
    Shop(int income_, Location location, vector < Car > Assortment, vector < Employee > Personnel);
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
    Shop & operator += (const Car &car_); // dodaje auto do salonu
    Shop & operator -- (); // usuwa ostatnie auto
    Shop & operator ()(const Customer& customer, int whichCar);//klient kupuje auto o nr podanym indeksie wektora
    Shop & operator ()(const Customer& customer, string whichCar);//klient kupuje auto danym modelu
    string operator [] (unsigned int number);//pokazuje wybrane (po indeksie) auto z placowki
    
};
