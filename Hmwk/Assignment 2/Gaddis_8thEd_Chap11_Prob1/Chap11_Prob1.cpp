/* 
 * File: Movie Date
 * Author: Jose Morales
 * Created on October 3, 2016, 12:40 PM
 * Purpose: Generate a structure for movie data.
 */

//System Libraries Here
#include <iostream>
#include <string>
using namespace std;

//User Libraries Here
#include "movieData.h"
//Global Constants 

//Function Prototypes 
void display(movieData);
//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables 
    movieData movie;        //Introduce the structure
    
    //Introduce the user info here.
    cout<<"Enter the name of the Movie:";
    getline(cin,movie.Title);  
    cin.ignore();
    
    cout<<"Enter the Name of The Director:";
    getline(cin,movie.Director);
    cin.ignore();
    
    cout<<"Enter the Year the Movie was Produced:";
    cin>>movie.yearMov;
    
    cout<<"Enter the Run Time of The Movie Here:";
    cin>>movie.runTime;
    
    cout<<endl;
    display(movie);
    //Exit
    return 0;
}

//Function Here.
void display(movieData z){
    cout<<"Title:"<<z.Title<<endl;
    
    cout<<"Director:"<<z.Director<<endl;;
            
    cout<<"Year Released:"<<z.yearMov<<endl;
    
    cout<<"Running Time:"<<z.runTime<<endl;
            
}
