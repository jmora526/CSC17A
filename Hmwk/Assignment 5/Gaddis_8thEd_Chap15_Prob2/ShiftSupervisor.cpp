//System Libraries
#include <iostream>
#include <string>
using namespace std;

//User Libraries
#include "Employee.h"
#include "ShiftSupervisor.h"

//Functions
ShiftSupervisor::ShiftSupervisor():Employee(){
    sal = 0;
    bonus = 0;
}

void ShiftSupervisor::setSal(float a){
    sal = a;
}

float ShiftSupervisor::getSal(){
    return sal;
}

void ShiftSupervisor::setBonus(float a){
    bonus = a;
}

float ShiftSupervisor::getBonus(){
    return bonus;
}