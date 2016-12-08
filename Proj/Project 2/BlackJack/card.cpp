/* 
 * File: card.cpp
 * Author: Jose Morales
 * Purpose:  
 * Due on December 09, 2016, 1:30 PM
 */

//User Library
#include "card.h"

//Functions
Card::Card(int num){
    if(num < 0){
        num = 0;    //Set any number below 0 to 0.
    }
    if(num > 51){
        num %= 52;  //Set any number after 52 back.
    }
    this->num=static_cast<char>(num);
}

char Card::face(){ 
    char arrFace[]={'A','1','2','3','4','5','6',
                    '7','8','9','Q','K','J','T'};//Set Array equal to... 
    return arrFace[num%13];                      //Set Random Face
}

char Card::suit(){
    if(num < 13){
        return 'S';   //Sets Suit to Spades
    }
    if(num < 26){
        return 'H';   //Sets Suit to Diamonds
    }
    if(num < 39){
        return 'C';   //Sets Suit to Hearts
    }
    return 'D';       //Sets Suit to Clubs
}

char Card::value(){
    char n=num%13+1;  //Random number generated
    if(n > 10)return 10;    //Returns back 10 since values are only 1-11   
    return n;         //Since number is less than 10, value is set A-10  
}