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
#include "Debug.hh"


using namespace std;

Shop::Shop():income(1000), Location1("Warszawa", "Przy Agorze", 1)
{
    DEBUG_LOG("Shop - k. domyslny");
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
    Assortment1.emplace_back("BMW 340i", 320000, 1, condition::NEW, engine::GASOLINE);
    Assortment1.emplace_back("BMW 550i", 440000, 2, condition::USED, engine::GASOLINE);
    Assortment1.emplace_back("BMW 730d", 370000, 3, condition::USED, engine::DIESEL);
    Assortment1.emplace_back("BMW 428i", 190000, 4, condition::NEW, engine::GASOLINE);
    Assortment1.emplace_back("BMW 316d", 142000, 5, condition::NEW, engine::DIESEL);
    
    DEBUG_LOG("Shop - k. z parametrami");
}

Shop::Shop(const Shop& shop):income(shop.income),Location1(shop.Location1), Personnel(shop.Personnel),Assortment1(shop.Assortment1)
{
    DEBUG_LOG("Shop - k. kopiujacy");
}


void Shop::saveToFile(const Shop& shop)
{
    string filename="save.txt";
    fstream file;
   
    file.open(filename.c_str(), ios::ate | ios::out);
    file << shop;
    file.close();
}
void Shop::loadFromFile()
{
    string filename="save.txt";
    fstream file;
    file.open(filename.c_str(), ios::in);
    string file1;
    string line;
    while(getline(file, line))
    {
        file1+=line;
        file1+="\n";
    }
    cout<<endl<<endl<<endl<<"################"<<endl<<endl;
    cout<<"ODCZYT Z PLIKU:"<<endl<<file1<<endl;
}

Shop& Shop::operator+=(const Employee & employee)
{
    Personnel.push_back( employee );
    
    return *this;
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
Shop & Shop::operator += (const Shop &shop)
{
    income += shop.income;
    Location1=shop.Location1;
    
    for(int i = 0; i< shop.Personnel.size(); ++i)
        Personnel.emplace_back(shop.Personnel[i]);
    
    for(int i = 0; i< shop.Assortment1.size(); ++i)
        Assortment1.emplace_back(shop.Assortment1[i]);
    
    return *this;
}
Shop & Shop::operator += (const Car &car)
{
    Assortment1.emplace_back(car);
    return *this;
}

Shop & Shop::operator -- ()
{
    if(Assortment1.size() != 0)
    {
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
string Shop::operator [] (unsigned int number)
{
    if(number >= Assortment1.size())
        return "U tego dealera nie ma tylu aut";
    else if(number == 0)
        return "Podano zla liczbe!";
    else
        return Assortment1[number - 1].getModelAndPrice();
}
Shop::~Shop()
{
   
}
