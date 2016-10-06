/* 
 * File: Corporate Sales Date
 * Author: Jose Morales
 * Purpose: Use structure to store company info.
 * Created on October 2, 2016, 1:56 PM
 */

//System Libraries
#include <iostream>
#include <string>
using namespace std;

//User LibrariesS
#include "corSale.h"

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    const int div = 4;
    float dv1 = 0.0,dv2 = 0.0,dv3 =0.0,dv4 = 0.0;
    float dv1Avg = 0.0,dv2Avg = 0.0,dv3Avg =0.0,dv4Avg = 0.0;
    divSale list[div];
    //Input loop
    for(int c = 0; c < div; c++){
    //Input First-Q Sales   
    do{
        cout<<"Enter First-Quarter Sales for Division "<<c+1<<":";
        cin>>list[c].firstQ;
    }while(list[c].firstQ < 0);
    //Input Second-Q Sales
    do{
        cout<<"Enter Second-Quarter Sales for Division "<<c+1<<":";
        cin>>list[c].secQ;
    }while(list[c].secQ < 0);
    //Input Third-Q Sales
    do{
        cout<<"Enter Third-Quarter Sales for Division "<<c+1<<":";
        cin>>list[c].thridQ;
    }while(list[c].thridQ < 0);
    //Input Forth-Q Sales
    do{
        cout<<"Enter Fourth-Quarter Sales for Division "<<c+1<<":";
        cin>>list[c].fourthQ;
    }while(list[c].fourthQ < 0);
    //Add up total division sales.
    dv1+=list[c].firstQ;
    dv1Avg=dv1/div;
    dv2+=list[c].secQ;
    dv2Avg=dv2/div;
    dv3+=list[c].thridQ;
    dv3Avg=dv3/div;
    dv4+=list[c].fourthQ;
    dv4Avg=dv4/div;
    }
    //Display output for user.
    cout<<endl;
    cout<<"Division 1 Sales:"<<dv1<<endl;
    cout<<"Division 1 Average:"<<dv1Avg<<endl;
    cout<<"Division 2 Sales:"<<dv2<<endl;
    cout<<"Division 2 Average:"<<dv2Avg<<endl;
    cout<<"Division 3 Sales:"<<dv3<<endl;
    cout<<"Division 3 Average:"<<dv3Avg<<endl;
    cout<<"Division 4 Sales:"<<dv4<<endl;
    cout<<"Division 4 Average:"<<dv4Avg<<endl;
        return 0;
}
