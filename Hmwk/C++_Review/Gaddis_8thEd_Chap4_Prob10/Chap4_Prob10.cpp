/* 
 * File: Days in a Month
 * Author: Jose Morales
 * Purpose: Calculate how many days are in a specific month.
 * Created on September 6, 2016, 7:25 PM
 */
//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    unsigned int month, year;
    //Input Data for Months
    do{
    cout<<"Enter a Month (1-12) Here:"<<endl;
        cin>>month;
    }while(month >= 13 || month < 1);
    
    //Input Data for Years
    cout<<"Enter a year:"<<endl;
        cin>>year;
        
    //Process Data
    if(year % 400 == 0){
        cout<<"Month Has 29 Days"<<endl;
    }
    else if(year % 100!= 0 && year % 4 == 0){
        cout<<"Month Has 29 Days"<<endl;
    }
    else{
        cout<<"Month Has 28 Days"<<endl;
    }
    //Output Data
    
    return 0;
}

