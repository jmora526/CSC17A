/* 
 * File: 
 * Author: Jose Morales
 * Purpose:
 * Created on October 24, 2016, 12:30 PM
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

//Our Libraries
#include "Card.h"
#include "Deck.h"

//Global Constants

//Function Prototypes
void Menu();
int getN();
void def(int);
void game();
//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    int ck;
    do{
        Menu();
        ck=getN();
        switch(ck){
        case 1:    "1";break;
        case 2:    game();break;
        default:   def(ck);}
    }while(ck>=1&&ck<=2);
    
    return 0;
}
//Functions
void Menu(){
    cout<<"Welcome to BlackJack"<<endl;
    cout<<"Type 1 getting the rules"<<endl;
    cout<<"Type 2 to play blackjack"<<endl;  
    cout<<"Type anything else to exit \n"<<endl;
}
int getN(){
        int ck;
        cin>>ck;
        cin.ignore();
        return ck;
}
void def(int inN){
        cout<<"You typed "<<inN<<" to exit the program"<<endl;
}
void game(){
    
    //Create an array of 52 cards 
    int numCards=52;
    Deck deck(numCards);
    //Deal some cards
    deck.swap();
    int Deal=1;
    int *hand1=deck.deal(Deal);
    for(int c=0;c<Deal;c++){
        Card card(hand1[c]);
        cout<<card.name()<<card.suit();
        cout<<" "<<setw(2)<<static_cast<int>(card.value());
        //cout<<" "<<setw(2)<<static_cast<int>(card.getNumber())<<endl;
    }
    cout<<endl;
    
    //Delete the arrays
    delete []hand1;
}
