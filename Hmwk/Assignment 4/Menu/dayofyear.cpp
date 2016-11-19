//System Libraries
#include <iostream>
#include <string>
using namespace std;

//User Libraries
#include "dayofyear.h"

dayofyear::dayofyear(){
    day = 0;
    month = "";
    num = 0;
}

void dayofyear::cal(int a){
    if(a <= 31){
        day = a;
        month = "Jan";
    }
    else if(a <= 59){
        day = a-31;
        month = "Feb";
    }
    else if(a <= 90){
        day = a-59;
        month = "Mar";
    }
    else if(a <= 120){
        day = a-90;
        month = "Apr";
    }
    else if(a <= 151){
        day = a-120;
        month = "May";
    }
    else if(a <= 181){
        day = a-151;
        month = "Jun";
    }
    else if(a <= 212){
        day = a-181;
        month = "Jul";
    }
    else if(a <=243){
        day = a-212;
        month = "Aug";
    }
    else if(a <= 273){
        day = a-243;
        month = "Sep";
    }
    else if(a <= 304){
        day = a-273;
        month = "Oct";
    }
    else if(a <= 334){
        day = a-304;
        month = "Nov";
    }
    else if(a <= 365){
        day = a-334;
        month = "Dec";
    }
}