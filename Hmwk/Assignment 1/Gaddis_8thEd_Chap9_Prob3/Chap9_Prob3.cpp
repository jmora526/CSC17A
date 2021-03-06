/* 
 * File: Drop Lowest Score
 * Author: Jose Morales
 * Purpose: Mod to drop a score.
 * Created on September 25, 2016, 7:59 PM
 */

//System Libraries
#include <iostream>
using namespace std;
//Global Constants

//Function Prototypes
void argg(int*,int);
void mkSortt(int*,int);
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
    mkSortt(ar,numTest);  
    //Average the numbers
    cout<<endl;
    cout<<"Average:";
    argg(ar,numTest); 
    //Delete
    delete [] ar;
    return 0;
}
void argg(int *ar,int numTest){
    float avg = 0;
    for(int c = 0; c < numTest; c++){
        avg += *(ar+c);
    }
    avg/=numTest-1;
    cout<<avg;
}
void mkSortt(int *ar,int numTest){
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
    for(int c = 0; c < numTest-1; c++){
        cout<<*(ar+c)<<" ";
    }
}