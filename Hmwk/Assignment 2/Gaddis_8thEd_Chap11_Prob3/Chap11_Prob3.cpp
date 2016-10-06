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
enum diviv {First,Second,Third,Fourth};
//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    const int NUM = 4;
    int div[NUM];
    float total = 0.0;
    diviv comp;
    
    for(comp = First; comp <= Fourth; comp = static_cast<diviv>(comp + 1)){
    cout<<"Enter the number of sales for "; 
    display(diviv);
    cout<<":";
    cin>>div[diviv];
    }
    return 0;
}

void display(diviv d){
    switch(d){
        case First  :cout<<"First";
                     break;
        case Second :cout<<"Second";
                     break;
        case Third  :cout<<"Third";
                     break;
        case Fourth :cout<<"Fourth";
                     break;
    }
}
