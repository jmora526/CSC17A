/* 
 * File: 
 * Author: Jose Morales
 * Purpose:
 * Created on October 24, 2016, 12:30 PM
 */

//System Libraries
#include <iostream>

#include "numDays.h"
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    float hrs;
    numDays convert1;
    numDays convert2;
    numDays convert3;
    
    cout<<"Enter the number of hours:";
    cin>>hrs;
    convert1.setHour(hrs);
    cout<<"Converted to number of days:\n";
    cout<<convert1.getDay();
    
    cout<<"\nEnter the number of hours:";
    cin>>hrs;
    convert2.setHour(hrs);
    
    cout<<"Enter the number of hours:";
    cin>>hrs;
    convert3.setHour(hrs);
    convert2.getDay();
    convert3.getDay();
    return 0;
}

