/* 
 * File: 
 * Author: Jose Morales
 * Purpose:
 * Created on October 24, 2016, 12:30 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries
#include "landTrac.h"
//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int len;
    int wid;
    landTrac obj1; //object 1
    landTrac obj2; //object 2
    
    //Set values for first object
    cout<<"Enter the first length:";
    cin>>len;
    cout<<"Enter the second width:";
    cin>>wid;
    //set
    obj1.setLen(len);
    obj1.setWid(wid);
    //set values for second object
    cout<<"Enter the first length:";
    cin>>len;
    cout<<"Enter the second width:";
    cin>>wid;
    //set
    obj2.setLen(len);
    obj2.setWid(wid);
    //get areas
    cout<<"Area for first object/tract:"<<obj1.getArea()<<endl;
    cout<<"Area for second object/tract:"<<obj2.getArea()<<endl;
    //check if equal
    if(obj1.getArea() == obj2.getArea()){
        cout<<"Both objects/tracts are have an equal area."<<endl;
    }
    return 0;
}

