//
//  STAFF.cpp
//  PROEprojekt1
//
//  Created by Eryk Mroczko on 13/03/2019.
//  Copyright © 2019 Eryk Mroczko. All rights reserved.
//

#include "Staff.hpp"

Employee::Employee(string n, string s, string p){
    name = n;
    surname = s;
    profession = p;
}
void Employee::showEmployees(){
    cout<<"Pierwszy pracownik i jego funkcja: "<<name<<" "<<surname<<" "<<profession<<endl;
}
Employee::~Employee(){
    
}
