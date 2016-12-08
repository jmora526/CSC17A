/* 
 * File:   card.h
 * Author: Jose Morales
 * Purpose: Chapters 9-16 
 * Due on December 09, 2016, 1:30 PM
 */

#ifndef CARD_H
#define CARD_H

class Card{
    private:
        char num;       // Store Number
    public:
        Card(int);
        char suit();    //Suit of the card:spades,hearts,etc
        char face();    //Name of the card:eight,nine,ace,king,etc
        char value();   //Value of the card
        char getNum(){return num;};  //Return the value.
};

#endif /* CARD_H */

