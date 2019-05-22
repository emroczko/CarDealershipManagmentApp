#pragma once
#include <vector>
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include "person.h"
#include "car.h"
#include "debug.h"


using namespace std;

class Shop
{
private:
    int income_;
    vector <shared_ptr <Person>> Personnel_;
    vector <shared_ptr<Vehicle>> Cars_;
    vector <shared_ptr<Vehicle>> Motorcycles_;


public:
    Shop();
    Shop(int income_);
    Shop(int income_, vector<shared_ptr<Person>>, vector<shared_ptr<Vehicle>>, vector<shared_ptr<Vehicle>>);
    Shop(const Shop& shop);
    ~Shop();

    void saveToFile(const Shop & shop);
    void loadFromFile();
    friend ostream& operator<< (ostream& ,const Shop&);
    vector < shared_ptr<Vehicle> > getCars() const;
    vector < shared_ptr<Vehicle> > getMotorcycles() const;
    bool operator == (const Shop &shop); //porownuje przychod placowki
    bool operator > (const Shop &shop); //porownuje przychod placowki
    bool operator < (const Shop &shop); //porownuje przychod placowki
    Shop & operator += (shared_ptr<Person>); // dodaje pracownika do sklepu
    Shop & operator += (const Shop &shop); //łączy dwie placówki
    Shop & operator += (shared_ptr<Vehicle>); // dodaje auto do salonu
    Shop & operator -= (int i);
    Shop & operator -- (); // usuwa ostatnie auto
    //Shop & operator ()(const Customer& customer, int whichCar);//klient kupuje auto o nr podanym indeksie wektora
    //Shop & operator ()(const Customer& customer, string whichCar);//klient kupuje auto danym modelu
    string operator [] (unsigned int number);//pokazuje wybrane (po indeksie) auto z placowki
    int getIncome() const;

};
