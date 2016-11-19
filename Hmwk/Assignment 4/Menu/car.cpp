//System Libraries
#include <iostream>
#include <string>
using namespace std;

//User Libraries
#include "car.h"

car::car(){
    yearMod = 0;
    make = "";
    speed = 0;
}

void car::setYear(int a){
    yearMod = a;
}

void car::setMake(string a){
    make = a;
}

int car::getYear(){
    return yearMod;
}

string car::getMake(){
    return make;
}

int car::access(){
    speed+=5;
    cout<<speed<<endl;
}

int car::brake(){
    speed-=5;
    cout<<speed<<endl;
}