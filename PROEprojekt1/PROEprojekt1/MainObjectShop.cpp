//
//  MainObjectShop.cpp
//  PROEprojekt1
//
//  Created by Eryk Mroczko on 21/03/2019.
//  Copyright © 2019 Eryk Mroczko. All rights reserved.
//


#include "MainObjectShop.hpp"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

#include "Locations.hpp"
#include "Employee.hpp"
#include "Car.hpp"


//#include "Debug.hh"

#define M 3
using namespace std;

Shop::Shop()
{
    
}
Shop::Shop(int income_, Location location)
{
    income = income_;
    Location1 = location;
    
    Personnel.emplace_back("Jan Jankowski", "Mechanik", 4000);
    Personnel.emplace_back("Anna Bratkowska", "Sekretarka", 3000);
    Personnel.emplace_back("Adam Mazowiecki", "Blacharz", 4200);
    Personnel.emplace_back("Juliusz Marski", "Sprzedawca", 3500);
    Personnel.emplace_back("Dariusz Markowski", "Mechanik", 5000);
   
    
    Assortment1.emplace_back("BMW 340i", 340000, 1, condition::NEW, engine::GASOLINE);
    Assortment1.emplace_back("BMW 550i", 340000, 2, condition::USED, engine::GASOLINE);
    Assortment1.emplace_back("BMW 730d", 340000, 3, condition::USED, engine::DIESEL);
    Assortment1.emplace_back("BMW 428i", 190000, 4, condition::NEW, engine::GASOLINE);
    Assortment1.emplace_back("BMW 316d", 142000, 5, condition::NEW, engine::DIESEL);
    
  DEBUG_LOG("Shop Default Constructor");
}

Shop::Shop(const Shop& shop):income(shop.income),Personnel(shop.Personnel),Assortment1(shop.Assortment1){}


void Shop::saveToFile(const Shop& shop)
{
    string filename="save.txt";
    fstream Filetxt;
   
    Filetxt.open(filename.c_str(), ios::ate | ios::out);
    Filetxt << shop;
    Filetxt.close();
}

Shop& operator+=(Shop &a, const Employee &b)
{
    a.Personnel.push_back( b );
    
   // a.numberOfEmployees++;
    return a;
}

bool Shop::operator == (const Shop &shop)
{
    if(income!= shop.income)
        return false;
    if(Location1 != shop.Location1)
        return false;
    if(Personnel.size() != shop.Personnel.size())
        return false;
    if(Assortment1.size()!= shop.Assortment1.size())
        return false;
    
    return true;
}

bool Shop::operator > (const Shop &shop)
{
    return income > shop.income;
}

bool Shop::operator < (const Shop &shop)
{
    return !(*this > shop);
}

Shop & Shop::operator ++ ()
{
    Assortment1.emplace_back(Car());
    return *this;
}

Shop & Shop::operator -- ()
{
    if(Assortment1.size() != 0)
    {
       // number_of_computers_ -= 1;
        Assortment1.pop_back();
    }
    return *this;
}
ostream& operator<<(ostream& os,const Shop& S)
{
    os << "Informacje o sklepie:" << endl <<
    "Lokalizacja: " << S.Location1
    << "Liczba aut u Dealera: " << S.Assortment1.size() <<endl
    << "Liczba pracownikow placówki: " << S.Personnel.size() << endl
    << "Przychody: " << S.income<< " zl" <<endl<<endl;
    if(S.Assortment1.size()!= 0)
    {
        os << "Informacje o autach znajdujących się u Dealera: " <<endl;
        for(int i = 0; i < S.Assortment1.size(); ++i)
        {
            os <<S.Assortment1[i];
        }
    }
    os<<endl;
    if(S.Personnel.size()!= 0)
    {
        os << "Informacje o pracownikach placowki: " << endl << endl;
        for(int i = 0; i < S.Personnel.size(); ++i)
        {
            os<<S.Personnel[i];
        }
    }
    os<<endl;
    return os;
}
Shop::~Shop()
{
   
}
