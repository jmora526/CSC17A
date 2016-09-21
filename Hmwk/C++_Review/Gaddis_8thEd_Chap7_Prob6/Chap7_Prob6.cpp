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
    int sunny = 0 ,sttl = 0;
    int cloudy = 0, cttl = 0;
    int raining = 0, rttl = 0;
    
    //Open File
    file.open("weather.dat");
    
    //Read Char from the file.
    for(int c = 0; c < month; c++){
        for(int cc = 0; cc < day;cc++){
            file>>weather[c][cc];          
        }
    }
    
    //Display
    cout<<"Weather:"<<endl;
    for(int c = 0; c < month; c++){
        for(int cc = 0; cc < day;cc++){
        cout<<weather[c][cc]<<endl;

            switch(weather[c][cc]){
                case 'C' :cloudy++;
                break;
                case 'S' :sunny++;
                break;
                case 'R' :raining++;
                break;
            }
        }
    }
    cout<<"Rain:"<<raining<<endl;
    cout<<"Cloud:"<<cloudy<<endl;
    cout<<"Sun:"<<sunny<<endl;
    
    rttl+=raining;
    cttl+=cloudy;
    sttl+=sunny;
            
    cout<<"Total Rain:"<<rttl<<endl;
    cout<<"Total Cloud:"<<cttl<<endl;
    cout<<"Total Sun:"<<sttl<<endl;
    
    //Input Data
    
    //Process Data
    
    //Output Data
    
    return 0;
}

