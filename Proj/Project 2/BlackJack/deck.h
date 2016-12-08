/* 
 * File:   deck.h
 * Author: Jose Morales
 * Purpose:
 * Due on December 09, 2016, 1:30 PM
 */

#ifndef DECK_H
#define DECK_H

#include "card.h"

class Deck{
    private:
        int *index;
        int numCards;
        int delt;
    public:
        Deck(int);
        ~Deck(){
            delete []index;
        }
        void swap();
        int *deal(int);
};

#endif /* DECK_H */

