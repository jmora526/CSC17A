/* 
 * File:   Card.h
 * Author: Jose Morales
 * Purpose: 
 * Due on December 09, 2016, 1:30 PM
 */

#ifndef CARD_H
#define CARD_H

class Card{
    private:
        int num;
    public:
        Card();
        int suit();
        int name();
        int value();
        int getNum(){return num;}
};

#endif /* CARD_H */

