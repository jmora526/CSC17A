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
#include "ShiftSupervisor.h"
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
    float sal;
    float bonus;
    ShiftSupervisor Info;
    
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
//Introduce the Sal
    cout<<"Enter annual salary:";
    cin>>sal;
    Info.setSal(sal);    
//Introducre Bonus
    cout<<"Enter Annual Bonus:";
    cin>>bonus;
    Info.setBonus(bonus);    
//Output
    cout<<"Production Employee Info"<<endl;
    cout<<"Name:"<<Info.getName()<<endl;
    cout<<"Employee I.D:"<<Info.getNumber()<<endl;
    cout<<"Date Hired:"<<Info.getHired()<<endl;
    cout<<"Annual Salary:"<<Info.getSal()<<endl;
    cout<<"Annual Bonus:"<<Info.getBonus()<<endl;
    cout<<"Total:"<<Info.getBonus()+Info.getSal()<<endl;
    return 0;
}

