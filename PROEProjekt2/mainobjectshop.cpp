#include "mainobjectshop.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>


using namespace std;

Shop::Shop():income_(1000)
{
    DEBUG_LOG("Shop - k. domyslny");
}
Shop::Shop(int income): income_(income)
{
    Personnel_.emplace_back(Employee("Jan Jankowski", "Mechanik", 4000));
    Personnel_.emplace_back(Employee("Anna Bratkowska", "Sekretarka", 3000));
    Personnel_.emplace_back(Employee("Adam Mazowiecki", "Blacharz", 4200));
    Personnel_.emplace_back(Employee("Juliusz Marski", "Sprzedawca", 3500));
    Personnel_.emplace_back(Employee("Dariusz Markowski", "Mechanik", 5000));
    Assortment_.emplace_back(Vehicle::makeVehicle(1, "BMW 340i", 320000, 1, "NEW", "GASOLINE"));
    Assortment_.emplace_back(Vehicle::makeVehicle(1, "BMW 550i", 440000, 2, "USED", "DIESEL"));
    Assortment_.emplace_back(Vehicle::makeVehicle(1, "BMW 730d", 370000, 3, "USED", "DIESEL"));
    Assortment_.emplace_back(Vehicle::makeVehicle(1, "BMW 428i", 190000, 4, "NEW", "GASOLINE"));
    Assortment_.emplace_back(Vehicle::makeVehicle(1, "BMW 316d", 142000, 5, "NEW", "DIESEL"));
    DEBUG_LOG("Shop - k. z parametrami");
}

Shop::Shop(int income, vector < Vehicle* > assortment, vector < Employee > personnel): income_(income)
{
    for(unsigned int i = 0; i < assortment.size(); i++)
        Assortment_.emplace_back(assortment[i]);
    for(unsigned int i = 0; i < personnel.size(); i++)
        Personnel_.emplace_back(personnel[i]);

}

Shop::Shop(const Shop& shop):income_(shop.income_), Personnel_(shop.Personnel_),Assortment_(shop.Assortment_)
{
    DEBUG_LOG("Shop - k. kopiujacy");
}

/*
void Shop::saveToFile(const Shop& shop)
{
    string filename="save.txt";
    fstream file;
    file.open(filename.c_str(), ios::ate | ios::out);

    if (file.is_open()) {
        file << shop;
    }

    file.close();
}
void Shop::loadFromFile()
{
    string filename="save.txt";
    fstream file;
    file.open(filename.c_str(), ios::in);
    string file1;
    string line;
    if (file.is_open()) {
        while(getline(file, line))
        {
            file1+=line;
            file1+="\n";
        }
    }

    cout<<endl<<endl<<endl<<"################"<<endl<<endl;
    cout<<"ODCZYT Z PLIKU:"<<endl<<endl<<file1<<endl;
}*/

Shop& Shop::operator+=(const Employee & employee)
{
    Personnel_.push_back( employee );

    return *this;
}

bool Shop::operator == (const Shop &shop)
{
    if(income_!= shop.income_)
        return false;
    if(Personnel_.size() != shop.Personnel_.size())
        return false;
    if(Assortment_.size()!= shop.Assortment_.size())
        return false;

    return true;
}

bool Shop::operator > (const Shop &shop)
{
    return income_ > shop.income_;
}

bool Shop::operator < (const Shop &shop)
{
    return !(*this > shop);
}
Shop & Shop::operator += (const Shop &shop)
{
    income_ += shop.income_;

    for(unsigned int i = 0; i< shop.Personnel_.size(); ++i)
        Personnel_.emplace_back(shop.Personnel_[i]);

    for(unsigned int i = 0; i< shop.Assortment_.size(); ++i)
        Assortment_.emplace_back(shop.Assortment_[i]);

    return *this;
}
Shop & Shop::operator += (Vehicle *car)
{
    Assortment_.emplace_back(car);
    return *this;
}

Shop & Shop::operator -- ()
{
    if(Assortment_.size() != 0)
    {
        Assortment_.pop_back();
    }
    return *this;
}
ostream& operator<<(ostream& os,const Shop& S)
{
    os << "Informacje o sklepie:" << endl
    << "Liczba aut u Dealera: " << S.Assortment_.size() <<endl
    << "Liczba pracownikow placówki: " << S.Personnel_.size() << endl
    << "Przychody: " << S.income_<< " zl" <<endl<<endl;
    if(S.Assortment_.size()!= 0)
    {
        os << "Informacje o autach znajdujących się u Dealera: " <<endl;
        //for(unsigned int i = 0; i < S.Assortment_.size(); ++i)
       // {
           // os <<S.Assortment_[i];
       // }
    }
    os<<endl;
    if(S.Personnel_.size()!= 0)
    {
        os << "Informacje o pracownikach placowki: " << endl << endl;
        for(unsigned int i = 0; i < S.Personnel_.size(); ++i)
        {
            os<<S.Personnel_[i];
        }
    }
    os<<endl;
    return os;
}
/*
string Shop::operator [] (unsigned int number)
{
    if(number >= Assortment_.size())
        return "U tego dealera nie ma tylu aut";
    else if(number == 0)
        return "Podano zla liczbe!";
    else
        return Assortment_[number - 1]->getModelAndPrice();
}*/
Shop & Shop::operator ()(const Customer& customer, int number)
{
    unsigned int whichCar=number-1;

    if(whichCar>=Assortment_.size())
    {
        cout<<"Nie ma tylu aut w salonie"<<endl;
        return *this;
    }
    if(customer.getWallet()>=Assortment_[whichCar]->Get_Price()){
        cout<<"Klient kupuje "<<Assortment_[whichCar]->Get_Model()<<
        " za cenę "<<Assortment_[whichCar]->Get_Price()<<" zl"<<endl;
        Assortment_.erase(Assortment_.begin()+whichCar);
         return *this;
    }
    else
    {
        cout<<"Klient nie ma pieniędzy na "<<Assortment_[whichCar]->Get_Model()<<endl;
        return *this;
    }


}
Shop & Shop::operator ()(const Customer& customer, string model)
{
    for(unsigned int i=0; i<Assortment_.size(); i++)
    {
    if(model==Assortment_[i]->Get_Model())
    {
        if(customer.getWallet()>=Assortment_[i]->Get_Price())
        {
            cout<<"Klient kupuje "<<Assortment_[i]->Get_Model()<<
            " za cenę "<<Assortment_[i]->Get_Price()<<" zl"<<endl;
            Assortment_.erase(Assortment_.begin()+i);
        return *this;
        }
        else
        {
            cout<<"Klient nie ma pieniędzy na "<<Assortment_[i]->Get_Model()<<endl;
            return *this;
        }
    }

}
    cout<<"Nie ma takiego auta w salonie"<<endl;
    return *this;
}

Shop::~Shop()
{

}
