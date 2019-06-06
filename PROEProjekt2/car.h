#pragma once
#include <QApplication>
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <memory>
#include <sstream>

using namespace std;

enum class Vehicle_Type{Car, Motor}; 

class Vehicle
{
protected:
    string model_;
    double price_;
    string condition_;
    int ID_;
    string engine_;
public:
    static shared_ptr<Vehicle> makeCar(string, double, int, string, string, string);
    static shared_ptr<Vehicle> makeMotorcycle(string, double, int, string, string, string);
    Vehicle(string mod, double price, int ID, string cond, string eng)  {model_=mod; price_=price; ID_=ID; condition_=cond; engine_=eng;}
    virtual double Get_Price() const =0;
    virtual int Get_ID() const =0;
    virtual string Get_Model() const = 0;
    virtual string Get_Condition() const =0;
    virtual string Get_Engine() const =0;
    virtual string type_identifier() const = 0;
    virtual ofstream& save(ofstream& os) const
    {
        os << this->type_identifier();
        print(static_cast<ostream&>(os));
        return os;
    }
    virtual ostream& print(ostream& os) const
    {
        os << model_ << " "<< price_ << " " << condition_ << " "<< ID_ <<" "<< engine_;
        return os;
    }
    virtual istream& load(istream& is)
    {
        string null, model, number;
        is >> model >>number>> price_ >> condition_ >>ID_ >> engine_;
        model_=model+" "+number;
        return is;
    }
    friend
    ostream& operator<< (ostream& os, const Vehicle& v) {return v.print(os);}
    friend
    ofstream& operator<< (ofstream& os, const Vehicle& v) {return v.save(os);}
    friend
    istream& operator>> (istream& is,Vehicle&v) {return v.load(is);}

    virtual ~Vehicle()  {}
};
class Car: public Vehicle
{
private:
    string transmission_;
public:
    Car(): Vehicle("BMW 330d", 230000, 1, "Nowy", "Diesel") {transmission_="Automatyczna Hydrauliczna";}
    Car(string mod, double price, int ID, string cond, string eng, string transmission): Vehicle(mod, price, ID, cond, eng) {transmission_=transmission;}
    virtual string Get_Model() const override;
    virtual double Get_Price() const override;
    virtual int Get_ID() const override;
    virtual string Get_Condition() const override;
    virtual string Get_Engine() const override;
    bool operator == (const Car &car);
    bool operator != (const Car &car);
    Car &operator += (unsigned int raisePrice);
    Car &operator -= (unsigned int lowerPrice);
   // virtual ostream& print(ostream& os) const override;
    string type_identifier() const override {return "Samochod";}
    ostream& print(ostream& os) const override
    {
        Vehicle::print(os);
        os << " " <<transmission_;
        return os;
    }
    istream& load(istream& is) override
    {
        Vehicle::load(is);
        is >> transmission_;
        return is;
    }
};

class Motorcycle: public Vehicle
{
private:
    string engine_type_;
public:
    Motorcycle(string mod, double price, int ID, string cond, string eng, string engine_type): Vehicle(mod, price, ID, cond, eng) {engine_type_=engine_type;}
    Motorcycle(): Vehicle("BMW R1250RS", 230000, 1, "Nowy", "Benzyna") {engine_type_="Dwusuwowy";}
    virtual string Get_Model() const override;
    virtual double Get_Price() const override;
    virtual int Get_ID() const override;
    virtual string Get_Condition() const override;
    virtual string Get_Engine() const override;
    bool operator == (const Motorcycle&);
    bool operator != (const Motorcycle&);
    Motorcycle &operator += (unsigned int raisePrice);
    Motorcycle &operator -= (unsigned int lowerPrice);

    string type_identifier() const override {return "Motocykl";}
    ostream& print(ostream& os) const override
    {
        Vehicle::print(os);
        os << " "<< engine_type_;
        return os;
    }
    istream& load(istream& is) override
    {
        string null;
        Vehicle::load(is);
        is >> null >>engine_type_;
        return is;
    }
};

