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
int testC();
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
    cout<<"---------------"<<endl;
    int card1 = 0;
    int card2 = 0;
    int choice;
    //Create an array of 52 cards 
    int numCards=52;
    Deck deck(numCards);
    //Deal some cards
    deck.swap();
    int Deal=1;
    //Deal card 1 to player
    int *hand1=deck.deal(Deal);
        Card card(hand1[0]);
        cout<<card.name()<<card.suit();
        cout<<" "<<setw(2)<<(card.value())<<endl;
        card1 = (card.value());
    
        
    //Check if player got an ace on first card.
    if(card1 == 1){
        cout<<"You just got an ace, count as 1 or 11? (O/E)"<<endl;
        cin>>choice;
        if(choice == 'O' || choice == 'o'){
            card1 = 1;
        }
        if(choice == 'E' || choice == 'e'){
            card1 = 11;
        }
    }
    if(card2 == 1){
        cout<<"You just got an ace, count as 1 or 11? (O/E)"<<endl;
        cin>>choice;
        if(choice == 'O' || choice == 'o'){
            card2 = 1;
        }
        if(choice == 'E' || choice == 'e'){
            card2 = 11;
        }
    }
    cout<<"--TEST--"<<endl;
    cout<<card1<<endl;
    cout<<endl;
    

}
int testC(){
    int val = 0;
    //Create an array of 52 cards 
    int numCards=52;
    Deck deck(numCards);
    //Deal some cards
    deck.swap();
    int Deal=1;
    //Deal card 1
    int *hand1=deck.deal(Deal);
        Card card(hand1[0]);
        cout<<card.name()<<card.suit();
        cout<<" "<<setw(2)<<(card.value())<<endl;
        return val += (card.value());
}
void lol(){
    //Create an array of 52 cards 
    int numCards=52;
    Deck deck(numCards);
    //Deal some cards
    deck.swap();
    int Deal=1;
    int val;
    //Deal card 1
    int *hand1=deck.deal(Deal);
    for(int c=0;c<Deal;c++){
        Card card(hand1[c]);
        cout<<card.name()<<card.suit();
        cout<<" "<<setw(2)<<(card.value())<<endl;
        val += (card.value());
        
    }
}