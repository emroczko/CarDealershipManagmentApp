//
//  TempOffer.hpp
//  PROEprojekt1
//
//  Created by Eryk Mroczko on 13/03/2019.
//  Copyright © 2019 Eryk Mroczko. All rights reserved.
//

#pragma once
#include <iostream>
#include <string>

using namespace std;

class TempOffer{
private:
    string productName;
    float productPrice;
    int productID;
public:
    TempOffer(string = "Woda", float = 1.00, int = 1);
    int findProduct(string);
    string addProduct();
    void deleteProduct();
    void showTempOffer();
    
    
};
