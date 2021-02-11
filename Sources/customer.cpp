#include "../Headers/customer.h"

using namespace std;

Customer::Customer():name_("Jan Sobieski"), money_(250000){

}

Customer::Customer(string name, unsigned int money){
    name_ = name;
    money_ = money;


}
Customer::Customer(const Customer &customer) : name_(customer.name_), money_(customer.money_)
{   
}

Customer::~Customer()
{
}

int Customer::get_wallet() const
{
    return money_;
}

void Customer::give_customer_money(unsigned int money)
{
    money_ = money;
}

Customer& Customer::operator += (unsigned int more_money)
{
    money_ += more_money;
    return *this;
}

Customer& Customer::operator -= (unsigned int less_money)
{
    int result;
    result = money_ - less_money;
    if(result < 0)
    {
        cout<< "Nie możesz zabrać klientowi wszystkich pieniedzy :( " <<endl;
        return *this;
    }
    else
    {
        money_ -= less_money;
        return *this;
    }
}


ostream& operator<<(ostream& os, const Customer& customer)
{
    os<<customer.name_<<" - Ilosc pieniedzy na koncie: "<<customer.money_<<endl;
    return os;
}
