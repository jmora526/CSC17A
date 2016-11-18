/* 
 * File: 
 * Author: Jose Morales
 * Purpose:
 * Created on November 15, 2016, 9:25 PM
 */

//System Libraries
#include <iostream>
#include <string>
using namespace std;

//User Libraries
#include "personal.h"
//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    perInfo your;
    perInfo friends;
    perInfo family;
    string name;
    string address;
    int age;
    int phone;
    int choice;
    
    cout<<"Enter(1)Your Info,(2)Friends,(3)Family."<<endl;
    cin>>choice;
    cin.ignore();
    switch(choice){
        case 1:       
        cout<<"Enter your name:";
        getline(cin,name);
        cout<<"Enter your address:";
        getline(cin,address);
        cout<<"Enter your age:";
        cin>>age;
        cout<<"Enter phone number:";
        cin>>phone;
        //set your info
        your.setName(name);
        your.setAdd(address);
        your.setAge(age);
        your.setPhone(phone);
        //Display your info.
        cout<<endl;
        cout<<"Your Info:"<<endl;
        cout<<"Name:"<<your.getName()<<endl;
        cout<<"Address:"<<your.getAdd()<<endl;
        cout<<"Age:"<<your.getAge()<<endl;
        cout<<"Phone:"<<your.getPhone()<<endl;
        break;
        case 2:
        cout<<"Enter friend's name:";
        getline(cin,name);
        cout<<"Enter friend's address:";
        getline(cin,address);
        cout<<"Enter friend's age:";
        cin>>age;
        cout<<"Enter friend's number:";
        cin>>phone;
        //set your info
        friends.setName(name);
        friends.setAdd(address);
        friends.setAge(age);
        friends.setPhone(phone);
        //Display your info.
        cout<<endl;
        cout<<"Friend's Info:"<<endl;
        cout<<"Name:"<<friends.getName()<<endl;
        cout<<"Address:"<<friends.getAdd()<<endl;
        cout<<"Age:"<<friends.getAge()<<endl;
        cout<<"Phone:"<<friends.getPhone()<<endl;
        break;    
        case 3:
        cout<<"Enter family's name:";
        getline(cin,name);
        cout<<"Enter family's address:";
        getline(cin,address);
        cout<<"Enter family's age:";
        cin>>age;
        cout<<"Enter family's number:";
        cin>>phone;
        //set your info
        family.setName(name);
        family.setAdd(address);
        family.setAge(age);
        family.setPhone(phone);
        //Display your info.
        cout<<endl;
        cout<<"Friend's Info:"<<endl;
        cout<<"Name:"<<family.getName()<<endl;
        cout<<"Address:"<<family.getAdd()<<endl;
        cout<<"Age:"<<family.getAge()<<endl;
        cout<<"Phone:"<<family.getPhone()<<endl;
        break;    
        default:
        cout<<"Try again, Enter a right option."<<endl;
        break;    
    }
    
    return 0;
}

