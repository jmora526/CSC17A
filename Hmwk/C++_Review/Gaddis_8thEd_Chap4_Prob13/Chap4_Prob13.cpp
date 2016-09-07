/* 
 * File:   Chap4_Prob13.cpp
 * Author: Joe
 *
 * Created on September 6, 2016, 9:19 PM
 */
//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
//Introduce the variables.
int binput;
    cout<<"Enter the number of books purchased"<<endl;
    cin>>binput;//User input for the number of books he/she has bought.
        switch(binput){
            //case number represent each book bought.
                case 0:cout<<"You have earned 0 points"<<endl;
                break;
                case 1:cout<<"You have earned 5 points"<<endl;
                break;
                case 2:cout<<"You have earned 15 points"<<endl;
                break;
                case 3:cout<<"You have earned 30 points"<<endl;
                break;
                case 4:cout<<"You have earned 60 points"<<endl;
                break;
        }
    return 0;
}

