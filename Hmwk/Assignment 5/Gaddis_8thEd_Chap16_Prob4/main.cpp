/* 
 * File: 
 * Author: Jose Morales
 * Purpose:
 * Created on December 5, 2016, 11:59 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries
#include "Absolute.h"
//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    float num;
    Absolute<float> dif;
    
    cout<<"Change a number to Absolute Value:";
    cin>>num;
    
    dif.setVal(num);
    cout<<dif.ChangeVal();
    return 0;
}

