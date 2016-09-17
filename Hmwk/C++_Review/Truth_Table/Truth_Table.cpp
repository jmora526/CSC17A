/* 
 * File: Truth Table
 * Author: Jose Morales
 * Purpose: Code the Truth Table
 * Created on September 16, 2016, 8:53 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    bool x=true;
    bool y=true;
    cout<<"X  Y  !X  !Y  X&&Y  X||Y  X^Y  X^Y^Y  X^Y^X  !(X&&Y)  !x||!Y  !(X||Y)  !X&&!Y"<<endl;
    //Process Data
    cout<<(x? 'T' : 'F')<<"  ";
    cout<<(y? 'T' : 'F')<<"   ";    
    cout<<(!x? 'T' : 'F')<<"   ";
    cout<<(!y? 'T' : 'F')<<"   ";    
    cout<<(x&&y? 'T' : 'F')<<"     ";
    cout<<(x||y? 'T' : 'F')<<"     ";    
    cout<<(x^y? 'T' : 'F')<<"     ";
    cout<<((x^y)^y? 'T' : 'F')<<"      ";   
    cout<<((x^y)^x? 'T' : 'F')<<"       ";
    cout<<(!(x&&y)? 'T' : 'F')<<"       ";  
    cout<<(!x||!y? 'T' : 'F')<<"        ";
    cout<<(!(x||y)? 'T' : 'F')<<"       ";
    cout<<((!x&&!y)? 'T' : 'F')<<" "
    <<endl;
    
    //Process Data
     x=true;
     y=false; 
    
    cout<<(x? 'T' : 'F')<<"  ";
    cout<<(y? 'T' : 'F')<<"   ";    
    cout<<(!x? 'T' : 'F')<<"   ";
    cout<<(!y? 'T' : 'F')<<"   ";    
    cout<<(x&&y? 'T' : 'F')<<"     ";
    cout<<(x||y? 'T' : 'F')<<"     ";    
    cout<<(x^y? 'T' : 'F')<<"     ";
    cout<<((x^y)^y? 'T' : 'F')<<"      ";   
    cout<<((x^y)^x? 'T' : 'F')<<"       ";
    cout<<(!(x&&y)? 'T' : 'F')<<"       ";  
    cout<<(!x||!y? 'T' : 'F')<<"        ";
    cout<<(!(x||y)? 'T' : 'F')<<"       ";
    cout<<((!x&&!y)? 'T' : 'F')<<" "
    <<endl;
    //Process Data
     x=false;
     y=true; 
    
    cout<<(x? 'T' : 'F')<<"  ";
    cout<<(y? 'T' : 'F')<<"   ";    
    cout<<(!x? 'T' : 'F')<<"   ";
    cout<<(!y? 'T' : 'F')<<"   ";    
    cout<<(x&&y? 'T' : 'F')<<"     ";
    cout<<(x||y? 'T' : 'F')<<"     ";    
    cout<<(x^y? 'T' : 'F')<<"     ";
    cout<<((x^y)^y? 'T' : 'F')<<"      ";   
    cout<<((x^y)^x? 'T' : 'F')<<"       ";
    cout<<(!(x&&y)? 'T' : 'F')<<"       ";  
    cout<<(!x||!y? 'T' : 'F')<<"        ";
    cout<<(!(x||y)? 'T' : 'F')<<"       ";
    cout<<((!x&&!y)? 'T' : 'F')<<" "
    <<endl;
    //Process Data
     x=false;
     y=false; 
    
    cout<<(x? 'T' : 'F')<<"  ";
    cout<<(y? 'T' : 'F')<<"   ";    
    cout<<(!x? 'T' : 'F')<<"   ";
    cout<<(!y? 'T' : 'F')<<"   ";    
    cout<<(x&&y? 'T' : 'F')<<"     ";
    cout<<(x||y? 'T' : 'F')<<"     ";    
    cout<<(x^y? 'T' : 'F')<<"     ";
    cout<<((x^y)^y? 'T' : 'F')<<"      ";   
    cout<<((x^y)^x? 'T' : 'F')<<"       ";
    cout<<(!(x&&y)? 'T' : 'F')<<"       ";  
    cout<<(!x||!y? 'T' : 'F')<<"        ";
    cout<<(!(x||y)? 'T' : 'F')<<"       ";
    cout<<((!x&&!y)? 'T' : 'F')<<" "
    <<endl;
    
    //Could use a switch to reduce the code?
    return 0;
}

