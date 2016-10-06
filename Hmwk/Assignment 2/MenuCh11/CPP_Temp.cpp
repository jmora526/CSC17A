/* 
 * File: Menu for Chapter 11
 * Author: Jose Morales
 * Purpose:
 * Created on September 25, 2016, 1:56 PM
 */

///System Libraries
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//User Libraries
#include "movieData.h"
#include "datav2.h"
#include "corSale.h"
#include "month.h"
enum Mon{Jan,Feb,Mar,Apr,May,June,July,Aug,Sept,Oct,Nov,Dec};
#include "sInfo.h"
#include "custm.h"
#include "spkr.h"
//Global Constants

//Function Prototypes
void menu();
void prob1();
void display(movieData);
void prob2();
void displayV2(newData);
void prob3();
void prob4();
void prob5();
void dis(Mon);
void prob6();
void prob7();
void prob8();
void prob9();
//Execution Begins Here
int main(int argc, char** argv) {
    //Declare the loop variable
    char choice;
    //General Menu Format
    do{
        //Display the selection
        menu();
        //Read the choice
        cin>>choice;
        //Solve a problem that has been chosen.
        switch(choice){
                case 49 :prob1();break;
                case 50 :prob2();break;
                case 51 :prob3();break;
                case 52 :prob4();break;
                case 53 :prob5();break;
                case 54 :prob6();break;
                case 55 :prob7();break;
                case 56 :prob8();break;
                case 57 :prob9();break;
                
                default:{
                        cout<<"Exit?"<<endl;
                }
        };
    }while(choice<='9');
    
    //Exit stage right
    return 0;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/**************************** Menu *********************************************
 *Inputs
 *      None
 *Outputs
 *      None
*/
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
void menu(){
    cout<<"Type 1 to solve Ch11.1"<<endl;
    cout<<"Type 2 to solve Ch11.2"<<endl;
    cout<<"Type 3 to solve Ch11.3"<<endl;
    cout<<"Type 4 to solve Ch11.4"<<endl;
    cout<<"Type 5 to solve Ch11.5"<<endl;
    cout<<"Type 6 to solve Ch11.6"<<endl;
    cout<<"Type 7 to solve Ch11.7"<<endl;
    cout<<"Type 8 to solve Ch11.9"<<endl;
    cout<<"Type 9 to solve "<<endl; 
    cout<<"Type a letter to quit with no solutions."<<endl;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/**************************** Problem 1 ****************************************
 *Inputs
 *      None
 *Outputs
 *      None
*/
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
void prob1(){
    //Declare Variables
    movieData movie;        //Introduce the structure
    
    //Introduce the user info here.
    cout<<"Enter the name of the Movie:";
    getline(cin,movie.Title);  
    cin.ignore();
    
    cout<<"Enter the Name of The Director:";
    getline(cin,movie.Director);
    cin.ignore();
    
    cout<<"Enter the Year the Movie was Produced:";
    cin>>movie.yearMov;
    
    cout<<"Enter the Run Time of The Movie Here:";
    cin>>movie.runTime;
    
    cout<<endl;
    display(movie);   
}
void display(movieData z){
    cout<<"Title:"<<z.Title<<endl;
    
    cout<<"Director:"<<z.Director<<endl;;
            
    cout<<"Year Released:"<<z.yearMov<<endl;
    
    cout<<"Running Time:"<<z.runTime<<endl;
            
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/****************************** Problem 2 **************************************
 *Inputs
 *      None
 *Outputs
 *      None
*/
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
void prob2(){
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
}
void displayV2(newData x){
    cout<<"Title:"<<x.Title<<endl;
    
    cout<<"Director:"<<x.Director<<endl;;
            
    cout<<"Year Released:"<<x.yearMov<<endl;
    
    cout<<"Running Time:"<<x.runTime<<endl;  
    
    cout<<"Profit/Loss:$"<<x.revenues-x.proCost<<endl;
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/******************************* Problem 3 *************************************
 *Inputs
 *      None
 *Outputs
 *      None
*/
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
void prob3(){
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
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/******************************* Problem 4 *************************************
 *Inputs
 *      None
 *Outputs
 *      None
*/
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
void prob4(){
const int M = 12;
    monthIN month[M];
    float ttl = 0.0;
    float ttlAvg = 0.0;
    float h = 0.0, high = 0.0;
    float l = 0.0, low = 0.0;
    //Introduce the input
    cout<<"Enter the rainfall,high & low temperature for 12 month";
    cout<<endl;
    
    for(int c = 0; c < M; c++){
    //Rainfall    
    cout<<"Enter rainfall for month #"<<c+1<<":";
    cin>>month[c].rainfall;   
    //High Temperature
    do{
    cout<<"Enter High Temperature for month #"<<c+1<<":";
    cin>>month[c].TempHi;
    }while(month[c].TempHi<=(-100) || month[c].TempHi>=140);
    //Low Temperature
    do{
    cout<<"Enter Low Temperature for month #"<<c+1<<":";
    cin>>month[c].TempLow;
    }while(month[c].TempLow<=(-100) || month[c].TempLow>=140);
    } 
    //Find the total rainfall for all months and average.
    for(int c = 0; c < M; c++){
        ttl+=month[c].rainfall;
        ttlAvg=ttl/M;
    }
    //Find High & Low
    h = month[0].TempHi;
    l = month[0].TempLow;
    for(int c = 0; c < M; c++){
        if(l > month[c].TempLow){
        l = month[c].TempLow;
        low=c;
        }
        if(h < month[c].TempHi){
        h = month[c].TempHi;
        high=c;    
        }      
    } 
    //Display Output for User.
    cout<<endl;
    cout<<"Average Monthly Rainfall:"<<ttlAvg<<endl;
    cout<<"Total Yearly Rainfall:"<<ttl<<endl;
    cout<<"High Temperature:"<<h<<"F"<<endl;
    cout<<"High Month:"<<high<<endl;
    cout<<"Low Temperature:"<<l<<"F"<<endl;
    cout<<"Low Month:"<<low<<endl;  
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/******************************* Problem 5 *************************************
 *Inputs
 *      None
 *Outputs
 *      None
*/
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
void prob5(){
//Declare Variables
const int M = 12;
    monthIN month[M];
    float ttl = 0.0;
    float ttlAvg = 0.0;
    float h = 0.0, high = 0.0;
    float l = 0.0, low = 0.0;
    Mon Out;
    //Introduce the input
    cout<<"Enter the rainfall,high & low temperature for 12 month";
    cout<<endl;
    
    for(Out = Jan; Out <= Dec; Out = static_cast<Mon>(Out+1)){
    //Rainfall    
    cout<<"Enter rainfall for ";
    dis(Out);
    cout<<":";
    cin>>month[Out].rainfall;   
    //High Temperature
    do{
    cout<<"Enter High Temperature for ";
    dis(Out);
    cout<<":";
    cin>>month[Out].TempHi;
    }while(month[Out].TempHi<=(-100) || month[Out].TempHi>=140);
    //Low Temperature
    do{
    cout<<"Enter Low Temperature for ";
    dis(Out);
    cout<<":";
    cin>>month[Out].TempLow;
    }while(month[Out].TempLow<=(-100) || month[Out].TempLow>=140);
    } 
    //Find the total rainfall for all months and average.
    for(int c = Jan; c < Dec; c++){
        ttl+=month[c].rainfall;
        ttlAvg=ttl/M;
    }
    //Find High & Low
    h = month[Jan].TempHi;
    l = month[Jan].TempLow;
    for(int c = Jan; c < Dec; c++){
        if(l > month[c].TempLow){
        l = month[c].TempLow;
        low=c;
        }
        if(h < month[c].TempHi){
        h = month[c].TempHi;
        high=c;    
        }      
    } 
    //Display Output for User.
    cout<<endl;
    cout<<"Average Monthly Rainfall:"<<ttlAvg<<endl;
    cout<<"Total Yearly Rainfall:"<<ttl<<endl;
    cout<<"High Temperature:"<<h<<"F"<<endl;
    cout<<"High Month:"<<high<<endl;
    cout<<"Low Temperature:"<<l<<"F"<<endl;
    cout<<"Low Month:"<<low<<endl; 
}
void dis(Mon d){
    switch(d){
        case Jan    :cout<<"January";
        break;
        case Feb    :cout<<"February";
        break;
        case Mar    :cout<<"March";
        break;
        case Apr    :cout<<"April";
        break;
        case May    :cout<<"May";
        break;
        case June   :cout<<"June";
        break;
        case July   :cout<<"July";
        break;
        case Aug    :cout<<"August";
        break;
        case Sept   :cout<<"September";
        break;
        case Oct    :cout<<"October";
        break;
        case Nov    :cout<<"November";
        break;
        case Dec    :cout<<"December";
        break;
                    
                                        
    }
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/******************************* Problem 6 *************************************
 *Inputs
 *      None
 *Outputs
 *      None
*/
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
void prob6(){
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
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/******************************* Problem 7 *************************************
 *Inputs
 *      None
 *Outputs
 *      None
*/
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
void prob7(){
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
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/******************************* Problem 8 *************************************
 *Inputs
 *      None
 *Outputs
 *      None
*/
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
void prob8(){
 //Declare Variables
const int A = 10;
    speaker list[A];
    //Introduce the loop for structures.
    for(int c = 0; c < A; c++){
    //Input Speaker Name
        cin.ignore();
        cout<<"Enter Name for Speaker "<<c+1<<":";
        getline(cin,list[c].name);
    //Input Tele Number 
        cout<<"Enter Tele Number for Speaker "<<c+1<<":";
        cin>>list[c].telNum;
    //Input Speaking Topic Here.
        cin.ignore();
        cout<<"Enter Speaking Topic for Speaker "<<c+1<<":";
        getline(cin,list[c].topic);
    //Input Fee Here.
        cout<<"Enter Fee for Speaker "<<c+1<<":";
        cin>>list[c].fee;
    }
    //Display
    cout<<"|  Speaker Name  |  Telephone Number  |  Topic  |  Fee  |"<<endl;
    for(int c = 0; c < A; c++){
    cout<<setw(10)<<list[c].name<<setw(20)<<list[c].telNum<<setw(15)<<list[c].topic<<setw(10)<<list[c].fee<<endl; 
    }
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/******************************* Problem 9 *************************************
 *Inputs
 *      None
 *Outputs
 *      None
*/
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
void prob9(){
//Declare Variables

}
