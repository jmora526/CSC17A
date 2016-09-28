/* 
 * File: Median
 * Author: Jose Morales
 * Purpose: find the median
 * Created on September 25, 2016, 1:56 PM
 */

//System Libraries
#include <iostream>
using namespace std;
//Global Constants

//Function Prototypes
void mkSort(int*,int);
void med(int*,int);
//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int inputs, *ar, *point;  
    //Introduce the input for the user.
    cout<<"Enter the number of inputs:";
    cin>>inputs;  
    //Introduce the pointer
    ar = new int [inputs];   
    //Add the number into the array the user inputed.
    for(int c = 0; c < inputs; c++){
        cout<<"Input "<<c+1<<":";
        cin>>*(ar+c);
    }
    point = ar;   
    //Display the allocated array to the user.
    cout<<"Inputs in original order"<<endl;
    for(int c = 0; c < inputs; c++){
        cout<<*(point+c)<<" ";
    }
    //Sorted
    cout<<endl;
    cout<<"Inputs sorted"<<endl;
    mkSort(ar,inputs);   
    //Mid
    med(ar,inputs);
    //Delete
    delete [] ar;
    return 0;
}
void med(int *ar, int inputs){
    int mid=inputs/2, b=inputs%2;
    mid+=b;
    cout<<endl;
    cout<<"Median:"<<ar[b]<<endl;
}
void mkSort(int *ar,int inputs){
    for(int i=0;i<inputs-1;i++){
        for(int j=i+1;j<inputs;j++){
            if(*(ar+i) > *(ar+j)){
                *(ar+i) = *(ar+i)^*(ar+j);
                *(ar+j) = *(ar+i)^*(ar+j);
                *(ar+i) = *(ar+i)^*(ar+j);
            }
        }
    }
    //Display
    for(int c = 0; c < inputs; c++){
        cout<<*(ar+c)<<" ";
    }
}

