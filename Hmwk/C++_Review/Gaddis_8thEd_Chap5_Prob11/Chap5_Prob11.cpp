/* 
 * File: Population
 * Author: Jose Morales
 * Purpose: Temp for all the programs
 * Created on September 13, 2016, 11:19 AM
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes
void ttlPop(int,int,float);
//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    float popIncr;
    int srtPop,numDays;
    //Input Data
    cout<<"Population Prediction"<<endl;
    //Don't accept a number less than 2
    do{
        cout<<"Enter the starting number of organisms:"<<endl;
            cin>>srtPop;
            cout<<endl;
        if(srtPop < 2){
        cout<<"Number has to be more than 1."<<endl;    
        }    
    }while(srtPop < 2);         
    
    //Don't accept a negative number 
    do{
        cout<<"Enter the the average daily population increase as a percent:"<<endl;
            cin>>popIncr;
            cout<<endl;
        if(popIncr < 0){
        cout<<"Can't be a negative number."<<endl;
        }
    }while(popIncr < 0);  
    
    //Don't accept a number less than 1.
    do{
        cout<<"Enter the number of days they should multiply:"<<endl;
            cin>>numDays;
            cout<<endl;
        if(numDays <2){
        cout<<"Number has to be more than 1."<<endl;    
        }    
    }while(numDays < 2);
    //Process Data
    
    //Output Data
    ttlPop(srtPop,popIncr,numDays);
    return 0;
}
void ttlPop(int Pop,int Days,float Cent){
    for(int c = 0; c <= Days; c++){
    Pop+=((Cent / 100) * Pop);  
    cout<<"Day:"<<c<<" Space:"<<Pop<<endl;
    }
}
