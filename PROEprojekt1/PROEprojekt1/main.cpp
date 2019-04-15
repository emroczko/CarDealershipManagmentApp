//
//  main.cpp
//  PROEprojekt1
//
//  Created by Eryk Mroczko on 13/03/2019.
//  Copyright © 2019 Eryk Mroczko. All rights reserved.
//

#include <stdint.h>
#include <iostream>
#include "Locations.hpp"
#include "Employee.hpp"
#include "Car.hpp"
#include "MainObjectShop.hpp"
#include "Debug.hh"
#include "Customer.hpp"

using namespace std;

int main(int argc, const char * argv[]) {

    cout<<"TEST Locations start"<<endl;
    
    Location location1;
    cout<<"Lokalizacja nr 1: "<<location1;
    Location location2("Lomza", "Dluga", 50);
    Location location3(location2);
    
    cout<<"Lokalizacja nr 3: "<<location3;
    cout<<"Czy lokalizacja 3 i 2 są takie same?"<<endl;
    
    if(location3!=location2){
        cout<<"Różne lokalizacje"<<endl;
    }
    else{cout<<"Są takie same"<<endl;}
    
    cout<<"Czy lokalizacja 1 i 2 są takie same?"<<endl;
    if(location2!=location1){
        cout<<"Różne lokalizacje"<<endl;
    }
    else{cout<<"Są takie same"<<endl;}
    cout<<"przypisuje lokalizacje 2 do 1"<<endl;
    location1=location2;
    cout<<"Lokalizacja nr 1 po przypisaniu do niej lokalizacji nr 2: "<<location1<<endl;
    
    cout<<"TEST Locations end"<<endl;
    
    cout<<"#####################################"<<endl<<endl;
    
    cout<<"TEST Employee start"<<endl;
    
    Employee employee1;
    Employee employee2("Julia Stanislawska", "Manager",25000);
    Employee employee3(employee2);
    
    cout<<employee1;
    cout<<employee2;
    
    if(employee2==employee3)
    {
        cout<<"Ten sam pracownik"<<endl;
    }
    else{
    cout<<"Inny pracownik"<<endl;
    }
   
    employee2+=43000;
    cout<<employee2;
    
    employee1-=3400;
    cout<<employee1;
    
    cout<<"TEST Employee end"<<endl;
    
    cout<<"#####################################"<<endl<<endl;
    
    cout<<"TEST Car start"<<endl;
    
    Car car1;
    Car car2("BMW 760Li", 780000, 6, condition::NEW, engine::GASOLINE);
    Car car3(car2);
    
    cout<<car2;
    cout<<car1;
    
    car2.setNewPrice(650000);
    cout<<car2;
    
    car1-=20000;
    cout<<car1;
    if(car1==car2){
        cout<<"Takie same auta"<<endl;
    }
    else {cout<<"Różne samochody"<<endl;}
    
    cout<<"TEST Car end"<<endl<<endl;
    cout<<"#####################################"<<endl<<endl;
    cout<<"TEST Customer start"<<endl;
    
    Customer customer1;
    Customer customer2("Słuzba ochrony panstwa", 10000000);
    Customer customer3(customer1);
    
    cout<<"Pierwszy klient: "<<customer1;
    cout<<"Drugi klient: "<<customer2;
    
    customer3.giveCustomerMoney(450000);
    customer2+=100000;
    
    cout<<customer3;
    cout<<"Chcę zabac klientowi 1 10 milionów"<<endl;
    customer1-=10000000;
    
    cout<<customer1;
    
    cout<<"TEST Customer end"<<endl<<endl;
    
    
    cout<<"#####################################"<<endl<<endl;
    cout<<"TEST MainObjectShop start"<<endl;
    
    Shop shop1;
    Shop shop2(20000, location1);
    Shop shop3(shop2);
    Shop shop4(34000, location2);
    
    cout<<"Czy sklepy 2 i 3 maja taki sam przychód?"<<endl;
    if(shop2==shop1)
        cout<<"tak"<<endl;
    else
        cout<<"nie"<<endl;
    
    shop2+=car2;
    shop2+=employee2;
    cout<<shop2;
    
    shop2+=shop4;
    
    cout<<"Sklepy 1 i 2 po połączeniu"<<endl;
    cout<<shop2;
    
    
    cout<<"Piąte auto z salonu 2"<<endl;
    cout<<shop2[5]<<endl;
    
    cout<<"Usuwam ostatni samochód ze sklepu 4"<<endl;
    --shop4;
    
  
    
    shop2.saveToFile(shop2);
    
    shop2.loadFromFile();
    
    return 0;
}


