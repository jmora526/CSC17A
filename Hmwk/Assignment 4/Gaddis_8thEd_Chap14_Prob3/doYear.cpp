//System Libraries
#include <iostream>
#include <string>
using namespace std;

//User Libraries
#include "doYear.h"

doYear::doYear(int d,string m){
    date = d;
    month = m;
}

void doYear::setDay(int d){
    date = d;
}

void doYear::setMonth(string a){
    month = a;
}

int doYear::getDay(){
    return date;
}

string doYear::getMonth(){
    return month;
}

void doYear::show(int d, string m){
    int dDay = 0 ;
    int mDay = 0 ;
    dDay = ++d;
    mDay = --d;
    cout<<"Day Ahead:"<<m<<" "<<dDay<<endl;
    cout<<"Day before:"<<m<<" "<<mDay<<endl;
}

