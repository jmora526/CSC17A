//System Libraries
#include <iostream>
#include <string>
using namespace std;

//User Libraries
#include "landTrac.h"

landTrac::landTrac(){
    len = 0;
    wid = 0;
}

void landTrac::setLen(int a){
    len = a;
}

void landTrac::setWid(int b){
    wid = b;
}

int landTrac::getLen()const{
    return len;
}

int landTrac::getWid()const{
    return wid;
}

int landTrac::getArea()const{
    return len*wid;
}