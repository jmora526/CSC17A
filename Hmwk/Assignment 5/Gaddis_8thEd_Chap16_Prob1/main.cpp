/* 
 * File: 
 * Author: Jose Morales
 * Purpose:
 * Created on December 5, 2016, 11:59 PM
 */

//System Libraries
#include <iostream>
#include <cstdlib>
using namespace std;

//User Libraries
#include "Date.h"
//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int day;
    int month; 
    int year;
    
    Date Info;
    
    cout<<"Enter the Day Here:";
    cin>>day;
    cout<<endl;
    
    cout<<"Enter the Month Here:";
    cin>>month;
    cout<<endl;
    
    cout<<"Enter the Year Here:";
    cin>>year;
    cout<<endl;
    
    try{
        Info.setDay(day);
        Info.setMonth(month);
        Info.setYear(year);
        Info.show1();
        Info.show2();
        Info.show3();
    }
    
    catch(Date::errDay){
    cout<<"Date could not be input!"<<endl;    
    }
    
    catch(Date::errMon){
    cout<<"Month could not be input!"<<endl;    
    }
    return 0;
}

