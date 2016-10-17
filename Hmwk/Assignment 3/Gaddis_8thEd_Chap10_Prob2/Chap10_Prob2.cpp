/* 
 * File: Backward String
 * Author: Jose Morales
 * Purpose: Write function with input and writes backwards.
 * Created on Oct 16, 2016, 4:26 PM
 */

//Write a function that accepts a pointer to a C-string as an argument and displays its
//contents backward. For instance, if the string argument is “ Gravity ” the function
//should display “ ytivarG ”. Demonstrate the function in a program that asks the user
//to input a string and then passes it to the function.

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
void bckWard(char *, int);
//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    const int SIZE = 21;
    char str1[SIZE];
    //User input for backwards string
    cout<<"Enter string to shift backwards (no longer than 20 chars)";
    cin.getline(str1,SIZE);
    bckWard(str1,SIZE);
    return 0;
}
//Function
void bckWard(char *str1, int SIZE){
    for(int c = SIZE - 1; c >=0;--c){
        cout<<str1[c];
    }
}
