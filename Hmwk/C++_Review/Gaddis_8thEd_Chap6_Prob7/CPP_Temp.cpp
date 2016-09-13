/* 
 * File: Celsius Temperature Table
 * Author: Jose Morales
 * Purpose: Temp for all the programs
 * Created on September 13, 2016, 11:56 AM
 */

//System Libraries
#include <iostream>
#include <cmath>
using namespace std;

//Global Constants

//Function Prototypes
float celsius(float expF);
//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    float celsi = 0.0;
    //Input Data
    cout<<"Here are the Celsius temperatures from 0 - 20"<<endl;
    //Process Data
    for(int count = 0; count <= 20; count++){
    celsi = celsius(count);
    cout<<count<<" degree Fahrenheit = "<<celsi<<" degree Celsius"<<endl;    
    }
    //Output Data
    
    return 0;
}
//Introduce the celsius function.
float celsius(float expF){
    float celsi = 0.0;
    celsi = (5.0 / 9.0) * (expF - 32);
    return celsi;
} 

