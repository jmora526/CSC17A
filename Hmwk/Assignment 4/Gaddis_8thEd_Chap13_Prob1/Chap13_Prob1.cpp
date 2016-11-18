/* 
 * File: Date
 * Author: Jose Morales
 * Purpose:
 * Created on November 15, 2016, 5:25 PM
 */

//System Libraries
#include <iostream>
#include <cstdlib>
using namespace std;

//User Libraries
#include "dateinfo.h"
//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    date date;
    int day;
    int month;
    int year;  
    //Input
    cout<<"Enter the day:";
    cin>>day;
    cout<<"Enter the month:";
    cin>>month;
    cout<<"Enter the years:";
    cin>>year;   
    //Set
    date.setDate(day);
    date.setMonth(month);
    date.setYear(year);
    date.showMon();
    //Display
    date.display();
    return 0;
}

