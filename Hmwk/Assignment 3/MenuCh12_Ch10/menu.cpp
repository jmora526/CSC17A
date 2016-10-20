/* 
 * File: Menu for Chapter 12 & Chapter 10
 * Author: Jose Morales
 * Purpose:
 * Created on October 18, 2016, 5:56 PM
 */

///System Libraries
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

//User Libraries
#include "division.h"
//Global Constants

//Function Prototypes
void Menu();
int getN();
void def(int);
void problem1();
int count(char *, char);
void problem2();
void bckWard(char *, int);
void problem3();
int spCount(char *);
void problem4();
int spaCount(char *);
void problem5();
void cntVC(string,int&,int&);
void problem6();
void show(fstream &);
void problem7();
void showW(fstream &);
void problem8();
void joke();
void punch();
void problem9();
void problem10();
void show2(fstream &);

//Begin Execution Here!!!
int main(int argv,char *argc[]){
    int inN;
    do{
        Menu();
        inN=getN();
        switch(inN){
        case 1:    problem1();break;
        case 2:    problem2();break;
        case 3:    problem3();break;
        case 4:    problem4();break;
        case 5:    problem5();break;
        case 6:    problem6();break;
        case 7:    problem7();break;
        case 8:    problem8();break;
        case 9:    problem9();break;
        case 10:   problem10();break;
        default:   def(inN);}
    }while(inN>=1&&inN<=10);
    return 0;
}

void Menu(){
    cout<<"Menu for Ch12 & Ch10"<<endl;
    cout<<"Type 1 for problem 1"<<endl;
    cout<<"Type 2 for problem 2"<<endl;
    cout<<"Type 3 for problem 3"<<endl;
    cout<<"Type 4 for problem 4"<<endl;
    cout<<"Type 5 for problem 5"<<endl;
    cout<<"Type 6 for problem 6"<<endl;
    cout<<"Type 7 for problem 7"<<endl;
    cout<<"Type 8 for problem 8"<<endl;
    cout<<"Type 9 for problem 9"<<endl;
    cout<<"Type 10 for problem 10"<<endl;
    cout<<"Type anything else to exit \n"<<endl;
}

int getN(){
        int inN;
        cin>>inN;
        cin.ignore();
        return inN;
}

