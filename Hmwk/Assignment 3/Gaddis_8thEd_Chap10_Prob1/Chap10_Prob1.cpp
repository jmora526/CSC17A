/* 
 * File: String Length
 * Author: Jose Morales
 * Purpose: Write function and return int.
 * Created on Oct 16, 2016, 3:56 PM
 */

//Write a function that returns an integer and accepts a pointer to a C-string as an argument.
//The function should count the number of characters in the string and return that
//number. Demonstrate the function in a simple program that asks the user to input a
//string, passes it to the function, and then displays the function’s return value.

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
int count(char *, char);
//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    const int SIZE = 52;
    char inString[SIZE];
    char letCount;   
    //Input String Here From User
    cout<<"Enter a string here that's upto 51 chars:";
    cin.getline(inString,SIZE);   
    //Input Char User wants to look for.
    cout<<"Enter Char You Wish to Look For:";
    cin>>letCount;   
    //Display
    cout<<letCount<<" shows up ";
    cout<<count(inString,letCount)<<" times";    
    return 0;
}

//Function
int count(char *strPtr, char ch){
    int c = 0;
    while(*strPtr != '\0'){
        if(*strPtr == ch)
            c++;
        strPtr++;
    }
    return c;
}
