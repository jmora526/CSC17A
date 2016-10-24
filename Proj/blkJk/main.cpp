/* 
 * File: 
 * Author: Jose Morales
 * Purpose:
 * Created on October 24, 2016, 12:30 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries
#include "blkInfo.h"
//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int NUM = 0;
    card card[NUM];
    //Input Test
    cout<<"Enter Number of cards:";
    cin>>NUM;
    cin.ignore();
    //Input card Num
    for(int c = 0; c < NUM; c++){
        cout<<"Enter Card "<<c+1<<":";
        cin>>card[c].cardNum;
    }
    //Output
    for(int c = 0; c <NUM; c++){
        
    }
    return 0;
}

