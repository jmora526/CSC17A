/* 
 * File: Time Format
 * Author: Jose Morales
 * Purpose:
 * Created on December 5, 2016, 11:59 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries
#include "MilTime.h"
#include "Time.h"
//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int hr;
    int sec;
    
    cout<<"Enter the Hours Here:";
    cin>>hr;
    cout<<endl;
    
    cout<<"Enter the Seconds Here:";
    cin>>sec;
    cout<<endl;
        
    MilTime time;
    time.setTime(hr,sec);
    
    cout<<"Min:"<<time.getMin()<<endl;
    cout<<"Sec:"<<time.getSec()<<endl;
    
    return 0;
}

