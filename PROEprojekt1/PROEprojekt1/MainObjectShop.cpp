//
//  MainObjectShop.cpp
//  PROEprojekt1
//
//  Created by Eryk Mroczko on 21/03/2019.
//  Copyright © 2019 Eryk Mroczko. All rights reserved.
//

#include "MainObjectShop.hpp"
#include <iostream>
#include <string>
#include <vector>

#include "Locations.hpp"
#include "Employee.hpp"
#include "Product.hpp"
#include "TempOffer.hpp"
#define M 3
using namespace std;

Shop::Shop()
{
    
}
Shop::Shop(int a, int b, int c)
{
    NumOfPersonel = a;
    NumOfAssortment = b;
    
    Employee employee;
    Product product;
    TempOffer tempO;
    Location base;
    
    
    for( int i = 0; i < a; i++ )
    {
        Personnel.push_back( employee );
    }
    
    Assortment1.emplace_back("woda", 1,2 );
    Assortment1.emplace_back("chleb", 2,20  );
    Assortment1.emplace_back("jajka", 3,23  );
    Assortment1.emplace_back("mieso", 4,11  );
    Assortment1.emplace_back("ryba", 5,10 );
    
    
   
    
    
    
    
}

Shop& operator+=(Shop &a, const Employee &b)
{
    a.Personnel.push_back( b );
    a.NumOfPersonel+=1;
    return a;
}
/*
Shop& operator=(Shop &a, Shop &b)
{
    a.Personnel=b.Personnel;
    a.NumOfPersonel+=1;
    return a;
}*/

ostream& operator<<(ostream& os,const Shop& S)
{
    
    //os<<"miejscowosc: "<<S.Location1<<endl;
    os<<"Sklep"<<endl;
    os<<"Personel: "<<endl;
    for(int i=0;i<S.NumOfPersonel;i++)
    {
    os<<S.Personnel[i];
    }
    os<<"produkty: "<<endl;
    for(int i=0;i<S.NumOfAssortment;i++)
    {
        os<<S.Assortment1[i];
    }
    return os;
}
Shop::~Shop()
{
   
//    delete [] Personnel;
    cout<<"destruktor per"<<endl;
    //delete [] Assortment1;
    cout<<"destruktor ass"<<endl;
}
