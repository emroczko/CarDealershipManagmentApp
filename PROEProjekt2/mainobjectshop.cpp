#include "mainobjectshop.h"



using namespace std;

Shop::Shop():income_(1000)
{
    DEBUG_LOG("Shop - k. domyslny");
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

    DEBUG_LOG("Shop - k. z parametrami");
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
}*/
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
int Shop::getIncome()const {
   return income_;
}
Shop::~Shop()
{

}
