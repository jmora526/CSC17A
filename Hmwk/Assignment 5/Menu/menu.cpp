/* 
 * File: Menu Temp
 * Author: Jose Morales
 * Purpose:
 * Created on October 18, 2016, 5:56 PM
 */

///System Libraries
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

//User Libraries
#include "ProductionWorker.h"
#include "ShiftSupervisor.h"
#include "MilTime.h"
#include "Time.h"
#include "Date.h"
#include "Absolute.h"
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
    cout<<"Menu for "<<endl;
    cout<<"Type 1 for problem 1"<<endl;
    cout<<"Type 2 for problem 2"<<endl;
    cout<<"Type 3 for problem 3"<<endl;
    cout<<"Type 4 for problem 4"<<endl;
    cout<<"Type 5 for problem 5"<<endl;
    cout<<"Type 6 for problem 6"<<endl;
    cout<<"Type 7 for problem 7"<<endl;
    cout<<"Type 8 for problem 8"<<endl;
    cout<<"Type 9 for problem 9"<<endl;
    cout<<"Type 10 for problem 10"<<endl;
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
    //Declare Variables
    string name;
    int number;
    int dHired;
    int shift;
    float rate;
    ProductionWorker Info;
    
//Introduce Name Input
    cout<<"Enter the Employee's name here:";
    getline(cin,name);
    cout<<endl;
//Set Name
    Info.setName(name);
//Introduce Employee Number 
    cout<<"Enter the Employee number for "<<Info.getName()<<endl;
    cin>>number;
    cout<<endl;
//Set Number
    Info.setNumber(number);
//Introduce Date
    cout<<"Enter the date the Employee "<<Info.getName()<<" was hired (03031999):";
    cin>>dHired;
    cout<<endl;
//Set Date
    Info.setHired(dHired);
//Introduce Shift
    cout<<"Enter shift for "<<Info.getName()<<"(1 or 2):";
    cin>>shift;
    cout<<endl;
//Set Shift
    Info.setShift(shift);
//INtroduce Payrate   
    cout<<"Enter payrate for "<<Info.getName()<<" :";
    cin>>rate;
    cout<<endl;
//Set Payrate
    Info.setRate(rate);
    
//Output
    cout<<"Production Employee Info"<<endl;
    cout<<"Name:"<<Info.getName()<<endl;
    cout<<"Employee I.D:"<<Info.getNumber()<<endl;
    cout<<"Date Hired:"<<Info.getHired()<<endl;
    cout<<"Shift:"<<Info.getShift()<<endl;
    cout<<"Payrate:"<<Info.getRate()<<endl;
    cout<<endl;
}

void problem2(){
    cout<<"In problem # 2"<<endl<<endl;
    //Declare Variables
    string name;
    int number;
    int dHired;
    int shift;
    float rate;
    float sal;
    float bonus;
    ShiftSupervisor Info;
    
//Introduce Name Input
    cout<<"Enter the Employee's name here:";
    getline(cin,name);
    cout<<endl;
//Set Name
    Info.setName(name);
//Introduce Employee Number 
    cout<<"Enter the Employee number for "<<Info.getName()<<endl;
    cin>>number;
    cout<<endl;
//Set Number
    Info.setNumber(number);
//Introduce Date
    cout<<"Enter the date the Employee "<<Info.getName()<<" was hired (03031999):";
    cin>>dHired;
    cout<<endl;
//Set Date
    Info.setHired(dHired);
//Introduce the Sal
    cout<<"Enter annual salary:";
    cin>>sal;
    Info.setSal(sal);    
//Introducre Bonus
    cout<<"Enter Annual Bonus:";
    cin>>bonus;
    Info.setBonus(bonus);    
//Output
    cout<<"Production Employee Info"<<endl;
    cout<<"Name:"<<Info.getName()<<endl;
    cout<<"Employee I.D:"<<Info.getNumber()<<endl;
    cout<<"Date Hired:"<<Info.getHired()<<endl;
    cout<<"Annual Salary:"<<Info.getSal()<<endl;
    cout<<"Annual Bonus:"<<Info.getBonus()<<endl;
    cout<<"Total:"<<Info.getBonus()+Info.getSal()<<endl;
    cout<<endl;
}    

void problem3(){
    cout<<"In problem # 3"<<endl<<endl;
    //Declare Variables
    int hr;
    int sec;
    
    cout<<"Enter the Hours Here:";
    cin>>hr;
    cout<<endl;
    
    cout<<"Enter the Seconds Here:";
    cin>>sec;
    cout<<endl;
        
    MilTime time;
    time.setTime(hr,sec);
    
    cout<<"Min:"<<time.getMin()<<endl;
    cout<<"Sec:"<<time.getSec()<<endl;
    cout<<endl;
}

void problem4(){
    cout<<"In problem # 4"<<endl<<endl;
    //Declare Variables
    int day;
    int month; 
    int year;
    
    Date Info;
    
    cout<<"Enter the Day Here:";
    cin>>day;
    cout<<endl;
    
    cout<<"Enter the Month Here:";
    cin>>month;
    cout<<endl;
    
    cout<<"Enter the Year Here:";
    cin>>year;
    cout<<endl;
    
    try{
        Info.setDay(day);
        Info.setMonth(month);
        Info.setYear(year);
        Info.show1();
        Info.show2();
        Info.show3();
    }
    
    catch(Date::errDay){
    cout<<"Date could not be input!"<<endl;    
    }
    
    catch(Date::errMon){
    cout<<"Month could not be input!"<<endl;    
    }
    cout<<endl;
}

void problem5(){
    cout<<"In problem # 5"<<endl<<endl;
    //Declare Variables
    float num;
    Absolute<float> dif;
    
    cout<<"Change a number to Absolute Value:";
    cin>>num;
    
    dif.setVal(num);
    cout<<dif.ChangeVal();
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