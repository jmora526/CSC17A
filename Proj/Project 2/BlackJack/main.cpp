/* 
 * File: BlackJack 
 * Author: Jose Morales
 * Purpose: Chapters 9-16 
 * Due on December 09, 2016, 1:30 PM
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries
#include "card.h"
#include "deck.h"
//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Random Generator
    srand(static_cast<unsigned int>(time(0)));
    //Declare Variables
    int numCards = 5;
    Deck Deck(numCards);
    
    Deck.swap();
    
    int nDeal = 5;
    int *hand1 = Deck.deal(nDeal);
    for(int c = 0; c < nDeal; c++){
        Card Card(hand1[c]);
        cout<<Card.face()<<Card.face();
        cout<<" "<<setw(2)<<static_cast<int>(Card.value());
        cout<<" "<<setw(2)<<static_cast<int>(Card.getNum())<<endl;
    }
    cout<<endl;
    
    int *hand2 = Deck.deal(nDeal);
    for(int c = 0; c < nDeal; c++){
        Card Card(hand2[c]);
        cout<<Card.face()<<Card.face();
        cout<<" "<<setw(2)<<static_cast<int>(Card.value());
        cout<<" "<<setw(2)<<static_cast<int>(Card.getNum())<<endl;
    }
    cout<<endl;
    delete[]hand1;
    delete[]hand2;
    return 0;
}

