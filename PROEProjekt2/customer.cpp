#include "customer.h"

using namespace std;

Customer::Customer():name("Jan Sobieski"), money(250000){
    //DEBUG_LOG("Customer - k. domyslny");
}

Customer::Customer(string n, unsigned int s){
    name = n;
    money = s;
   // DEBUG_LOG("Customer - k. z parametrami");

}
Customer::Customer(const Customer &customer) : name(customer.name), money(customer.money)
{
    //DEBUG_LOG("Customer - k. kopiujacy");
}

Customer::~Customer()
{
   // DEBUG_LOG("Customer - destruktor");
}

int Customer::getWallet() const
{
    return money;
}
void Customer::giveCustomerMoney(unsigned int Money)
{
    money = Money;
}

Customer& Customer::operator += (unsigned int moreMoney)
{
    money += moreMoney;
    return *this;
}

Customer& Customer::operator -= (unsigned int lessMoney)
{
    int result;
    result = money - lessMoney;
    if(result < 0)
    {
        cout<< "Nie możesz zabrać klientowi wszystkich pieniedzy :( " <<endl;
        return *this;
    }
    else
    {
        money-= lessMoney;
        return *this;
    }
}


ostream& operator<<(ostream& os,const Customer& customer)
{
    os<<customer.name<<" - Ilosc pieniedzy na koncie: "<<customer.money<<endl;
    return os;
}
