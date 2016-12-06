//System Libraries
#include <iostream>
using namespace std;

//User Libraries
#include "Date.h"

//Functions
void Date::setDay(int a){
    if(day >= 1 || day <= 31){
        day = a;
    }
    else{
        throw errDay();
    }
}

void Date::setMonth(int b){
    if(month >= 1 || month <= 12){
        month = b;
    }
    else{
        throw errMon();
    }
}

void Date::setYear(int c){
    year = c;
}

int Date::getDay(){
    return day;
}

int Date::getMonth(){
    return month;
}

int Date::getYear(){
    return year;
}

void Date::show1(){
    cout<<month<<"/"<<day<<"/"<<year<<endl;
}

void Date::show2(){
    switch(month){
        case 1: cout<<"January";break;
        case 2: cout<<"February";break;
        case 3: cout<<"March";break;
        case 4: cout<<"April";break;
        case 5: cout<<"May";break;
        case 6: cout<<"June";break;
        case 7: cout<<"July";break;
        case 8: cout<<"August";break;
        case 9: cout<<"September";break;
        case 10:cout<<"October";break;    
        case 11:cout<<"November";break;
        case 12:cout<<"December";break;
    }
    cout<<" "<<day<<","<<year<<endl;
}

void Date::show3(){
    cout<<day<<" ";
    switch(month){
        case 1: cout<<"January";break;
        case 2: cout<<"February";break;
        case 3: cout<<"March";break;
        case 4: cout<<"April";break;
        case 5: cout<<"May";break;
        case 6: cout<<"June";break;
        case 7: cout<<"July";break;
        case 8: cout<<"August";break;
        case 9: cout<<"September";break;
        case 10:cout<<"October";break;    
        case 11:cout<<"November";break;
        case 12:cout<<"December";break;
    }
    cout<<" "<<year<<endl;
}