//
//  ASSORTMENT.cpp
//  PROEprojekt1
//
//  Created by Eryk Mroczko on 13/03/2019.
//  Copyright © 2019 Eryk Mroczko. All rights reserved.
//

#include "Assortment.hpp"

Product::Product(string prodName, float prodPrice, int prodID){
    productName = prodName;
    productPrice = prodPrice;
    productID = prodID;
}
Product::~Product(){
    
}
