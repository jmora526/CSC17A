//System Libraries
#include <iostream>
#include <string>
using namespace std;

//User Libraries
#include "Card.h"
#include "Inherete.h"

//Functions
Inherete::Inherete():Card(){
    test1 = 0;
    test2 = 0;
}

void Inherete::setTest1(int a){
    test1 = a;
}

int Inherete::getTest1(){
    return test1;
}

void Inherete::setTest2(int b){
    test2 = b;
}

int Inherete::getTest2(){
    return test2;
}