//System Libraries
#include <iostream>
#include <cstdlib>
using namespace std;

//User Libraries
#include "MilTime.h"

//Functions
void MilTime::setTime(int a, int b){
    if(a < 0|| a > 2359){
        cout<<"Class can't accept hours greater than 2359 or less than 0."<<endl;
        exit(1);
    }
    milHours = a;
    milSeconds = b;
    hr = milHours/100;
    min = milHours-hr*100;
    sec = b;
    
}