/* 
 * File: Vowels & Consonants
 * Author: Jose Morales
 * Purpose: count vowels,consonants,both,enter another string.
 * Created on Oct 16, 2016, 7:56 PM
 */
    
//System Libraries
#include <iostream>
#include <string>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
void cntVC(string,int&,int&);
//Execution Begins Here
int main(int argc, char** argv) {
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
    return 0;
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
