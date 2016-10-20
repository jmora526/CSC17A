/* 
 * File: Corporate Sale Data Output
 * Author: Jose Morales
 * Purpose:
 * Created on Oct 15, 2016, 1:56 PM
 */

//System Libraries
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

//User Libraries
#include "division.h"
//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    division div;
    fstream file;
    //Introduce File
    file.open("divSales.txt",ios::out);
    //Intro Div
    cout<<"Enter The Division Name:";
    cin>>div.name;
    //Introduce Loop
    for(int c = 0; c < 4; c++){
        cout<<"Enter The Quarter:";
        cin>>div.quarter[c];
        cout<<"Enter The Quarter Sales "<<c+1<<":";
        cin>>div.sales[c];
        file<<div.name<<endl;
        file<<div.sales[c]<<endl;
        file<<div.quarter[c]<<endl; 
    }
    
    file.close();
    return 0;
}

