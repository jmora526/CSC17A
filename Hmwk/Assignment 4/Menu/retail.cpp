//System Libraries
#include <iostream>
#include <string>
using namespace std;

//User Libraries
#include "retail.h"

retail::retail(){
    describe = "";
    uHand = 0;
    price = 0;
}

void retail::setDes(string a){
    describe = a;
}

void retail::setUhand(int a){
    uHand = a;
}

void retail::setPrice(float a){
    price = a;
}

string retail::getDes(){
    return describe;
}

int retail::getUhand(){
    return uHand;
}

float retail::getPrice(){
    return price;
}