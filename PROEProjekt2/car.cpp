#include "car.h"
#include <sstream>
#include <iomanip>

using namespace std;

shared_ptr<Vehicle> Vehicle::makeVehicle(Vehicle_Type type, string mod, double price, int ID, string cond, string eng)
{
    if(type==Vehicle_Type::Car)  {return shared_ptr<Vehicle>(new Car(mod, price, ID, cond, eng));}
    else if(type==Vehicle_Type::Motor) {return shared_ptr<Vehicle>(new Motorcycle(mod, price, ID, cond, eng));}
    else return NULL;
}
double Car::Get_Price() const {return price_;}
int Car::Get_ID() const {return ID_;}
string Car::Get_Condition() const {return condition_;}
string Car::Get_Engine() const {return engine_;}
string Car::Get_Model() const {return model_;}

double Motorcycle::Get_Price() const {return price_;}
int Motorcycle::Get_ID() const {return ID_;}
string Motorcycle::Get_Condition() const {return condition_;}
string Motorcycle::Get_Engine() const {return engine_;}
string Motorcycle::Get_Model() const {return model_;}
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
string Car::getModelAndPrice(){

    string modelAndPrice;
    stringstream s;
    string price;
    s << fixed << setprecision( 0 ) << carPrice;
    s >> price;
    modelAndPrice = carModel + " - Cena: "+ price;
    return modelAndPrice;
}
*/

bool Car::operator == (const Car &car)
{
    if(model_ != car.model_)
        return false;
    if(price_ != car.price_)
        return false;
    if(ID_ != car.ID_)
        return false;
    if(condition_!= car.condition_)
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

ostream& Car::print(ostream& os) const
{
    os<<Get_Model()<<"  Cena: "<<Get_Price()<<"zł  ID:"<<Get_ID()<<"  Condition: "<<Get_Condition()<<"  Engine:"<<Get_Engine()<<endl;
    return os;
}
bool Motorcycle::operator == (const Motorcycle &motor)
{
    if(model_ != motor.model_)
        return false;
    if(price_ != motor.price_)
        return false;
    if(ID_ != motor.ID_)
        return false;
    if(condition_!= motor.condition_)
        return false;
    if(engine_ != motor.engine_)
        return false;

    return true;
}
bool Motorcycle::operator != (const Motorcycle &motor)
{
    return !(*this == motor);
}
Motorcycle& Motorcycle::operator += (unsigned int raisePrice)
{
    price_ += raisePrice;
    return *this;
}
Motorcycle& Motorcycle::operator -= (unsigned int lowerPrice)
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
ostream& Motorcycle::print(ostream& os) const
{
    os<<Get_Model()<<"  Cena: "<<Get_Price()<<"zł  ID:"<<Get_ID()<<"  Condition: "<<Get_Condition()<<"  Engine:"<<Get_Engine()<<endl;
    return os;
}

