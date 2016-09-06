/* 
 * File: Currency
 * Author: Jose Morales
 * Purpose: Convert U.S  dollar to Japanese Yen and to Euros.
 * Created on September 6, 2016, 11:42 AM
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
//Introduce Variables
//Dollar to Yen == 102.06
//Dollar to Euro == 0.89
float Yen = 102.06, Ytotal = 0; 
float Euro = 0.89, Etotal = 0;
float Dollar = 0;

//Introduce the user output.
cout<<"Enter the number of U.S Dollars you have here"<<endl;
cin>>Dollar;

//Convert U.S Currency to Euros and Yens.
Ytotal = Dollar * Yen;
Etotal = Dollar * Euro;

//Display the results to the user.
cout<<endl;
cout<<"Dollar Conversions"<<endl;
cout<<Dollar<<" Dollars = "<<setprecision(5)<<Ytotal<<" Yen"<<endl;
cout<<Dollar<<" Dollars = "<<setprecision(4)<<Etotal<<" Euros"<<endl;
    return 0;
}

