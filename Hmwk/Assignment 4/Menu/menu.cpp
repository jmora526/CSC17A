/* 
 * File: Menu Temp
 * Author: Jose Morales
 * Purpose:
 * Created on October 18, 2016, 5:56 PM
 */

///System Libraries
#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
using namespace std;

//User Libraries
#include "dateinfo.h"
#include "empinfo.h"
#include "car.h"
#include "personal.h"
#include "retail.h"
#include "numbers.h"
#include "landTrac.h"
#include "dayofyear.h"
#include "doYear.h"
#include "numDays.h"
//Global Constants

//Function Prototypes
void Menu();
int getN();
void def(int);
void problem1();
void problem2();
void problem3();
void problem4();
void problem5();
void problem6();
void problem7();
void problem8();
void problem9();
void problem10();

//Begin Execution Here!!!
int main(int argv,char *argc[]){
    int inN;
    do{
        Menu();
        inN=getN();
        switch(inN){
        case 1:    problem1();break;
        case 2:    problem2();break;
        case 3:    problem3();break;
        case 4:    problem4();break;
        case 5:    problem5();break;
        case 6:    problem6();break;
        case 7:    problem7();break;
        case 8:    problem8();break;
        case 9:    problem9();break;
        case 10:   problem10();break;
        default:   def(inN);}
    }while(inN>=1&&inN<=10);
    return 0;
}

void Menu(){
    cout<<"Menu for ch13 and ch14 "<<endl;
    cout<<"Type 1 for ch13.1"<<endl;
    cout<<"Type 2 for ch13.2"<<endl;
    cout<<"Type 3 for ch13.3"<<endl;
    cout<<"Type 4 for ch13.4"<<endl;
    cout<<"Type 5 for ch13.5"<<endl;
    cout<<"Type 6 for ch14.1"<<endl;
    cout<<"Type 7 for ch14.12"<<endl;
    cout<<"Type 8 for ch14.2"<<endl;
    cout<<"Type 9 for ch14.3"<<endl;
    cout<<"Type 10 for ch14.4"<<endl;
    cout<<"Type anything else to exit \n"<<endl;
}

int getN(){
        int inN;
        cin>>inN;
        cin.ignore();
        return inN;
}

void problem1(){
    cout<<"In problem # 1"<<endl<<endl;
    
    cout<<endl;
}

void problem2(){
    cout<<"In problem # 2"<<endl<<endl;
    
    cout<<endl;
}    

void problem3(){
    cout<<"In problem # 3"<<endl<<endl;

    cout<<endl;
}

void problem4(){
    cout<<"In problem # 4"<<endl<<endl;

    cout<<endl;
}

void problem5(){
    cout<<"In problem # 5"<<endl<<endl;

    cout<<endl;
}

void problem6(){
    cout<<"In problem # 6"<<endl<<endl;

    cout<<endl;
}

void problem7(){
    cout<<"In problem # 7"<<endl<<endl;

    cout<<endl;
}

void problem8(){
    cout<<"In problem # 8"<<endl<<endl;

    cout<<endl;
}

void problem9(){
    cout<<"In problem # 9"<<endl<<endl;

    cout<<endl;
}

void problem10(){
    cout<<"In problem # 10"<<endl<<endl;

    cout<<endl;
}

void def(int inN){
        cout<<"You typed "<<inN<<" to exit the program"<<endl;
}