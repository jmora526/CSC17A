/* 
 * File: Test Scores # 1
 * Author: Jose Morales
 * Purpose:
 * Created on September 25, 2016, 7:56 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int NUM;
    int *list;
    
    //Input
    cout<<"Enter number of tests:";
    cin>>NUM;
    
    //Introduce array
    list = new int[NUM];
    
    //Introduce Loop to input number of test scores.
    for(int c = 0; c < NUM; c++){
        cout<<"Enter test score:";
        cin>>list[NUM];
    }
    
    //Introduce Loop to output number of test scores.
    for(int c = 0; c < NUM; c++)
        cout<<list[c]<<", "<<endl;
        delete[] list;
    
    return 0;
}

