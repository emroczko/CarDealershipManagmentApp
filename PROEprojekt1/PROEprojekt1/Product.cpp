//
//  ASSORTMENT.cpp
//  PROEprojekt1
//
//  Created by Eryk Mroczko on 13/03/2019.
//  Copyright © 2019 Eryk Mroczko. All rights reserved.
//

#include "Product.hpp"

Product::Product(string prodName, int prodID, float prodPrice){
    productName = prodName;
    productPrice = prodPrice;
    productID = prodID;
}
Product::~Product(){
    
}
ostream& operator<<(ostream& os,const Product& p)
{
    os<<p.productName<<" - numer katalogowy: "<<p.productID<<", cena: "<<p.productPrice<<"zł"<<endl;
    return os;
}
