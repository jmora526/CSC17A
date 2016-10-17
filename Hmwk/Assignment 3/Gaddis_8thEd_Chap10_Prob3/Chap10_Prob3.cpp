/* 
 * File: Word Counter
 * Author: Jose Morales
 * Purpose: Count words from string
 * Created on Oct 16, 2016, 4:56 PM
 */

//Write a function that accepts a pointer to a C-string as an argument and returns the
//number of words contained in the string. For instance, if the string argument is “Four
//score and seven years ago” the function should return the number 6. Demonstrate the
//function in a program that asks the user to input a string and then passes it to the function.
//The number of words in the string should be displayed on the screen.

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
int spCount(char[]);
//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    const int SIZE = 51;
    char wCount[SIZE];
    
    //Input user string
    cout<<"Enter a string with no more than 50 chars:";
    cin.getline(wCount,SIZE);
    //Introduce the function
   
    //Display
    cout<<"This String has "<<spCount(wCount)<<" words."<<endl;
    return 0;
}
//Function
int spCount(char list[]){
    int c = 0;
    while(list[c] != ' ' && list[c] != '\0'){
        c++;
        if(list[c] == ' '){
            list[c] = '\0';
        }
    }
    return c;
}