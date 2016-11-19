//System Libraries
#include <iostream>
#include <string>
using namespace std;

//User Libraries
#include "numDays.h"

numDays::numDays(){
    hrs = 0;
}

void numDays::setHour(float a){
    hrs = a;
}

float numDays::getHour()const{
    return hrs;
}

float numDays::getDay()const{
    return hrs/8;
}

numDays numDays::operator +(const numDays&z){
    numDays a;
    a.hrs = hrs-z.hrs;
    return a;
}

numDays numDays::operator -(const numDays&y){
    numDays b;
    b.hrs = hrs-y.hrs;
    return b;
}

numDays numDays::operator ++(){
    ++hrs;
    getDay();
    return *this;
}

numDays numDays::operator ++(int){
    numDays c;
    c.setHour(hrs);
    hrs++;
    c.getDay();
    return c;
}

numDays numDays::operator --(){
    --hrs;
    getDay();
    return *this;
}

numDays numDays::operator --(int){
    numDays d;
    d.setHour(hrs);
    hrs--;
    d.getDay();
    return d;
}