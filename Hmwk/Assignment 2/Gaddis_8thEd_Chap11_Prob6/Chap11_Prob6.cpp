/* 
 * File: Soccer Score
 * Author: Jose Morales
 * Purpose:
 * Created on September 25, 2016, 1:56 PM
 */

//System Libraries
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//User Libraries
#include "sInfo.h"
//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    const int P = 12;
    sInfo playInf[P];
    int total = 0.0;
    int top = 0.0;
    //Introduce the loop & inout
    for(int c = 0; c < P; c++){
    //Input Player Names    
        cout<<"Enter Name for player ";
        cout<<c+1<<":";
        cin.ignore();
        getline(cin,playInf[c].name);
        
    //Input Player Number
        do{
        cout<<"Enter Number for Player ";
        cout<<c+1<<":";
        cin>>playInf[c].pNum;
        }while(playInf[c].pNum <= 0);
    //Input Score for players.
        do{
        cout<<"Enter Score for player ";
        cout<<c+1<<":";
        cin>>playInf[c].Points;
        }while(playInf[c].Points);
    }
    //Display
    cout<<"|  Player Name  |  Player Number  |  Player Score  |"<<endl;
    for(int c = 0; c < P; c++){
    cout<<setw(10)<<playInf[c].name<<setw(15)<<playInf[c].pNum<<setw(15)<<playInf[c].Points<<endl;    
    //Add team total
    total+=playInf[c].Points;
    }
    cout<<endl;
    cout<<"Total Team Points:"<<total<<endl;
    
    return 0;
}

