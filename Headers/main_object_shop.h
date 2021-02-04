#pragma once
#include <vector>
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include "person.h"
#include "vehicle.h"



using namespace std;

class Shop
{
private:
    int income_;
    vector <shared_ptr<Vehicle>> Vehicles_;
    vector <shared_ptr<Person>> Personnel_;

public:
    Shop();
    Shop(int income_);
    Shop(int income_, vector < shared_ptr<Vehicle> > vehicles, vector<shared_ptr<Person>>);
    Shop(const Shop& shop);
    ~Shop();

    void saveToFile(const Shop & shop);
    void loadFromFile();
    void Set_income(int);
    int getIncome() const;
    friend ostream& operator<< (ostream& ,const Shop&);
    friend ofstream& operator<< (ofstream& ,const Shop&);
    friend istream& operator>> (istream& ,Shop&);
    vector < shared_ptr<Vehicle> > getVehicles() const;
    vector < shared_ptr<Person> > getPersonnel() const;
    bool operator == (const Shop &shop); //porownuje placówkę
    bool operator > (const Shop &shop); //porownuje placówkę
    bool operator < (const Shop &shop); //porownuje placówkę
    Shop & operator = (Shop &shop); //przenosi zawartość z jednego salonu do drugiego
    Shop & operator += (shared_ptr<Person>); // dodaje pracownika do sklepu
    Shop & operator += (shared_ptr<Vehicle>); // dodaje pojazd do salonu
    Shop & operator -= (int i);


};
