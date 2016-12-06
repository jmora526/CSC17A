//System Libraries
#include <iostream>
#include <string>
using namespace std;

//User Libraries
#include "Employee.h"

//Functions
Employee::Employee(){
    name = "";
    number = 0;
    dHired = 0;
}

void Employee::setName(string a){
    name = a;
}

string Employee::getName(){
    return name;
}

void Employee::setNumber(int a){
    number = a;
}

int Employee::getNumber(){
    return number;
}

void Employee::setHired(int a){
    dHired = a;
}

int Employee::getHired(){
    return dHired;
}