/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "cstdlib"
using namespace std;

#include "Deck.h"

Deck::Deck(int nCards){
    //Set the number of cards in the deck
    if(nCards>1){
        this->numCards=nCards;
    }
    else{
        exit(1);
    }
    //Create the dynamic indexed array
    index=new int[this->numCards];
    //Fill the index
    for(int cardNum=0;cardNum<this->numCards;cardNum++){
        index[cardNum]=cardNum%52;
    }
    //Set the number of cards dealt
    numDelt=0;
}

int *Deck::deal(int n2Deal){
    //Declare a dynamic allocated array for the cards to deal
    int *hand=new int[n2Deal];
    //Time to shuffle?
    if(numDelt>=.5*numCards){
        swap();
    }
    //Fill the array
    for(int i=0;i<n2Deal;i++){
        hand[i]=index[numDelt++];
    }
    return hand;
}

void Deck::swap(){
    //Set the deal to the beginning
    numDelt=0;
    //Shuffle 7 times
    for(int nShuff=1;nShuff<=7;nShuff++){
        //Swap randomly each card
        for(int i=0;i<numCards;i++){
            int random=rand()%numCards;
            int temp=index[i];
            index[i]=index[random];
            index[random]=temp;
        }
    }
}