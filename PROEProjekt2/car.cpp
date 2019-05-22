#include "car.h"
#include <sstream>
#include <iomanip>

using namespace std;

shared_ptr<Vehicle> Vehicle::makeCar(string mod, double price, int ID, string cond, string eng, string trans)
{
    return shared_ptr<Vehicle>(new Car(mod, price, ID, cond, eng, trans));
}
shared_ptr<Vehicle> Vehicle::makeMotorcycle(string mod, double price, int ID, string cond, string eng, string eng_type)
{
    return shared_ptr<Vehicle>(new Motorcycle(mod, price, ID, cond, eng, eng_type));
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
    os<<Get_Model()<<"  Cena: "<<Get_Price()<<" zł  ID:"<<Get_ID()<<"  Stan: "<<Get_Condition()<<"  Silnik:"<<Get_Engine()<<"  Skrzynia biegów:"<<transmission_;
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
    os<<Get_Model()<<"  Cena: "<<Get_Price()<<" zł  ID:"<<Get_ID()<<"  Stan: "<<Get_Condition()<<"  Silnik:"<<Get_Engine()<<"  Rodzaj silnika:"<<engine_type_;
    return os;
}

