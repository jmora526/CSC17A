/* 
 * File:   Deck.h
 * Author: Joe
 *
 * Created on December 7, 2016, 11:52 PM
 */

#ifndef DECK_H
#define DECK_H

#include "Card.h"

class Deck{
   private:
       int *index;
       int numCards;
       int numDelt;
   public:
       Deck(int);
       ~Deck(){
           delete []index;
       }
       void swap();
       int *deal(int);
};

#endif /* DECK_H */

