#include "../Headers/main_object_shop.h"



using namespace std;

Shop::Shop():income_(1000) {}



Shop::Shop(int income): income_(income)
{

/*
    Personnel_.emplace_back(Person::makeSalesman("Jan", "Jankowski", 4000, 6));
    Personnel_.emplace_back(Person::makeSalesman("Anna", "Bratkowska", 3000, 3));
    Personnel_.emplace_back(Person::makeMechanic("Adam", "Mazowiecki", 4200, "Mechanik"));
    Personnel_.emplace_back(Person::makeMechanic("Juliusz", "Marski", 3500, "Wulkanizator"));
    Personnel_.emplace_back(Person::makeSalesman("Dariusz", "Markowski", 5000, 5));
    Vehicles_.emplace_back(Vehicle::makeCar("BMW 340i", 320000, 1, "Nowy", "Benzyna", "Manualna"));
    Vehicles_.emplace_back(Vehicle::makeCar("BMW 550i", 440000, 2, "Używany", "Diesel", "Automatyczna hydrauliczna"));
    Vehicles_.emplace_back(Vehicle::makeCar("BMW 730d", 370000, 3, "Używany", "Diesel", "Automatyczna bezstopniowa"));
    Vehicles_.emplace_back(Vehicle::makeCar("BMW 428i", 190000, 4, "Nowy", "Benzyna", "Manualna"));
    Vehicles_.emplace_back(Vehicle::makeCar("BMW 316d", 142000, 5, "Nowy", "Diesel", "Manualna"));
    Vehicles_.emplace_back(Vehicle::makeMotorcycle("BMW R 1250 RS", 23000, 1, "Benzyna", "Używany", "Dwusuwowy"));*/
}

Shop::Shop(int income, vector < shared_ptr<Vehicle> > assortment, vector <shared_ptr<Person>> Personnel): income_(income)
 {
    for(auto x: assortment)
        vehicles_.emplace_back(x);
    for(auto i: Personnel)
        personnel_.emplace_back(i);
}

Shop::Shop(const Shop& shop):income_(shop.income_),vehicles_(shop.vehicles_) ,personnel_(shop.personnel_)
{
}

Shop & Shop::operator += (shared_ptr<Person> employee)
{
    personnel_.emplace_back(employee);
    return *this;
}
Shop & Shop::operator += (const shared_ptr<Vehicle> vehicle)
{
    vehicles_.emplace_back(vehicle);
    return *this;
}
Shop & Shop::operator -= (int i)
{
    vehicles_.erase(vehicles_.begin()+i);
    return *this;
}

void Shop::set_income(int val) {
    income_=val;
}

vector < shared_ptr<Vehicle> > Shop::get_vehicles() const {
    return vehicles_;
}

vector < shared_ptr<Person> > Shop::get_personnel() const {
    return personnel_;
}

ostream& operator<<(ostream& os,const Shop& S)
{
    for(auto &p : S.vehicles_)
        os << *p<<endl;
    for(auto &p : S.vehicles_)
        os << *p<<endl;

    os<<endl;
    return os;
}
ofstream& operator<<(ofstream& os,const Shop& S)
{
    for(auto &p : S.vehicles_)
        os << *p<<endl;
    for(auto &p : S.vehicles_)
        os << *p<<endl;

    os<<endl;
    return os;
}

template <typename T>
shared_ptr<T> load_object(istream &in)
{
    auto t = make_shared<T>();
    in >> *t;
    return t;
}

istream & operator >> (istream &in, Shop &shop)
{

    string object_type;

    while (!in.eof())
    {
        object_type.clear();
        in >> object_type;

        if ("Samochod" == object_type) {shop += load_object<Car>(in);}
        if ("Motocykl" == object_type) {shop += load_object<Motorcycle>(in);}
        if ("Mechanicy" == object_type) {shop+= load_object<Mechanic>(in);}
        if ("Sprzedawcy" == object_type) {shop+= load_object<Salesman>(in);}
    }

    return in;
}

Shop & Shop::operator = (Shop &shop)
{
    income_ = shop.income_;

    personnel_.clear();
    vehicles_.clear();

    for(unsigned int i = 0; i< shop.personnel_.size(); ++i)
        personnel_.emplace_back(shop.personnel_[i]);

    for(unsigned int i = 0; i< shop.vehicles_.size(); ++i)
        vehicles_.emplace_back(shop.vehicles_[i]);

    return *this;
}

int Shop::get_income()const {
   return income_;
}
Shop::~Shop()
{

}
