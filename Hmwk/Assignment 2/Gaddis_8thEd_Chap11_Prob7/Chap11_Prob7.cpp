/* 
 * File: Customer Accounts
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
#include "custm.h"
//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    const int N = 10;
    int pik;
    account list[N];
    
    //Input menu
    do{
        cout<<"Enter 1 to input Data"<<endl;
        cout<<"Enter 2 for Displaying info"<<endl;
        cout<<"Enter 3 to End"<<endl;
        cin>>pik;
        if(pik == 1){
        
            for(int c = 0; c < N; c++){
                //Account Name
                cin.ignore();
                cout<<"Enter Name for Account "<<c+1<<":";
                getline(cin,list[c].name);
                //Address
                cin.ignore();
                cout<<"Enter Address for Account "<<c+1<<":";
                getline(cin,list[c].address);
                //City State Zip
                cin.ignore();
                cout<<"Enter City,State,Zip for Account "<<c+1<<":";
                getline(cin,list[c].csZip);
                //Tele
                cin.ignore();
                cout<<"Enter Telephone Account "<<c+1<<":";
                getline(cin,list[c].Tele);
                //Balance
                cin.ignore();
                cout<<"Enter Balance for Account "<<c+1<<":";
                cin>>list[c].accBal;
                //Date
                cin.ignore();
                cout<<"Enter Date of Last Payment for Account "<<c+1<<":";
                getline(cin,list[c].lastPay);
            }
            
        }
        else if(pik == 2){
        cout<<"|  Name  |  Address  |  City,State,Zip  |  Telephone  |  Account Balance  | Date |"<<endl;    
            for(int c = 0; c < N; c++){
            cout<<setw(10)<<list[c].name<<setw(20)<<list[c].address;
            cout<<setw(15)<<list[c].csZip<<setw(10)<<list[c].csZip;
            cout<<setw(10)<<list[c].Tele<<setw(10)<<list[c].accBal;
            cout<<setw(10)<<list[c].lastPay<<endl; 
            }
        }
    }while(pik == 2 || pik == 1);
    return 0;
}

