//
//  MainObjectShop.cpp
//  PROEprojekt1
//
//  Created by Eryk Mroczko on 21/03/2019.
//  Copyright © 2019 Eryk Mroczko. All rights reserved.
//

#include "MainObjectShop.hpp"

Shop::Shop()
{
    Location1 = Location();
    Personnel = Staff();
    Assortment1 = Assortment();
    TemporaryOffer = TempOffer();
}
Shop::Shop(Location adress, Staff personnel, Assortment assortment, TempOffer To)
{
    
}
