#include "car.h"
#include <sstream>
#include <iomanip>

using namespace std;

Vehicle* Vehicle::makeCar(int prod, double price, condition condition_, int id)
{
    random_device rd;
    uniform_int_distribution<int> distID(1000, 10000);
    switch(prod)
    {
   case(1): return new Car("525i", engine::DIESEL, double price_, condition::NEW, int id_); break;
   default: return NULL;
    }
}
double Car::Get_Price(){return price_;}
int Car::Get_ID(){return ID_;}
string Car::Get_Model(){return model;}

Car::Car(string Model, engine engine_, ) : model(Model), engine_(engine_),
{
    //DEBUG_LOG("Car - k. z parametrami");
}
/*
Car::Car() : carModel("BMW 335D"), carPrice(100000), carID(1), condition_(condition::NEW), engine_(engine::DIESEL)
{
  //  DEBUG_LOG("Car - k. domyslny");
}
Car::Car(const Car &car) : carModel(car.carModel), carPrice(car.carPrice), carID(car.carID), condition_(car.condition_), engine_(car.engine_)
{
   // DEBUG_LOG("Car - k. kopiujacy");
}

Car::Car(string model, double price, int ID, condition condition_, engine engine_) : carModel(model), carPrice(price), carID(ID), condition_(condition_), engine_(engine_)
{
    //DEBUG_LOG("Car - k. z parametrami");
}
Car::~Car(){
    // DEBUG_LOG("Car - destruktor");
}
void Car::makeACar(string model, double price, int ID, condition condition, engine engine)
{
    carModel = model;
    carPrice = price;
    carID = ID;
    condition_ = condition;
    engine_ = engine;
}
void Car::setNewPrice(unsigned int price)
{
    carPrice = price;
}
double Car::getPrice(){
    return carPrice;
}
string Car::getModel(){
    return carModel;
}
string Car::getModelAndPrice(){

    string modelAndPrice;
    stringstream s;
    string price;
    s << fixed << setprecision( 0 ) << carPrice;
    s >> price;
    modelAndPrice = carModel + " - Cena: "+ price;
    return modelAndPrice;
}

string Car::getEngine() const
{
    if(engine_ == engine::DIESEL)
        return "DIESEL";
    else
        return "GASOLINE";
}
string Car::Get_condition() const
{
    if(Condition_ == condition::USED)
        return "Uzywany";
    else
        return "Nowy";
}*/

bool Car::operator == (const Car &car)
{
    if(model != car.model)
        return false;
    if(price_ != car.price_)
        return false;
    if(ID_ != car.ID_)
        return false;
    if(Condition_!= car.Condition_)
        return false;
    if(engine_ != car.engine_)
        return false;

    return true;
}

bool Car::operator != (const Car &car)
{
    return !(*this == car);
}
Car& Car::operator += (unsigned int raisePrice)
{

            price_ += raisePrice;
    return *this;
}

Car & Car::operator -= (unsigned int lowerPrice)
{
    if(price_ - lowerPrice < 0)
    {
        cout<< "Blad! Cena nie moze byc mniejsza od 0" <<endl;
        return *this;
    }
    else
    {
        price_ -= lowerPrice;
        return *this;
    }
}
/*
ostream& operator<<(ostream& os,const Car& car)
{
    os<<car.model<<" Stan: "<<car.Get_condition()<<" Cena: "<<car.Price_<<"zł ID:"<<car.ID_<<endl;
    return os;
}*/

