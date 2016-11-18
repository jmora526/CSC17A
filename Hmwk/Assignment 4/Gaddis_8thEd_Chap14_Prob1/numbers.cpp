//System Libraries
#include <iostream>
#include <string>
using namespace std;

//User Libraries
#include "numbers.h"

string numbers::lessThan20[20]{"Zero ,One ,Two ,Three ,Four ,Five ,Six ,Seven "
        "Eight ,Nine ,Ten ,Eleven ,Twelve ,Thirteen ,Fourteen ,Fifteen , Sixteen "
        "Seventeen , Eighteen ,Nineteen "};

void numbers::display(int a){
unsigned char n1000s = (a-a%1000)/1000;      
//output the results for 1000's
switch(n1000s){
    case 9:cout<<"Nine Thousand ";break;
    case 8:cout<<"Eight Thousand ";break;
    case 7:cout<<"Seven Thousand ";break;
    case 6:cout<<"Six Thousand ";break;
    case 5:cout<<"Five Thousand ";break;
    case 4:cout<<"Four Thousand ";break;
    case 3:cout<<"Three Thousand ";break;
    case 2:cout<<"Two Thousand ";break;
    case 1:cout<<"One Thousand ";break;
}
    
unsigned char n100s = (a-a%100)/100;      
//output the results for 100's
switch(n100s){
    case 9:cout<<"Nine Hundred ";break;
    case 8:cout<<"Eight Hundred ";break;
    case 7:cout<<"Seven Hundred ";break;
    case 6:cout<<"Six Hundred ";break;
    case 5:cout<<"Five Hundred ";break;
    case 4:cout<<"Four Hundred ";break;
    case 3:cout<<"Three Hundred ";break;
    case 2:cout<<"Two Hundred ";break;
    case 1:cout<<"One Hundred ";break;
}
//Determine how many 10's for  Numeral Converter
a -=(n100s * 100); //Remove the 4th digit.
unsigned char n10s = (a-a%10)/10;

//output the results for 10's
switch(n10s){
    case 9:cout<<"Ninety ";break;
    case 8:cout<<"Eighty ";break;
    case 7:cout<<"Seventy ";break;
    case 6:cout<<"Sixty ";break;
    case 5:cout<<"Fifty ";break;
    case 4:cout<<"Forty ";break;
    case 3:cout<<"Thirty ";break;
    case 2:cout<<"Twenty ";break;
    case 1:cout<<"Ten ";break;
}
//Determine how many 1's for Numeral Converter
a -=(n10s * 10); //Remove the 4th digit.
unsigned char n1s = (a-a%1)/1;

//output the results for 1's
switch(n1s){
    case 9:cout<<"Nine ";break;
    case 8:cout<<"Eight ";break;
    case 7:cout<<"Seven ";break;
    case 6:cout<<"Six ";break;
    case 5:cout<"Five ";break;
    case 4:cout<<"Four ";break;
    case 3:cout<<"Three ";break;
    case 2:cout<<"Two ";break;
    case 1:cout<<"One ";break;
}       
}