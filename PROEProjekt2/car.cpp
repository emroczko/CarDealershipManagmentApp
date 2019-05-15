#include "car.h"
#include <sstream>
#include <iomanip>



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
string Car::getCondition() const
{
    if(condition_ == condition::USED)
        return "Uzywany";
    else
        return "Nowy";
}
string Car::getEngine() const
{
    if(engine_ == engine::DIESEL)
        return "DIESEL";
    else
        return "GASOLINE";
}

bool Car::operator == (const Car &car)
{
    if(carModel != car.carModel)
        return false;
    if(carPrice != car.carPrice)
        return false;
    if(carID != car.carID)
        return false;
    if(condition_ != car.condition_)
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
    carPrice += raisePrice;
    return *this;
}

Car & Car::operator -= (unsigned int lowerPrice)
{
    if(carPrice - lowerPrice < 0)
    {
        cout<< "Blad! Cena nie moze byc mniejsza od 0" <<endl;
        return *this;
    }
    else
    {
        carPrice -= lowerPrice;
        return *this;
    }
}

ostream& operator<<(ostream& os,const Car& car)
{
    os<<car.carModel<<" Stan: "<<car.getCondition()<<" Cena: "<<car.carPrice<<"zł ID:"<<car.carID<<endl;
    return os;
}
