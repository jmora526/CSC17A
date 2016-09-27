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
int *alloArr(int);
//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    const int NUM = 5;
    int *arr;
    
    //Grab 
    arr = alloArr(NUM);
    
    //Display
    for(int c = 0 ; c < NUM; c++){
        cout<<arr[c]<<endl;
    }
    
    return 0;
}

//Function
int *alloArr(int NUM){
    int *arry = new int[NUM];
    for(int c = 0; c < NUM; c++){
        arry[NUM];
    }
    return arry;
}
