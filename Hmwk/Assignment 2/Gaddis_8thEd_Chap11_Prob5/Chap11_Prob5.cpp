/* 
 * File: Weather Statistics V2
 * Author: Jose Morales
 * Purpose:
 * Created on September 25, 2016, 1:56 PM
 */

//System Libraries
#include <iostream>
#include <string>
using namespace std;

//User Libraries
#include "month.h"
enum Mon{Jan,Feb,Mar,Apr,May,June,July,Aug,Sept,Oct,Nov,Dec};
//Global Constants

//Function Prototypes
void dis(Mon);
//

//Execution Begins Here
int main(int argc, char** argv) {
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
    return 0;
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