/* 
 * File: Rain or Shine
 * Author: Jose Morales
 * Purpose: Temp for all the programs
 * Created on September 12, 2016, 12:12 PM
 */

//System Libraries
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Introduce I/O
    ifstream file;
    
    //Declare Variables
    const int month = 3; 
    const int day =30;
    char weather[month][day];
    int count = 0;
    
    //Open File
    file.open("weather.dat");
    
    //Read Char from the file.
    while(count < day && file >> weather[month][count]){
        count++;
    }
    
    //Display
    cout<<"Weather:"<<endl;
    for(int c =0; c < day; c++){
        cout<<weather[month][c]<<" ";
        cout<<endl;
    }
    
    //Input Data
    
    //Process Data
    
    //Output Data
    
    return 0;
}

