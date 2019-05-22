#include "mainobjectshop.h"



using namespace std;

Shop::Shop():income_(1000)
{

}
Shop::Shop(int income): income_(income)
{
    Personnel_.emplace_back(Person::makeSalesman("Jan Jankowski", 4000, 6));
    Personnel_.emplace_back(Person::makeSalesman("Anna Bratkowska", 3000, 3));
    Personnel_.emplace_back(Person::makeMechanic("Adam Mazowiecki", 4200, "xxxxx"));
    Personnel_.emplace_back(Person::makeMechanic("Juliusz Marski", 3500, "xxxxxx"));
    Personnel_.emplace_back(Person::makeSalesman("Dariusz Markowski", 5000, 5));
    Vehicles_.emplace_back(Vehicle::makeCar("BMW 340i", 320000, 1, "Nowy", "Benzyna", "Manualna"));
    Vehicles_.emplace_back(Vehicle::makeCar("BMW 550i", 440000, 2, "Używany", "Diesel", "Automatyczna hydrauliczna"));
    Vehicles_.emplace_back(Vehicle::makeCar("BMW 730d", 370000, 3, "Używany", "Diesel", "Automatyczna bezstopniowa"));
    Vehicles_.emplace_back(Vehicle::makeCar("BMW 428i", 190000, 4, "Nowy", "Benzyna", "Manualna"));
    Vehicles_.emplace_back(Vehicle::makeCar("BMW 316d", 142000, 5, "Nowy", "Diesel", "Manualna"));
    Vehicles_.emplace_back(Vehicle::makeMotorcycle("BMW R 1250 RS", 23000, 1, "Benzyna", "Używany", "Dwusuwowy"));

}

Shop::Shop(int income, vector < shared_ptr<Vehicle> > assortment, vector <shared_ptr<Person>> Personnel): income_(income)
 {
    for(auto x: assortment)
        Vehicles_.emplace_back(x);
    for(auto i: Personnel)
        Personnel_.emplace_back(i);
}

Shop::Shop(const Shop& shop):income_(shop.income_),Vehicles_(shop.Vehicles_) ,Personnel_(shop.Personnel_)
{

}


/*
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

/*bool Shop::operator == (const Shop &shop)
{
    if(income_!= shop.income_)
        return false;
    if(Personnel_.size() != shop.Personnel_.size())
        return false;
    if(Cars_.size()!= shop.Cars_.size())
        return false;
    if()

    return true;
}*/

/*bool Shop::operator > (const Shop &shop)
{
    return income_ > shop.income_;
}*/

/*bool Shop::operator < (const Shop &shop)
{
    return !(*this > shop);
}*/
Shop & Shop::operator += (shared_ptr<Person> employee)
{
    Personnel_.emplace_back(employee);
    return *this;
}
Shop & Shop::operator += (const shared_ptr<Vehicle> vehicle)
{
    Vehicles_.emplace_back(vehicle);
    return *this;
}
Shop & Shop::operator -= (int i)
{
    Vehicles_.erase(Vehicles_.begin()+i);
    return *this;
}

/*Shop & Shop::operator -- ()
{
    if(Assortment_.size() != 0)
    {
        Assortment_.pop_back();
    }
    return *this;
}*/
vector < shared_ptr<Vehicle> > Shop::getVehicles() const {return Vehicles_;}

ostream& operator<<(ostream& os,const Shop& S)
{

    if(S.Vehicles_.size()!= 0)
    {
    os << "Samochody: " <<endl;
        for(auto &p : S.Vehicles_){
            if (typeid(*p) == typeid(Car)){
            os << *p<<endl;
            }
        }
    os<< "Motocykle: " <<endl;
        for(auto &p : S.Vehicles_){
            if (typeid(*p) == typeid(Motorcycle)){
            os << *p << endl;
            }
        }
    }
    os<<endl;
    /*
    if(S.Personnel_.size()!= 0)
    {
        os << "Informacje o pracownikach placowki: " << endl << endl;
        for(unsigned int i = 0; i < S.Personnel_.size(); ++i)
        {
            os<<S.Personnel_[i];
        }
    }
    os<<endl;*/
    return os;
}

/*string Shop::operator [] (unsigned int number)
{
    if(number >= Assortment_.size())
        return "U tego dealera nie ma tylu aut";
    else if(number == 0)
        return "Podano zla liczbe!";
    else
        return Assortment_[number - 1]->Get_Model();
}*/
/*Shop & Shop::operator ()(vector, int number)
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


}*/
/*Shop & Shop::operator ()(const Customer& customer, string model)
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
*/

int Shop::getIncome()const {
   return income_;
}



Shop::~Shop()
{

}