void problem1(){
    cout<<"In problem # 1"<<endl<<endl;
    //Declare Variables
        const int SIZE = 52;
        char inString[SIZE];
        char letCount;   
    //Input String Here From User
        cout<<"Enter a string here that's upto 51 chars:";
        cin.getline(inString,SIZE);   
    //Input Char User wants to look for.
        cout<<"Enter Char You Wish to Look For:";
        cin>>letCount;   
    //Display
        cout<<letCount<<" shows up ";
        cout<<count(inString,letCount)<<" times"<<endl; 
        cout<<endl;
}
//Function for Prob 1
int count(char *strPtr, char ch){
    int c = 0;
    while(*strPtr != '\0'){
        if(*strPtr == ch)
            c++;
        strPtr++;
    }
    return c;
}
//******************************************************************************
//******************************************************************************
void problem2(){
        cout<<"In problem # 2"<<endl<<endl;
    //Declare Variables
        const int SIZE = 21;
        char str1[SIZE];
    //User input for backwards string
        cout<<"Enter string to shift backwards:";
        cin.getline(str1,SIZE);
        bckWard(str1,SIZE);
        cout<<endl;
}
//Function for prob 2
void bckWard(char *str1, int SIZE){
    for(int c = SIZE - 1; c >=0;--c){
        cout<<str1[c];
    }
}
//******************************************************************************
//******************************************************************************
void problem3(){
        cout<<"In problem # 3"<<endl<<endl;
    //Declare Variables
        const int SIZE = 51;
        char wCount[SIZE];
    //Input user string
        cout<<"Enter a string with no more than 50 chars:";
        cin.getline(wCount,SIZE);
    //Display
    cout<<"This String has "<<spCount(wCount)<<" words."<<endl;
    cout<<endl;
}
//Function
int spCount(char *list){
    int c = 1;
    while(*list != '\0'){
        if(*list == ' ')
            c++;
            list++;       
    }   
    return c;
}
//******************************************************************************
//******************************************************************************
void problem4(){
        cout<<"In problem # 4"<<endl<<endl;
    //Declare Variables
        const int SIZE = 51;
        char wCount[SIZE];
    //Input user string
        cout<<"Enter a string with no more than 50 chars:";
        cin.getline(wCount,SIZE);
    //Display
        cout<<"This String has "<<spaCount(wCount)<<" words."<<endl;
        cout<<endl;
}
//Function for prob 4
int spaCount(char *list){
    float c = 1;
    float ch = 0;
    while(*list != '\0'){
        if(*list == ' ')
            c++;
            list++;
            ch++;
        }
    float average;
    average = ch/c;
    cout<<"The average number of letters in the string is ";
    cout<<average<<endl;
    return c;
}
//******************************************************************************
//******************************************************************************
void problem5(){
        cout<<"In problem # 5"<<endl<<endl;
    //Declare Variables
        string sentence;
        int pick;
        int vowels = 0;
        int conson = 0;
    //Introduce the input for user.
        cout<<"Please enter a sentence:";
        getline(cin,sentence);
        cout<<"Sentence Length:"<<sentence.length()<<endl;
    //Introduce a menu for user
        do{
        cout<<"(1)Count the number of vowels in the sentence?"<<endl;
        cout<<"(2)Count the number of consonants in the sentence?"<<endl;
        cout<<"(3)Count both?"<<endl;
        cout<<"(4)Enter another sentence?"<<endl;
        cout<<"(E)Exit program?"<<endl;
        cout<<endl;    
        cout<<"Enter Choice:";
        cin>>pick;
        cout<<endl;    
    //Introduce the switch
    switch(pick){
        case 1:
            cout<<"Number of Vowels:"<<vowels<<endl;          
            break;
        case 2:
            cout<<"Number of Consonants:"<<conson<<endl;
            break;
        case 3:
            cout<<"Number of both:"<<vowels+conson<<endl;
            break;
        case 4:
            cout<<"Input Sentence:"<<endl;
            break;
        default:
            cout<<"Program Done...Exit"<<endl;
    }                
    }while(pick>=1&&pick<=4);
}
//Function
void cntVC(string sentence,int &vowels, int &conson){
    //Into Variables
     vowels = 0;
     conson = 0;
    //Intro Loop
    for(int c = 0; c<sentence.length();c++){
        if(isalpha(sentence[c])){
        if(sentence[c]== 'a'||sentence[c]== 'e'||sentence[c]== 'i'||
           sentence[c]== 'o'||sentence[c]== 'u'||sentence[c]== 'A'||
           sentence[c]== 'E'||sentence[c]== 'I'||sentence[c]== 'O'||
           sentence[c]== 'U'){      
           vowels++;
        }           
        else{
           conson++;          
        }
        }
    }
}
//******************************************************************************
//******************************************************************************
void problem6(){
        cout<<"In problem # 6"<<endl<<endl;
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
}
//Function for prob 6
void show (fstream &file){
    string line;
    int c = 0;
    while(file >> line && c < 10){
        cout<<line<<" ";
        c++;
    }
    cout<<endl;
    cout<<endl;
}
//******************************************************************************
//******************************************************************************
void problem7(){
        cout<<"In problem # 7"<<endl<<endl;
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
            showW(file);
        }    
        file.close();    
}
//Function for prob 7
void showW (fstream &file){
    string line;
    int c = 0;
    while(file >> line && c <= 10){
        c++;
        getline(file,line);
        cout<<line<<endl;
    }
    cout<<endl;
}
//******************************************************************************
//******************************************************************************
void problem8(){
        cout<<"In problem # 8"<<endl<<endl;
    //Declare Variables
    
    //Display Joke
    joke();
    //Display Punch Line
    punch();        
}
//Function for prob 8
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
        cout<<endl;   
    punch.close();
}
//******************************************************************************
//******************************************************************************
void problem9(){
        cout<<"In problem # 9"<<endl<<endl;
    //Declare Variables
        division div;
        fstream file;
    //Introduce File
        file.open("divSales.txt",ios::out);
    //Intro Div
        cout<<"Enter The Division Name:";
        cin>>div.name;
    //Introduce Loop
    for(int c = 0; c < 4; c++){
        cout<<"Enter The Quarter:";
        cin>>div.quarter[c];
        cout<<"Enter The Quarter Sales "<<c+1<<":";
        cin>>div.sales[c];
        file<<div.name<<endl;
        file<<div.sales[c]<<endl;
        file<<div.quarter[c]<<endl; 
    }  
    file.close();
}
//******************************************************************************
//******************************************************************************
void problem10(){
        cout<<"In problem # 10"<<endl<<endl;
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
        show2(file);
    }    
    file.close();
}
//Function for prob 10
void show2 (fstream &file){
   string line;
   //Intro
   file.seekg(47,ios::beg);
   getline(file,line);
   cout<<line;
   cout<<endl;
}
//******************************************************************************
//******************************************************************************
void def(int inN){
        cout<<"You typed "<<inN<<" to exit the program"<<endl;
}