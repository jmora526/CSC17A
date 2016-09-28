/* 
 * File: Array Allocator
 * Author: Jose Morales
 * Purpose: Temp for all the programs
 * Created on September 12, 2016, 1:04 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int NUM, *a, *pnt;
    
    //Introduce the input for the user.
    cout<<"Enter the size of the array here:";
    cin>>NUM;
    
    //Introduce the pointer
    a = new int [NUM];
    
    //Add the number into the array the user inputed.
    for(int c = 0; c < NUM; c++){
        cout<<"Enter Number "<<c+1<<":";
        cin>>*(a+c);
    }
    pnt = a;
    
    //Display the allocated array to the user.
    cout<<endl;
    cout<<"Array Allocation Done"<<endl;
    for(int c = 0; c < NUM; c++){
        cout<<*(pnt+c)<<" ";
    }
    
    return 0;
}
