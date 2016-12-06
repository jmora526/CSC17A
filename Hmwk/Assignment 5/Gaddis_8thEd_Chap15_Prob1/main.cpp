/* 
 * File: Employee & Product Worker Classes
 * Author: Jose Morales
 * Purpose:
 * Created on December 5, 2016, 11:59 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries
#include "ProductionWorker.h"
//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
//Declare Variables
    string name;
    int number;
    int dHired;
    int shift;
    float rate;
    ProductionWorker Info;
    
//Introduce Name Input
    cout<<"Enter the Employee's name here:";
    getline(cin,name);
    cout<<endl;
//Set Name
    Info.setName(name);
//Introduce Employee Number 
    cout<<"Enter the Employee number for "<<Info.getName()<<endl;
    cin>>number;
    cout<<endl;
//Set Number
    Info.setNumber(number);
//Introduce Date
    cout<<"Enter the date the Employee "<<Info.getName()<<" was hired (03031999):";
    cin>>dHired;
    cout<<endl;
//Set Date
    Info.setHired(dHired);
//Introduce Shift
    cout<<"Enter shift for "<<Info.getName()<<"(1 or 2):";
    cin>>shift;
    cout<<endl;
//Set Shift
    Info.setShift(shift);
//INtroduce Payrate   
    cout<<"Enter payrate for "<<Info.getName()<<" :";
    cin>>rate;
    cout<<endl;
//Set Payrate
    Info.setRate(rate);
    
//Output
    cout<<"Production Employee Info"<<endl;
    cout<<"Name:"<<Info.getName()<<endl;
    cout<<"Employee I.D:"<<Info.getNumber()<<endl;
    cout<<"Date Hired:"<<Info.getHired()<<endl;
    cout<<"Shift:"<<Info.getShift()<<endl;
    cout<<"Payrate:"<<Info.getRate()<<endl;
    return 0;
}

