/* 
 * File: deck.cpp
 * Author: Jose Morales
 * Purpose:  
 * Due on December 09, 2016, 1:30 PM
 */

#include <cstdlib>
using namespace std;
//User Library
#include "deck.h"

//Functions
Deck::Deck(int numCards){
    if(numCards > 1){
        this->numCards=numCards;
    }
    else exit(1);
    
    
    index = new int[this->numCards];
    
    for(int card = 0; card < this->numCards; card++){
        index[card] = card % 52;
    }
    delt = 0;
}

int *Deck::deal(int nDeal){
    int *hand = new int [nDeal];
    
    if(delt>=.8*numCards)swap();
    
    for(int c = 0; c < nDeal; c++){
        hand[c] = index[delt++];
    }
    return hand;
}

void Deck::swap(){
    delt = 0;
    for(int shuff = 1; shuff<=7; shuff++){
        for(int c = 0; c < numCards;c++){
            int random=rand()%numCards;
            int temp = index[c];
            index[c]=index[random];
            index[random]=temp;
        }
    }    
}