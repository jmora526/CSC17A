/* 
 * File: Weather Statistics
 * Author: Jose Morales
 * Purpose:
 * Created on September 25, 2016, 1:56 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries
#include "month.h"
//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    const int M = 12;
    monthIN month[M];
    
    //Introduce the input
    cout<<"Enter the rainfall,high & low temperature for 12 month";
    cout<<endl;
    
    for(int c = 0; c < M; c++){
    //Rainfall    
    cout<<"Enter rainfall for month #"<<c+1<<":";
    cin>>month[c].rainfall;
    
    //High Temperature
    cout<<"Enter High Temperature for month #"<<c+1<<":";
    cin>>month[c].TempHi;
    
    //Low Temperature
    cout<<"Enter Low Temperature for month #"<<c+1<<":";
    cin>>month[c].TempLow;
    
    }
    return 0;
}

