/* 
 * File: Speaker's Bureau
 * Author: Jose Morales
 * Purpose:
 * Created on September 25, 2016, 1:56 PM
 */

//System Libraries
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//User Libraries
#include "spkr.h"
//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    const int A = 10;
    speaker list[A];
    //Introduce the loop for structures.
    for(int c = 0; c < A; c++){
    //Input Speaker Name
        cin.ignore();
        cout<<"Enter Name for Speaker "<<c+1<<":";
        getline(cin,list[c].name);
    //Input Tele Number 
        cout<<"Enter Tele Number for Speaker "<<c+1<<":";
        cin>>list[c].telNum;
    //Input Speaking Topic Here.
        cin.ignore();
        cout<<"Enter Speaking Topic for Speaker "<<c+1<<":";
        getline(cin,list[c].topic);
    //Input Fee Here.
        cout<<"Enter Fee for Speaker "<<c+1<<":";
        cin>>list[c].fee;
    }
    //Display
    cout<<"|  Speaker Name  |  Telephone Number  |  Topic  |  Fee  |"<<endl;
    for(int c = 0; c < A; c++){
    cout<<setw(10)<<list[c].name<<setw(20)<<list[c].telNum<<setw(15)<<list[c].topic<<setw(10)<<list[c].fee<<endl; 
    }
    return 0;
}

