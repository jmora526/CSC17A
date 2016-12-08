/* 
 * File:   Card.h
 * Author: Jose Morales
 * Purpose: Chapters 9-16 
 * Due on December 09, 2016, 1:30 PM
 */

#ifndef CARD_H
#define CARD_H

class Card{
    private:
        int  cFace; //Face of the card
        char cSuit; //Suit of the card.
    public:
        Card(int = 0, char = ' '); //Constructor for Class
        void show();               //Display the cards
        void shuffle(Card&);       //Swap or Shuffle
        void setCard(int,char);    //Set the value of the Face & Suit
        int  getFace();            //Get the value for the Face. 
        int  getSuit();            //Get the Value for the Suit
};

#endif /* CARD_H */

