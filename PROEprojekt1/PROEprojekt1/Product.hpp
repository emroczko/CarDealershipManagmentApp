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

class Product{
protected:
    string productName;
    float productPrice;
    int productID;
    
public:
    Product(string="Przedmiot", int=1, float=10.0);
    void showAssortment();
    void addProduct();
    void deleteProduct();
    int findProduct(string);
    ~Product();
    friend ostream& operator<< (ostream& ,const Product&);
};
