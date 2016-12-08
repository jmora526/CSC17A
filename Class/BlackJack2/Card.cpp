//System Libraries
#include <iostream>

using namespace std;

//User Libraries
#include "Card.h"

//Functions
Card::Card(int f, char s){
    cFace = f;
    cSuit = s;
}

void Card::show(){
    switch(cFace){
        case 1:  cout<<'A';
        break;
        case 11: cout<<'Q';
        break;
        case 12: cout<<'J';
        break;
        case 13: cout<<'K';
        break;
        default: cout<<cFace;
    }
    cout<<cSuit;
}

void Card::shuffle(Card& card){
    //Struct
    Card sTerm;  
    //Set Temp
    sTerm.cSuit = card.cSuit;
    sTerm.cFace = card.cFace;  
    //Set Points
    card.cFace = this->cFace;
    card.cSuit = this->cSuit;  
    this->cFace = sTerm.cFace;
    this->cSuit = sTerm.cSuit;
}

void Card::setCard(int f, char s){
    cSuit = s;
    cFace = f;
}

int Card::getSuit(){
    return cSuit;
}

int Card::getFace(){
    return cFace;
}