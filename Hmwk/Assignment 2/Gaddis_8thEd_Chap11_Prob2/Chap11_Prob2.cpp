/* 
 * File: Movie Profit
 * Author: Jose Morales
 * Purpose: Modify previous program to include movie production cost&profit. 
 * Created on September 25, 2016, 1:56 PM
 */

//System Libraries
#include <iostream>
#include <string>
using namespace std;

//User Libraries
#include "datav2.h"
//Global Constants

//Function Prototypes
void displayV2(newData);
//Execution Begins Here
int main(int argc, char** argv) {
//Declare Variables 
    newData update;        //Introduce the structure
    
    //Introduce the user info here.
    cout<<"Enter the name of the Movie:";
    getline(cin,update.Title);  
    cin.ignore();
    
    cout<<"Enter the Name of The Director:";
    getline(cin,update.Director);
    cin.ignore();
    
    cout<<"Enter the Year the Movie was Produced:";
    cin>>update.yearMov;
    
    cout<<"Enter the Run Time of The Movie Here:";
    cin>>update.runTime;
    
    cout<<"Enter the revenues of Movie:";
    cin>>update.revenues;
    
    cout<<"Enter the Production Cost of Movie:";
    cin>>update.proCost;
       
    cout<<endl;
    displayV2(update);
    //Exit
    return 0;
}

//Function Here.
void displayV2(newData x){
    cout<<"Title:"<<x.Title<<endl;
    
    cout<<"Director:"<<x.Director<<endl;;
            
    cout<<"Year Released:"<<x.yearMov<<endl;
    
    cout<<"Running Time:"<<x.runTime<<endl;  
    
    cout<<"Profit/Loss:$"<<x.revenues-x.proCost<<endl;
}
    
