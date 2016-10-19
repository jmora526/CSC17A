/* 
 * File: Punch Line 
 * Author: Jose Morales
 * Purpose: Open to files an display joke with punch line.
 * Created on October 15, 2016, 2:56 PM
 */

//System Libraries
#include <iostream>
#include <fstream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
void joke();
void punch();
//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    
    //Display Joke
    joke();
    //Display Punch Line
    punch();
    
    return 0;
}
//Function
void joke(){
    fstream joke;
    string line;
    //Introduce file
    joke.open("joke.txt",ios::in);
        getline(joke,line);
        cout<<line;
        cout<<endl;
        joke.close();
}
void punch(){
    fstream punch;
    string line;
    //Introduce file
    punch.open("punchline.txt",ios::in);
        punch.seekg(60,ios::beg);    
        getline(punch,line);
        cout<<line;
        cout<<endl;
    
   
    punch.close();
}
