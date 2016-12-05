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
#include "SimpleVector.h"
//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare variables
    int sqr2=0x16A1;//fact -> WD16 BP12
    int two;
    
    //Calculate the result
    two=sqr2*sqr2;//WD32  BP24
    
    //Output the results
    cout<<"Program to test understanding and utilization of Scaling & "<<endl;
    cout<<"the Simple Vector before modification "<<endl;
    cout<<"Shifted SQR(2)->0x16A1 = "<<sqr2<<"      WD16 BP12 "<<endl;
    cout<<"sqr2*sqr2              = "<<two<<"  WD32 BP24"<<endl;
    
    //Calculate result and Use Simple Vector Test
    two>>=24;//WD8 BP0
    SimpleVector<int> s(1);
    s[0]=two;
    
    //Display/Output solution here
    cout<<"sqr2*sqr2 >> 24        = "<<two<<endl;
    cout<<"Simple Vector Contents = "<<s[s.size()-1]<<endl;

    //Exit stage right!
    return 0;
    return 0;
}

