/* 
 * File: Pointer Rewrite
 * Author: Jose Morales
 * Purpose: Rewrite a function and 
 * Created on September 25, 2016, 6:51 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes
int doSomething(int *, int *);
//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int x = 10;
    int y = 15; 
    int z;
    
    int *pntrX = &x;
    int *pntrY = &y;
    
    //Introduce the values of the pointers before the change
    cout<<"Here is the value of the pointer 'X' before:"<<*pntrX<<endl;
    cout<<"Here is the value of the pointer 'Y' before:"<<*pntrY<<endl;
    cout<<endl;
    
    //Introduce the function here.
    z = doSomething(pntrX,pntrY);
    
    //Change up the values with changed function.
    cout<<"Here is the value of the pointer 'X' after:"<<*pntrX<<endl;
    cout<<"Here is the value of the pointer 'Y' after:"<<*pntrY<<endl;
    cout<<"Total of Z:"<<z<<endl;
    return 0;
}

//Function that was written.
int doSomething(int *x, int *y){
    int temp = *x;
    *x = *y * 10;
    *y = temp * 10;
    return *x + *y;
}
