/* 
 * File: 
 * Author: Jose Morales
 * Purpose:
 * Created on November 16, 2016, 9:25 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries
#include "doYear.h"
//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int day;
    int dDay;
    string m;
    
    cout<<"Enter a day from a month:";
    cin>>day;
    cout<<"Now enter the month of the year:";
    cin>>m;
    doYear d(day,m);
    d.setDay(day);
    d.setMonth(m);
    d.show(day,m);
    
    return 0;
}

