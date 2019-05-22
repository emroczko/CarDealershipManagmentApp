pragma once
#include <stdio.h>
#include <iostream>
#include <string>
#include "debug.h"


#define _DEBUG

using namespace std;

class Customer {
private:
    string name;
    unsigned int money;

public:
    Customer();
    Customer(string name_, unsigned int wallet);
    Customer(const Customer& customer);
    ~Customer();

    int getWallet() const;
    void giveCustomerMoney(unsigned int);
    Customer &operator += (unsigned int moreMoney);
    Customer &operator -= (unsigned int lessMoney);
    friend ostream& operator<< (ostream& ,const Customer&);


};
