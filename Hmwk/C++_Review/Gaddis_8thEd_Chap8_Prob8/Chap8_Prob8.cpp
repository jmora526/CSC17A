/* 
 * File: Search Benchmarks
 * Author: Jose Morales
 * Purpose: Temp for all the programs
 * Created on September 16, 2016, 10:25 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes
int Lbinary(int[],int,int); 
//Execution Begins Here
int main(int argc, char** argv) {
    int const Tickets = 10; //Number of lottery tickets user has.
int lottery[Tickets] = {13579,26791,26792,33445,55555,
                        62483,77777,79422,85647,93121};
int luckNum;//User input to check if lottery number is a winner.
int outcome;//Checks the result and sets for function.

//User number input
cout<<"Lottery Win Checker"<<endl;
cout<<"Enter winning lottery number to check if you're a winner."<<endl;
cin>>luckNum;

//Search Array
outcome = Lbinary(lottery,Tickets,luckNum);

//Return list num or -1
if(outcome == -1)
    cout<<"Sorry, Try again next time. You are not a winner today."<<endl;
else{
    cout<<"Congratz, You are a Winner! You won the Loto jackpot"<<endl;
}
    return 0;
}

int Lbinary(int list[],int numE,int value){
    int first = 0,
        last = numE - 1,
        middle,
        position = -1;
    bool found = false;
    
    while(!found && first <= last){
        middle = (first + last) / 2;
    for(int c = 0; c < numE; c++){    
        if(list[middle] == value){
            cout<<"Binary Comparasion:"<<c<<endl;
            found = true;
            position = middle;
        }
        else if(list[middle] > value)
            last = middle - 1;
        else
            first = middle + 1;
    }
    }    
    return position;
}

