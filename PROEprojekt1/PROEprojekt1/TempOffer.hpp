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
#include "Car.hpp"

using namespace std;

class TempOffer: public Product{
private:
    int offerTime;
public:
    TempOffer(string = "Woda", float = 1.00, int = 1, int =7);
    void showTempOffer();
    ~TempOffer();
    
};
