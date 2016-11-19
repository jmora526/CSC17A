//System Libraries
#include <iostream>
#include <string>
using namespace std;

//User Libraries
#include "empinfo.h"

//Set class to nothing.
employee::employee(){
    name = "";
    idNum = 0;
    depot = "";
    posit = "";
}
//Set Values
void employee::setName(string a){
    name = a;
}
void employee::setNum(int a){
    idNum = a;
}
void employee::setDepot(string a){
    depot = a;
}
void employee::setPosit(string a){
    posit = a;
}
//Get Values
string employee::getName(){return name;}
int employee::getNum(){return idNum;}
string employee::getDepot(){return depot;}
string employee::getPosit(){return posit;}