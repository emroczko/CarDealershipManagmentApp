#pragma once
#include <stdio.h>
#include <iostream>
#include <string>


using namespace std;

class Customer {
public:
    Customer();
    Customer(string name_, unsigned int wallet);
    Customer(const Customer& customer);
    ~Customer();

    int get_wallet() const;
    void give_customer_money(unsigned int);
    Customer &operator += (unsigned int moreMoney);
    Customer &operator -= (unsigned int lessMoney);
    friend ostream& operator<< (ostream& ,const Customer&);

private:
    string name_;
    unsigned int money_;

};
