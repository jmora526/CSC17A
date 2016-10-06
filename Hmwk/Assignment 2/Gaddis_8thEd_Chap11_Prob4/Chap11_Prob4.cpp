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
    float ttl = 0.0;
    float ttlAvg = 0.0;
    float h = 0.0, high = 0.0;
    float l = 0.0, low = 0.0;
    //Introduce the input
    cout<<"Enter the rainfall,high & low temperature for 12 month";
    cout<<endl;
    
    for(int c = 0; c < M; c++){
    //Rainfall    
    cout<<"Enter rainfall for month #"<<c+1<<":";
    cin>>month[c].rainfall;   
    //High Temperature
    do{
    cout<<"Enter High Temperature for month #"<<c+1<<":";
    cin>>month[c].TempHi;
    }while(month[c].TempHi<=(-100) || month[c].TempHi>=140);
    //Low Temperature
    do{
    cout<<"Enter Low Temperature for month #"<<c+1<<":";
    cin>>month[c].TempLow;
    }while(month[c].TempLow<=(-100) || month[c].TempLow>=140);
    } 
    //Find the total rainfall for all months and average.
    for(int c = 0; c < M; c++){
        ttl+=month[c].rainfall;
        ttlAvg=ttl/M;
    }
    //Find High & Low
    h = month[0].TempHi;
    l = month[0].TempLow;
    for(int c = 0; c < M; c++){
        if(l > month[c].TempLow){
        l = month[c].TempLow;
        low=c;
        }
        if(h < month[c].TempHi){
        h = month[c].TempHi;
        high=c;    
        }      
    } 
    //Display Output for User.
    cout<<endl;
    cout<<"Average Monthly Rainfall:"<<ttlAvg<<endl;
    cout<<"Total Yearly Rainfall:"<<ttl<<endl;
    cout<<"High Temperature:"<<h<<"F"<<endl;
    cout<<"High Month:"<<high<<endl;
    cout<<"Low Temperature:"<<l<<"F"<<endl;
    cout<<"Low Month:"<<low<<endl;
    return 0;
}