/* 
 * File:   Card.h
 * Author: Joe
 *
 * Created on December 7, 2016, 11:51 PM
 */

#ifndef CARD_H
#define CARD_H

class Card{
   private:
       char num;
   public:
       Card(int);
       char suit();
       char name();
       char value();
       char getNum(){return num;}
};

#endif /* CARD_H */

