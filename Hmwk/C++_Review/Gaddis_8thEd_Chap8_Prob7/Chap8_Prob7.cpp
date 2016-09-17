/* 
 * File: Binary String Search
 * Author: Jose Morales
 * Purpose: Temp for all the programs
 * Created on September 12, 2016, 12:15 PM
 */

//System Libraries
#include <iostream>
#include <string>
using namespace std;

//Global Constants

//Function Prototypes
void Sort(string[],int);
int showS(string[],int);
bool Lbinary(string[],int,string);
//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    const int NUM_NAMES = 20;
int outcome;
string names[NUM_NAMES] = {"Collins,Bill ","Smith,Bart ","Allen,Jim ","Griffin,Jim ",
                         "Stamey,Marty ","Rose,Geri ","Taylor,Terri ","Johnson,Jill ",
                         "Alison,Jeff ","Looney,Joe ","Wolfe,Bill ","James,Jean ",
                         "Weaver,Jim ","Pore,Bob ","Rutherford,Greg ","Javens,Renne ",
                         "Harrison,Rose ","Setzer,Cathy ","Pike,Gordon ","Holland,Beth "};
    //Input Data
    
    //Process Data
    Sort(names,NUM_NAMES);
    outcome= showS(names,NUM_NAMES);
    if(outcome == -1)
        cout<<"Sorry, names are not valid"<<endl;
    else{
        cout<<"Names are valid"<<endl;
    }
    //Output Data
    
    return 0;
}
void Sort(string a[],int max ){
int startscan,minindex;
string minvalue;

for(startscan = 0;startscan < (max - 1);startscan++){
    minindex = startscan;
    minvalue = a[startscan];
    for(int index = startscan + 1; index < max; index++){
        if(a[index] < minvalue){
            minvalue = a[index];
            minindex = index;
        }
    }
    a[minindex] = a[startscan];
    a[startscan] = minvalue;
}
}
int showS(string names[],int total){
    for(int c = 0; c < total; c++){
        cout<<names[c]<<endl;
    }
}
bool Lbinary(string a[],int numE,string value){
    int first = 0,
        last = numE - 1,
        middle,
        position = -1;
    bool found = false;
    
    while(!found && first <= last){
        middle = (first + last) / 2;
        if(a[middle] == value){
            found = true;
            position = middle;
        }
        else if(a[middle] > value)
            last = middle - 1;
        else
            first = middle + 1;
    }
    return false;
}
