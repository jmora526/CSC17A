/* 
 * File: BlackJack  
 * Author: Jose Morales
 * Purpose:
 * Due on October 28, 2016, 11:59 PM
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries
#include "playinfo.h"
//Global Constants

//Function Prototypes
int hitValue();
void suit();
//Execution Begins Here
int main(int argc, char** argv) {
   //Set the random number seed for variability
    srand(static_cast<unsigned int>(time(0)));      
    //Declare Variables
    playerinfo info;    //Structure player info.
    player user[10];    //Structure for player cards.
    dealer cpu[10];         //Structure for dealer cards. 
    int ttl = 0;        //Keep total of user cards.
    int sum = 0;
    char SoH;           //Store choice of hitting or standing.
    char choice;        //Choice value of ace.
    
    //Computer Blackjack
    cpu[0].value = hitValue();
    cpu[1].value = hitValue();
    
    //Check if computer got an ace.
    if (cpu[0].value == 1){
        cpu[0].value = 11;
    }
    if(cpu[1].value == 1){
        if(cpu[1].value == 11){
            cpu[1].value = 1;
        }
        else if(cpu[1].value == 1){
            cpu[1].value = 11;
        }
    }
    //Check Cards for computer 1 & 2
    cout<<"First cpu Card:"<<cpu[0].value<<" Second cpu Card:"<<cpu[1].value<<endl;
    //Check Computer total for 1 & 2.
     for(int c = 0; c < 2; c++){
        sum+=cpu[c].value;
    }
     cout<<"Card Total:"<<sum<<endl;
    cout<<endl;
    //Check if computer needs a third card.
    if(sum <= 17){
        sum = 0;
        cpu[2].value = hitValue();
        if(cpu[2].value == 1){
            if(sum <= 10){
                cpu[2].value == 11;
                sum = 0;
            }
            else if(cpu[2].value == 1){
                cpu[2].value = 1;
                sum = 0;
            }
        }
    }
     //Check Cards for computer 1 & 2 & 3
    cout<<"First cpu Card:"<<cpu[0].value<<" Second cpu Card:"<<cpu[1].value;
    cout<<"Third cpu Card:"<<cpu[2].value<<endl;
    //Check Computer total for 1 & 2 & 3.
     for(int c = 0; c < 3; c++){
        sum+=cpu[c].value;
    }
     cout<<"Card Total:"<<sum<<endl;
    cout<<endl;
    //User Blackjack
    user[0].value = hitValue(); //First Card
    user[1].value = hitValue(); //Second Card 
    
    cout<<"First Cards:"<<user[0].value<<" Second Card:"<<user[1].value<<endl;
    
    //Check if player got an ace on first card.
    if(user[0].value == 1){
        cout<<"You just got an ace, count as 1 or 11? (O/E)"<<endl;
        cin>>choice;
        if(choice == 'O' || choice == 'o'){
            user[0].value = 1;
        }
        if(choice == 'E' || choice == 'e'){
            user[0].value = 11;
        }
    }
    //Check if player got an ace on second card.
    if(user[1].value == 1){
        cout<<"You just got an ace, count as 1 or 11? (O/E)"<<endl;
        cin>>choice;
        if(choice == 'O' || choice == 'o'){
            user[1].value = 1;
        }
        if(choice == 'E' || choice == 'e'){
            user[1].value = 11;
        }
    }
    //Add Total for 2 cards.
    for(int c = 0; c < 2; c++){
        ttl+=user[c].value;
    }
    cout<<"Card Total:"<<ttl<<endl;
    
    //Ask for a third card.
    if(ttl < 21){
        cout<<"Hit or Stand? H/S"<<endl;
        cin>>SoH;
        if(SoH == 'H' || SoH == 'h'){
            user[2].value = hitValue();
            ttl = 0;
            if(user[2].value == 1){
                cout<<"You just got an ace, count as 1 or 11? (O/E)"<<endl;
                cin>>choice;
                if(choice == 'O' || choice == 'o'){
                    user[2].value = 1;
                }
                if(choice == 'E' || choice == 'e'){
                    user[2].value = 11;
                }
            }
        }
        //Stand Option - Place Holder
        else{
        exit(0); 
    } 
    //Add Total for 3 cards
    for(int c = 0; c < 3; c++){
        ttl+=user[c].value;
    }
    //Display Card Values    
    cout<<"First Cards:"<<user[0].value<<" Second Card:";
    cout<<user[1].value<<" Third Card:"<<user[2].value<<endl;    
    //Display total
    cout<<"Card Total:"<<ttl<<endl;    
    }
    //Ask for a fourth card.
    if(ttl < 21){
        cout<<"Hit or Stand? H/S"<<endl;
        cin>>SoH;
        if(SoH == 'H' || SoH == 'h'){
            user[3].value = hitValue();
            ttl = 0;
            if(user[3].value == 1){
                cout<<"You just got an ace, count as 1 or 11? (O/E)"<<endl;
                cin>>choice;
                if(choice == 'O' || choice == 'o'){
                    user[3].value = 1;
                }
                if(choice == 'E' || choice == 'e'){
                    user[3].value = 11;
                }
            }
        }
        //Stand Option - Place Holder
        else{
        exit(0);    
    }  
    //Add Total for 4 cards
    for(int c = 0; c < 5; c++){
        ttl+=user[c].value;
    }
    //Display Card Values    
    cout<<"First Cards:"<<user[0].value<<" Second Card:";
    cout<<user[1].value<<" Third Card:"<<user[2].value<<"Fourth Card:";
    cout<<user[3].value<<endl;    
    //Display total
    cout<<"Card Total:"<<ttl<<endl;    
    }
    //Ask for a fifth card.
    if(ttl < 21){
        cout<<"Hit or Stand? H/S"<<endl;
        cin>>SoH;
        if(SoH == 'H' || SoH == 'h'){
            user[4].value = hitValue();
            ttl = 0;
        }
        else{
        exit(0);    
        } 
    //Add Total for 5 cards
    for(int c = 0; c < 6; c++){
        ttl+=user[c].value;
    }
    //Display Card Values    
    cout<<"First Cards:"<<user[0].value<<" Second Card:";
    cout<<user[1].value<<" Third Card:"<<user[2].value<<"Fourth Card:";
    cout<<user[3].value<<"Fifth Card:"<<user[4].value<<endl;    
    //Display total
    cout<<"Card Total:"<<ttl<<endl;    
    }
    return 0;
}
//Functions
void suit(){
    int a = rand()%4+1;
    switch(a){
        case 1 : cout<<"Diamonds"<<endl;break;
        case 2 : cout<<"Spades"<<endl;break;
        case 3 : cout<<"Clubs"<<endl;break;
        case 4 : cout<<"Hearts"<<endl;break;
    }
}

int hitValue(){
    int x = rand()%13+1;
    switch(x){
        case 1 : return x; break;
        case 2 : return x; break;
        case 3 : return x; break;
        case 4 : return x; break;
        case 5 : return x; break;
        case 6 : return x; break;
        case 7 : return x; break;
        case 8 : return x; break;
        case 9 : return x; break;
        case 10 : return x; break;
        case 11 :
            if(x == 11){
                x = 10;
            }
            return x;
            break;
        case 12 :
            if(x == 12){
                x = 10;
            }
            return x;
            break;
        case 13 :
            if(x == 13){
                x = 10;
            }
            return x;
            break;        
    }
}

