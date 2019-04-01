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

class Employee{
private:
    string name;
    string surname;
  //  Proffesion profession;
    string profession;
    
public:
    Employee(string="Jan", string = "Kowalski", string="Kierownik");
    void showEmployees();
    void addEmployee();
    void removeEmployee();
    ~Employee();
    
    
    
};
