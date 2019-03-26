//
//  STAFF.hpp
//  PROEprojekt1
//
//  Created by Eryk Mroczko on 13/03/2019.
//  Copyright © 2019 Eryk Mroczko. All rights reserved.
//
#pragma once
#include <iostream>
#include <string>

using namespace std;

/*enum class Proffesion {
    Kasjer = 1,
    Kierownik = 2,
    Magazynier = 3
}; */

class Staff{
private:
    string name;
    string surname;
  //  Proffesion profession;
    string profession;
    
public:
    Staff(string="Jan", string = "Kowalski", string="Kierownik");
    void showStaff();
    void addEmployee();
    void removeEmployee();
    ~Staff();
    
    
    
};
