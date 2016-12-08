/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "Card.h"

//Implement the Constructor
Card::Card(int n){
    if(n < 0){
        n = 0;
    }
    if(n > 51){
        n %=52;
    }
    this->num=static_cast<char>(n);
}

char Card::suit(){
    if(num < 13){
        return 'S';
    }
    if(num < 26){
        return 'H';
    }
    if(num < 39){
        return 'C';
    }
    return 'D';
}

char Card::name(){
    char arrName[]={'A','2','3','4','5','6',
                    '7','8','9','T','J','Q','K'};
    
    return arrName[num%13];
}

char Card::value(){
    char n=num%13+1;
    if(n>10){
        return 10;
    }
    return n;
}