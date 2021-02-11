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
    vector <shared_ptr<Vehicle>> vehicles_;
    vector <shared_ptr<Person>> personnel_;

public:
    Shop();
    Shop(int income_);
    Shop(int income_, vector < shared_ptr<Vehicle> > vehicles, vector<shared_ptr<Person>>);
    Shop(const Shop& shop);
    ~Shop();

    void save_to_file(const Shop & shop);
    void load_from_file();
    void set_income(int);
    int get_income() const;
    friend ostream& operator<< (ostream& ,const Shop&);
    friend ofstream& operator<< (ofstream& ,const Shop&);
    friend istream& operator>> (istream& ,Shop&);
    vector < shared_ptr<Vehicle> > get_vehicles() const;
    vector < shared_ptr<Person> > get_personnel() const;
    bool operator == (const Shop &shop); //porownuje placówkę
    bool operator > (const Shop &shop); //porownuje placówkę
    bool operator < (const Shop &shop); //porownuje placówkę
    Shop & operator = (Shop &shop); //przenosi zawartość z jednego salonu do drugiego
    Shop & operator += (shared_ptr<Person>); // dodaje pracownika do sklepu
    Shop & operator += (shared_ptr<Vehicle>); // dodaje pojazd do salonu
    Shop & operator -= (int i);


};
