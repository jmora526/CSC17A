//System Libraries
#include <iostream>
#include <string>
using namespace std;

//User Libraries
#include "ProductionWorker.h"

//Functions
ProductionWorker::ProductionWorker():Employee(){
    rate = 0;
    shift = 0;
}

void ProductionWorker::setShift(int a){
    if(a<0||a>2){
        cout<<"Try Again"<<endl;
    }
    else{
        shift = a;
    }
}

int ProductionWorker::getShift(){
    return shift;
}

void ProductionWorker::setRate(float a){
    rate = a;
}

float ProductionWorker::getRate(){
    return rate;
}