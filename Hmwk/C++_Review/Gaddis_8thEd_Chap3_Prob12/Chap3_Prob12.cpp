/* 
 * File: Celsius to Fahrenheit
 * Author: Jose Morales
 * Purpose: To convert a Celsius degree to a Fahrenheit
 * Created on September 6, 2016, 11:25 AM
 */
//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
//Declare Variables
float Fdegree,Cdegree;
//Introduce the the output for user.
cout<<"Please enter Celsius degree here to convert to Fahrenheit"<<endl;
    cin>>Cdegree;
//Introduce the equation to calculate the converted degree.
Fdegree = (1.8)*Cdegree + 32;
cout<<endl;
//Output the result to the user and end
cout<<Cdegree<<" degrees Celsius"<<endl;
cout<<"Converts to"<<endl;
cout<<Fdegree<<" degrees Fahrenheit"<<endl;
    return 0;
}

