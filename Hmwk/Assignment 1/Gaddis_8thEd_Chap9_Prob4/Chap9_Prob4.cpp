/* 
 * File: Test Scores # 2
 * Author: Jose Morales
 * Purpose: Mod to add names.
 * Created on September 25, 2016, 8:15 PM
 */

//System Libraries
#include <iostream>
#include <string>
using namespace std;
//Global Constants

//Function Prototypes
void arg(int*,int);
void mkSort(int*,int);
//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int numTest, *ar, *point;  
    //Introduce the input for the user.
    cout<<"Enter the number of tests:";
    cin>>numTest; 
    //Introduce the pointer
    ar = new int [numTest];
    //Add the number into the array the user inputed.
    for(int c = 0; c < numTest; c++){
        cout<<"Test "<<c+1<<":";
        cin>>*(ar+c);
    }
    point = ar;   
    //Display the allocated array to the user.
    cout<<"Test scores in original order"<<endl;
    for(int c = 0; c < numTest; c++){
        cout<<*(point+c)<<" ";
    }
    //Sorted
    cout<<endl;
    cout<<"Test Scores sorted"<<endl;
    mkSort(ar,numTest);  
    //Average the numbers
    cout<<endl;
    cout<<"Average:";
    arg(ar,numTest); 
    //Delete
    delete [] ar;
    return 0;
}
void arg(int *ar,int numTest){
    float avg = 0;
    for(int c = 0; c < numTest; c++){
        avg += *(ar+c);
    }
    avg/=numTest;
    cout<<avg;
}
void mkSort(int *ar,int numTest){
    for(int i=0;i<numTest-1;i++){
        for(int j=i+1;j<numTest;j++){
            if(*(ar+i) > *(ar+j)){
                *(ar+i) = *(ar+i)^*(ar+j);
                *(ar+j) = *(ar+i)^*(ar+j);
                *(ar+i) = *(ar+i)^*(ar+j);
            }
        }
    }
    //Display
    for(int c = 0; c < numTest; c++){
        cout<<*(ar+c)<<" ";
    }
}