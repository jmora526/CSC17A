/* 
 * File: 
 * Author: Jose Morales
 * Purpose:
 * Created on October 24, 2016, 12:30 PM
 */

//System Libraries
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <fstream>
using namespace std;

//User Libraries
#include "StructInfo.h"
#include "Card.h"
//Global Constants

//Function Prototypes
void Menu();
int getN();
void def(int);
void game();
void checkBlack(int);
void bust(int,int,string);
void compare(int,int,string);
void tnks();
//Execution Begins Here
int main(int argc, char** argv) {
    int num;
    do{
        Menu();
        num=getN();
        switch(num){
        case 1:    "Rules";break;
        case 2:    game();break;
        default:   def(num);}
    }while(num>=1&&num<=2);
    return 0;
}
void Menu(){
    cout<<"Welcome to BlackJack"<<endl;
    cout<<"Type 1 getting the rules"<<endl;
    cout<<"Type 2 to play blackjack"<<endl;  
    cout<<"Type anything else to exit \n"<<endl;
}
int getN(){
        int num;
        cin>>num;
        cin.ignore();
        return num;
}
void def(int inN){
        cout<<"You typed "<<inN<<" to exit the program"<<endl;
}
void game(){
    //Set the random number seed for variability
    srand(static_cast<unsigned int>(time(0)));     
    //Introduce Struct to store in array.
    player user[4];
    dealer comp[4];
    //Introduce Class
    Card card;
    char sut;
    int val;
    //Introduce Variables
    char choice = ' ';
    int total = 0;
    char SoH = ' ';
    string name = " ";
    int sum = 0;
    //Input User Name.
    cout<<"Enter your name:";
    getline(cin,name);
    //Computer Blackjack
    comp[0].value = card.value();
    comp[0].sut = card.suit();
    comp[1].value = card.value();
    comp[1].sut = card.suit();
    
    //Check if computer got an ace.
    if (comp[0].value == 1){
        comp[0].value = 11;
    }
    if(comp[1].value == 1){
        if(comp[1].value == 11){
           comp[1].value = 1;
        }
        else if(comp[1].value == 1){
           comp[1].value = 11;
        }
    }
    //Check Cards for computer 1 & 2
    cout<<"DEALERS HAND"<<endl;
    cout<<"***********************"<<endl;
    cout<<"Dealer Card #1:"<<comp[0].value<<comp[0].sut<<endl;
    cout<<"Dealer Card #2:*Hidden*"<<endl;
    //Check Computer total for 1 & 2.
     for(int c = 0; c < 2; c++){
        sum+=comp[c].value;
    }
    //cout<<"Dealer Card Total:"<<sum<<endl;
    //cout<<endl;
    //Check if computer needs a third card.
    if(sum <= 17){
        sum = 0;
        comp[2].value = card.value();
        if(comp[2].value == 1){
            if(sum <= 10){
                comp[2].value == 11;
                sum = 0;
            }
            else if(comp[2].value == 1){
                comp[2].value = 1;
                sum = 0;
            }
        }
    }
     //Check Cards for computer 1 & 2 & 3
    //cout<<"Dealer Card 1:"<<comp[0].value<<comp[0].sut<<endl;
    //cout<<"Dealer Card 2:"<<comp[1].value<<comp[1].sut<<endl;
    //cout<<"Dealer Card 3:"<<comp[2].value<<comp[2].sut<<endl;
    //sum=0;
    //Check Computer total for 1 & 2 & 3.
     for(int c = 0; c < 3; c++){
        sum+=comp[c].value;
    }
    //cout<<"Dealer Card Total:"<<sum<<endl;

    
    
    //Check if computer needs a fourth card.
    if(sum <= 17){
        sum = 0;
        comp[3].value = card.value();
        if(comp[3].value == 1){
            if(sum <= 10){
                comp[3].value == 11;
                sum = 0;
            }
            else if(comp[3].value == 1){
                comp[3].value = 1;
                sum = 0;
            }
        }
    }
     //Check Cards for computer 1 & 2 & 3 & 4
    //cout<<"Dealer Card 1:"<<comp[0].value<<comp[0].sut<<endl;
    //cout<<"Dealer Card 2:"<<comp[1].value<<comp[1].sut<<endl;
    //cout<<"Dealer Card 3:"<<comp[2].value<<comp[2].sut<<endl;
    //cout<<"Dealer Card 4:"<<comp[3].value<<comp[3].sut<<endl;
    sum = 0;
    //Check Computer total for 1 & 2 & 3 & 4.
     for(int c = 0; c < 4; c++){
        sum+=comp[c].value;
    }
    //cout<<"Card Total:"<<sum<<endl;
    cout<<endl;
    //Introduce values & store 1st & 2nd card.
    user[0].value = card.value();
    user[0].sut = card.suit();
    user[1].value = card.value();
    user[1].sut = card.suit();
    //Show User His Cards.
    cout<<name<<"'s Hand"<<endl;
    cout<<"***********************"<<endl;
    //Display 1st & 2nd card to player.
    cout<<"Card 1:";
    cout<<user[0].value;
    cout<<user[0].sut<<endl;
    cout<<"Card 2:";
    cout<<user[1].value;
    cout<<user[1].sut<<endl;
    //Check if player got an ace on first card.
    if(user[0].value == 1){
        cout<<"You just got an ace, count as 1 or 11? (O/E)"<<endl;
        cin>>choice;
        if(choice == 'O' || choice == 'o'){
            user[0].value = 1;
        }
        if(choice == 'E' || choice == 'e'){
            user[0].value = 11;
        }
    }
    //Check if player got an ace on second card.
    if(user[1].value == 1){
        cout<<"You just got an ace, count as 1 or 11? (O/E)"<<endl;
        cin>>choice;
        if(choice == 'O' || choice == 'o'){
            user[1].value = 1;
        }
        if(choice == 'E' || choice == 'e'){
            user[1].value = 11;
        }
    }
    //Add Total for 2 cards.
    for(int c = 0; c < 2; c++){
        total+=user[c].value;
    }
    //Show card total for 2 cards.
    cout<<"Card Total:"<<total<<endl; 
    
    //Check if user got 21
    checkBlack(total);
    bust(total,sum,name);    
    //Ask for a third card.
    if(total < 21){
        cout<<"Hit or Stand? H/S"<<endl;
        cin>>SoH;
        if(SoH == 'H' || SoH == 'h'){
            user[2].value = card.value();
            user[2].sut = card.suit();
            total = 0;
            if(user[2].value == 1){
                cout<<"You just got an ace, count as 1 or 11? (O/E)"<<endl;
                cin>>choice;
                if(choice == 'O' || choice == 'o'){
                    user[2].value = 1;
                }
                if(choice == 'E' || choice == 'e'){
                    user[2].value = 11;
                }
            }
        }
        //Stand Option - Place Holder
        else{
        compare(total,sum,name); 
    } 
    //Add Total for 3 cards
    for(int c = 0; c < 3; c++){
        total+=user[c].value;
    }
    //Show User His Cards.
    cout<<name<<"'s Hand"<<endl;
    cout<<"***********************"<<endl;
    cout<<"Card #1:"<<user[0].value<<user[0].sut<<endl;
    cout<<"Card #2:"<<user[1].value<<user[1].sut<<endl;
    cout<<"Card #3:"<<user[2].value<<user[2].sut<<endl;
    //Display total
    cout<<"Card Total:"<<total<<endl;
    cout<<endl;    
    }
    //Check if user got 21
    checkBlack(total);
    bust(total,sum,name);
    //Ask for a fourth card.
    if(total < 21){
        cout<<"Hit or Stand? H/S"<<endl;
        cin>>SoH;
        if(SoH == 'H' || SoH == 'h'){
            user[3].value = card.value();
            user[3].sut = card.suit(); 
            total = 0;
            if(user[3].value == 1){
                cout<<"You just got an ace, count as 1 or 11? (O/E)"<<endl;
                cin>>choice;
                if(choice == 'O' || choice == 'o'){
                    user[3].value = 1;
                }
                if(choice == 'E' || choice == 'e'){
                    user[3].value = 11;
                }
            }
        }
        //Stand Option - Place Holder
        else{
        compare(total,sum,name);     
    }  
    //Add Total for 4 cards
    for(int c = 0; c < 5; c++){
        total+=user[c].value;
    }
    //Show User His Cards.
    cout<<name<<"'s Hand"<<endl;
    cout<<"***********************"<<endl;
    cout<<"Card #1:"<<user[0].value<<user[0].sut<<endl;
    cout<<"Card #2:"<<user[1].value<<user[1].sut<<endl;
    cout<<"Card #3:"<<user[2].value<<user[2].sut<<endl;
    cout<<"Card #4:"<<user[3].value<<user[3].sut<<endl;
    //Display total
    cout<<"Card Total:"<<total<<endl;
    cout<<endl;     
    }
    //Check if user got 21
    checkBlack(total);
    bust(total,sum,name);
    //Ask for a fifth card.
    if(total < 21){
        cout<<"Hit or Stand? H/S"<<endl;
        cin>>SoH;
        if(SoH == 'H' || SoH == 'h'){
            user[4].value = card.value();
            user[4].sut = card.suit();
            total = 0;
        }
        else{
        compare(total,sum,name);     
        } 
    //Add Total for 5 cards
    for(int c = 0; c < 6; c++){
        total+=user[c].value;
    }
    //Show User His Cards.
    cout<<name<<"'s Hand"<<endl;
    cout<<"***********************"<<endl;
    cout<<"Card #1:"<<user[0].value<<user[0].sut<<endl;
    cout<<"Card #2:"<<user[1].value<<user[1].sut<<endl;
    cout<<"Card #3:"<<user[2].value<<user[2].sut<<endl;
    cout<<"Card #4:"<<user[3].value<<user[3].sut<<endl;
    cout<<"Card #5:"<<user[4].value<<user[4].sut<<endl;
    //Display total
    cout<<"Card Total:"<<total<<endl;
    cout<<endl; 
    }
    //Check if user got 21
    checkBlack(total);
    bust(total,sum,name);
}
void checkBlack(int total){
    if(total == 21){
        cout<<endl;
        cout<<"Congratz, You got 21!"<<endl;
        cout<<"    _____    __     _" <<endl;  
        cout<<"   / ___ `. /  |   | | "<<endl;
        cout<<"  |_/___) | `| |   | | "<<endl;
        cout<<"   .'____.'  | |   | | "<<endl;
        cout<<"  / /_____  _| |_  |_| "<<endl;
        cout<<"  |_______||_____| (_) "<<endl;
        cout<<"                       "<<endl;
        exit(0);

    }
}
void bust(int total,int sum,string name){
    if(total > 21){
        cout<<"You have just gone bust! try again next time."<<endl;
        cout<<name<<"'s Total:"<<total<<endl;
        cout<<"Dealer's Total:"<<sum<<endl;
        exit(0);
    }
}
void compare(int total, int sum, string name){
    if(sum > 21){
        cout<<"You have won! The dealer went bust!"<<endl;
        cout<<"Dealer's Total:"<<sum<<endl;
        cout<<name<<"'s Total:"<<total<<endl;
        tnks();
        exit(0);
    }
    if(sum > total){
        cout<<"You have Lost! The dealer hit higher then you!"<<endl;
        cout<<"Dealer's Total:"<<sum<<endl;
        cout<<name<<"'s Total:"<<total<<endl;
        tnks();
        exit(0);
    }
    if(total > sum){
        cout<<"You have won! You hit higher than the dealer!"<<endl;
        cout<<"Dealer's Total:"<<sum<<endl;
        cout<<name<<"'s Total:"<<total<<endl;
        tnks();
        exit(0);
    }
    if(total = sum){
        cout<<"Game is a tie/push"<<endl;
        cout<<"Dealer's Total:"<<sum<<endl;
        cout<<name<<"'s Total:"<<total<<endl;
        tnks();
        exit(0);
    }
}
void tnks(){
    fstream tnks;
    string line;
    //Introduce file
        tnks.open("tnks.txt",ios::in);
        tnks.seekg(42,ios::beg);    
        getline(tnks,line);
        cout<<line;
        cout<<endl;
    //Close
        tnks.close();
   
}
