/* 
 * File: Monthly Payments
 * Author: Jose Morales
 * Purpose: To Calculate the payment for a loan.
 * Created on September 6, 2016, 8:53 PM
 */
//System Libraries
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
//Introduce Variables
    int loan,months;
    float interest,payment;
//Display user input here.
cout<<"Input details here"<<endl;
cout<<"Enter the loan amount here:"<<endl;
    cin>>loan;
cout<<"Enter the monthly interest rate here:"<<endl;
    cin>>interest;
cout<<"Enter the number of payments here:"<<endl; 
    cin>>months;    
//Introduce the equation here
payment=(((interest)*pow(1+interest,months))/(pow(1+interest,months)-1))*loan;
//Display the result here.
cout<<"The monthly payments will be $"<<setprecision(5)<<payment<<endl;
    return 0;
}

