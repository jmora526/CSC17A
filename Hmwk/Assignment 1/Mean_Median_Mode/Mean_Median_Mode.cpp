/* 
 * File: Mean,Median,Mode
 * Author: Jose Morales
 * Purpose: Make a mean,median,and mode
 * Created on September 26, 2016, 1:56 PM
 */

//System Libraries
#include <iostream>
#include <cstdlib>
using namespace std;

//Global Constants

//Function Prototypes
void mkkSort(int*,int);
float mean(int*,int);
float med(int*,int);
//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    const int NUM = 15;
    int *list = nullptr;
    list = new int[NUM];
    
    cout<<"Random Array Here"<<endl;
    for(int c = 0; c <NUM; c++){
        *(list+c)=rand()%50;
        cout<<list[c]<<" ";
    }
    cout<<endl;
    //Sort
    mkkSort(list,NUM);
    //Get Mean
    mean(list,NUM);
    //Get Med
    med(list,NUM);
    return 0;
}
void mkkSort(int *list,int NUM){
    for(int i=0;i<NUM-1;i++){
        for(int j=i+1;j<NUM;j++){
            if(*(list+i) > *(list+j)){
                *(list+i) = *(list+i)^*(list+j);
                *(list+j) = *(list+i)^*(list+j);
                *(list+i) = *(list+i)^*(list+j);
            }
        }
    }
    cout<<endl;
    cout<<"Sorted Array"<<endl;
     for(int c = 0; c < NUM; c++){
        cout<<*(list+c)<<" ";    
    }
    cout<<endl;
}

float mean(int *list, int NUM){
    int m = 0;
    for(int c = 0; c < NUM; c++){
        m+=*(list+c);
    }
    cout<<endl;
    cout<<"Mean:";
    cout<<m/NUM<<endl;
}
float med(int *list, int NUM){
    float median = 0;
    if(NUM%2 == 0){
        NUM/=2;
        median=*(list+NUM-1)+*(list+NUM);
        median/=2;
    }
    else{
        NUM/=2;
        median=*(list+NUM);
    }
    cout<<"Median:";
    cout<<median<<endl;
}
