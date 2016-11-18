//System Libraries
#include <iostream>
#include <string>
using namespace std;

//User Libraries
#include "personal.h"

perInfo::perInfo(){
    name = "";
    address = "";
    age = 0;
    phone = 0;
}

void perInfo::setName(string a){
    name = a;
}

void perInfo::setAdd(string a){
    address = a;
}

void perInfo::setAge(int a){
    age = a;
}

void perInfo::setPhone(int a){
    phone = a;
}

string perInfo::getName(){
    return name;
}

string perInfo::getAdd(){
    return address;
}

int perInfo::getAge(){
    return age;
}

int perInfo::getPhone(){
    return phone;
}