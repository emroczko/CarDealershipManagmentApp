
#include "../Headers/vehicle.h"

using namespace std;

shared_ptr<Vehicle> Vehicle::make_car(string mod, double price, int ID, string cond, string eng, string trans)
{
    return shared_ptr<Vehicle>(new Car(mod, price, ID, cond, eng, trans));
}
shared_ptr<Vehicle> Vehicle::make_motorcycle(string mod, double price, int ID, string cond, string eng, string eng_type)
{
    return shared_ptr<Vehicle>(new Motorcycle(mod, price, ID, cond, eng, eng_type));
}
int Car::get_price() const {return price_;}
int Car::get_ID() const {return ID_;}
string Car::get_condition() const {return condition_;}
string Car::get_engine() const {return engine_;}
string Car::get_model() const {return model_;}

int Motorcycle::get_price() const {return price_;}
int Motorcycle::get_ID() const {return ID_;}
string Motorcycle::get_condition() const {return condition_;}
string Motorcycle::get_engine() const {return engine_;}
string Motorcycle::get_model() const {return model_;}

Car& Car::operator += (unsigned int raiseprice)
{
    price_ += raiseprice;
    return *this;
}

Car & Car::operator -= (unsigned int lower_price)
{
    if(price_ - lower_price < 0)
    {
        cout<< "Blad! Cena nie moze byc mniejsza od 0" <<endl;
        return *this;
    }
    else
    {
        price_ -= lower_price;
        return *this;
    }
}
Motorcycle& Motorcycle::operator += (unsigned int raise_price)
{
    price_ += raise_price;
    return *this;
}
Motorcycle& Motorcycle::operator -= (unsigned int lower_price)
{
    if(price_ - lower_price < 0)
    {
        cout<< "Blad! Cena nie moze byc mniejsza od 0" <<endl;
        return *this;
    }
    else
    {
        price_ -= lower_price;
        return *this;
    }
}
