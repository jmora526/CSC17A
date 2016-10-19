/* 
 * File: File Display Program 
 * Author: Jose Morales
 * Purpose: 
 * Created on October 10, 2016, 2:56 PM
 */

//System Libraries
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
void show(fstream &);
//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    string txtName;
    fstream file;
    //File to look for
    cout<<"Enter the name of the file:textF.dat ";
    cin>>txtName;
    cout<<endl;
    
    //Open File
    file.open(txtName, ios::in);
    
    //Check if file exists
    if(file.fail()){
    cout<<"Error, File not Found!"<<endl;    
    }
    else{
        show(file);
    }    
    file.close();
    return 0;
}

void show (fstream &file){
    string line;
    int c = 0;
    while(file >> line && c < 10){
        cout<<line<<" ";
        c++;
    }
}

