//
//  ASSORTMENT.hpp
//  PROEprojekt1
//
//  Created by Eryk Mroczko on 13/03/2019.
//  Copyright © 2019 Eryk Mroczko. All rights reserved.
//
#pragma once
#include <iostream>
#include <string>

using namespace std;

class Assortment{
protected:
    string productName;
    float productPrice;
    int productID;
    
public:
    Assortment(string="Przedmiot", float=10.0, int=1);
    void showAssortment();
    void addProduct();
    void deleteProduct();
    int findProduct(string);
    ~Assortment();
};
