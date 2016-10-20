/* 
 * File: Average Number of Letters
 * Author: Jose Morales
 * Purpose: Count words from string and average them.
 * Created on Oct 16, 2016, 6:56 PM
 */

//Modify the program you wrote for Problem 3 (Word Counter), so it also displays the
//average number of letters in each word.

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
int spaCount(char *);
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
    cout<<"This String has "<<spaCount(wCount)<<" words."<<endl;
    cout<<endl;
    return 0;
}
//Function
int spaCount(char *list){
    float c = 1;
    float ch = 0;
    while(*list != '\0'){
        if(*list == ' ')
            c++;
            list++;
            ch++;
    }
    float average;
    average = ch/c;
    cout<<"The average number of letters in the string is ";
    cout<<average<<endl;
    return c;
}