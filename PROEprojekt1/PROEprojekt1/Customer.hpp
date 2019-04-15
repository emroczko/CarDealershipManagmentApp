//
//  Customer.hpp
//  PROEprojekt1
//
//  Created by Eryk Mroczko on 15/04/2019.
//  Copyright © 2019 Eryk Mroczko. All rights reserved.
//

#ifndef Customer_hpp
#define Customer_hpp

#include <stdio.h>
#include <string>

using namespace std;

class Customer {
private:
    string name;
    int money;
    
public:
    Customer();
    Customer(string Name, int wallet);
    Customer(const Customer& customer);
    
    
    
};

#endif /* Customer_hpp */
