/* 
 * File:   Inherete.h
 * Author: Jose Morales
 *
 * Due on December 9, 2016, 1:30 PM
 */

#ifndef INHERETE_H
#define INHERETE_H
#include "Card.h"

class Inherete:public Card{
    protected:
        int test1;
        int test2;
    public:
        Inherete();
        void setTest1(int);
        int getTest1();
        void setTest2(int);
        int getTest2();
};

#endif /* INHERETE_H */

