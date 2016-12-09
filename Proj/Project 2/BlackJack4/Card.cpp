/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "Card.h"
#include <ctime>
#include <cstdlib>

//Functions
Card::Card(){
    val = 0;
    sut = ' ';
}

int Card::value(){   
    val = rand()%13+1;
    switch(val){
        case 1 : return val; break;
        case 2 : return val; break;
        case 3 : return val; break;
        case 4 : return val; break;
        case 5 : return val; break;
        case 6 : return val; break;
        case 7 : return val; break;
        case 8 : return val; break;
        case 9 : return val; break;
        case 10 : return val; break;
        case 11 :
            if(val == 11){
                val = 10;
            }
            return val;
            break;
        case 12 :
            if(val == 12){
                val = 10;
            }
            return val;
            break;
        case 13 :
            if(val == 13){
                val = 10;
            }
            return val;
            break;        
    }
}
char Card::suit(){
    int a = rand()%4+1;
    char y;
    switch(a){
        case 1 : y = 'D'; return y; break;
        case 2 : y = 'S'; return y; break;
        case 3 : y = 'C'; return y; break;
        case 4 : y = 'H'; return y; break;
    }
}