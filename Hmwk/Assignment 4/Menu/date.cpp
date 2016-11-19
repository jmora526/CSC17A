//System Libraries
#include <iostream>
#include <cstdlib>
using namespace std;

//User Libraries
#include "dateinfo.h"

void date::setDate(int a){
    if(a < 1){
        exit(1);
    }
    else{
        if(a > 31) exit(1);
    }
    day = a;
}

void date::setMonth(int b){
    if(b < 1){
        exit(1);
    }
    else{
        if(b > 12) exit(1); 
    }
    month = b;
}

void date::setYear(int c){
    year = c;
}

int date::getDate(){
    return day;
}

int date::getMonth(){
    return month;
}

int date::getYear(){
    return year;
}

void date::showMon(){
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
}
void date::display(){
    cout<<month<<"/"<<day<<"/"<<year<<endl;
    
    showMon();
    cout<<" "<<day<<","<<year<<endl;
    
    cout<<day<<" ";
    showMon();
    cout<<" "<<year<<endl;
}