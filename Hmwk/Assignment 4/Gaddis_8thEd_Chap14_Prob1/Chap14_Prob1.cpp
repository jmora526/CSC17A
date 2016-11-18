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
#include "numbers.h"
//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int number;
    numbers display;

    cout<<"Enter a number (1-9999):"<<endl;
    cin>>number;
    if(number > 9999 || number < 0){
        cout<<"Error, Negative number or number is too high"<<endl;
    }
    else{
        display.display(number);
    }
    return 0;
}

