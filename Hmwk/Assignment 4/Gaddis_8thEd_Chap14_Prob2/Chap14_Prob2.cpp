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
#include "dayofyear.h"
//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int day;
    int num;
    string month;
    dayofyear store;
    cout<<"Enter a number between 1-365 to pick from month and show date;"<<endl;
    cout<<"Enter number:";
    cin>>num;
    store.cal(num);
    store.show();
    return 0;
}

