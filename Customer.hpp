//
//  Customer.hpp
//  PROEprojekt1
//
//  Created by Eryk Mroczko on 15/04/2019.
//  Copyright © 2019 Eryk Mroczko. All rights reserved.
//

#pragma once
#include <stdio.h>
#include <string>
#include "Debug.hh"


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
