/* 
 * File: 
 * Author: Jose Morales
 * Purpose:
 *  Created on November 15, 2016, 8:25 PM
 */

//System Libraries
#include <iostream>
#include <string>
using namespace std;

//User Libraries
#include "car.h"
//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    string make;
    int yearMod;
    car details;
    
    //User input
    cout<<"Enter the car's year model:";
    cin>>yearMod;
    cout<<"Enter make of the car:";
    cin>>make;
    //Set
    details.setYear(yearMod);
    details.setMake(make);
    //Output
    cout<<"The car's year model is "<<details.getYear()<<endl;
    cout<<"The make of the car is "<<details.getMake()<<endl;
    //Try loop?
    cout<<"Acceleration will occur a number of 5 times"<<endl;
    for(int c = 0; c < 5; c++){
        cout<<"The speed after "<<c+1<<" acceleration:";
        details.access();
    }
    cout<<"Breaking will occur a number of 5 times"<<endl;
    for(int c = 0; c < 5; c++){
        cout<<"The speed after "<<c+1<<" break:";
        details.brake();
    }
    return 0;
}

