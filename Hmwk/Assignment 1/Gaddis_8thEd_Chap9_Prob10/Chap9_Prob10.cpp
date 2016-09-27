/* 
 * File: Reverse Array
 * Author: Jose Morales
 * Purpose: Reverse array and make a copy.
 * Created on September 25, 2016, 10:11 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    const int SIZE = 12;
    int set[SIZE] = {1,3,5,9,11,13,15,17,19,21,23,25};
    int *num = set;
    
    //Display the numbers before reversing the order.
    cout<<"Number before the reversal:"<<endl;
    cout<<*num<<" ";
    while(num < &set[11]){
        num++;
        cout<<*num<<" ";
    }
    cout<<endl;
    
    //Display the number after the reversal from the order.
    cout<<"Number after the reversal:"<<endl;
    while(num > set){
        num--;
        cout<<*num<<" ";
    }

    return 0;
}

