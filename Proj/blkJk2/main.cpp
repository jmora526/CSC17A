/* 
 * File: Menu Temp
 * Author: Jose Morales
 * Purpose:
 * Created on September 25, 2016, 1:56 PM
 */

///System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <string>
using namespace std;

//User Libraries
#include "playinfo.h"
//Global Constants

//Function Prototypes
void Menu();
int getN();
void def(int);
void rules();
void read(fstream &);
void game();
int hitValue();
string suit();
void check21(int);
void bust(int);
void compare(int,int);
void tnks();
//Begin Execution Here!!!
int main(int argv,char *argc[]){
    int num;
    do{
        Menu();
        num=getN();
        switch(num){
        case 1:    rules();break;
        case 2:    game();break;
        default:   def(num);}
    }while(num>=1&&num<=2);
    return 0;
}

void Menu(){
    cout<<"Welcome to BlackJack"<<endl;
    cout<<"Type 1 getting the rules"<<endl;
    cout<<"Type 2 to play blackjack"<<endl;  
    cout<<"Type anything else to exit \n"<<endl;
}

int getN(){
        int num;
        cin>>num;
        return num;
}

void rules(){
    cout<<"(1.)RULES"<<endl<<endl;
    //Declare Variables
        string txtName; 
        fstream file;
    //Open File
        file.open("rules.txt", ios::in);
    //Check if file exists
        if(file.fail()){
            cout<<"Error, File not Found!"<<endl;    
        }
        else{
            read(file);
        }    
        file.close();
}
//Functions
void read (fstream &file){
    string line;
    int c = 0;
    while(file >> line && c <= 15){
        c++;
        getline(file,line);
        cout<<line<<endl;
    }
    cout<<endl;
}


/*******************************************************************************
*******************************************************************************/
void game(){
    cout<<"In problem # 2"<<endl<<endl;
    //Set the random number seed for variability
    srand(static_cast<unsigned int>(time(0)));      
    //Declare Variables
    player user[10];    //Structure for player cards.
    dealer cpu[10];         //Structure for dealer cards. 
    int ttl = 0;        //Keep total of user cards.
    int sum = 0;
    char SoH;           //Store choice of hitting or standing.
    char choice;        //Choice value of ace.

    //Computer Blackjack
    cpu[0].value = hitValue();
    cpu[0].suit = suit();
    cpu[1].value = hitValue();
    cpu[1].suit = suit();
    
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
    cout<<"DEALERS HAND"<<endl;
    cout<<"***********************"<<endl;
    cout<<"Dealer Card #1:"<<cpu[0].value<<cpu[0].suit<<endl;
    cout<<"Dealer Card #2:*Hidden*"<<endl;
    //Check Computer total for 1 & 2.
     for(int c = 0; c < 2; c++){
        sum+=cpu[c].value;
    }
    //cout<<"Dealer Card Total:"<<sum<<endl;
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
    //cout<<"Dealer Card 1:"<<cpu[0].value<<cpu[0].suit<<endl;
    //cout<<"Dealer Card 2:"<<cpu[1].value<<cpu[1].suit<<endl;
    //cout<<"Dealer Card 3:"<<cpu[2].value<<cpu[2].suit<<endl;
    //sum=0;
    //Check Computer total for 1 & 2 & 3.
     for(int c = 0; c < 3; c++){
        sum+=cpu[c].value;
    }
    //cout<<"Dealer Card Total:"<<sum<<endl;
    cout<<endl;
    
    
    //Check if computer needs a fourth card.
    if(sum <= 17){
        sum = 0;
        cpu[3].value = hitValue();
        if(cpu[3].value == 1){
            if(sum <= 10){
                cpu[3].value == 11;
                sum = 0;
            }
            else if(cpu[3].value == 1){
                cpu[3].value = 1;
                sum = 0;
            }
        }
    }
     //Check Cards for computer 1 & 2 & 3 & 4
    //cout<<"Dealer Card 1:"<<cpu[0].value<<cpu[0].suit<<endl;
    //cout<<"Dealer Card 2:"<<cpu[1].value<<cpu[1].suit<<endl;
    //cout<<"Dealer Card 3:"<<cpu[2].value<<cpu[2].suit<<endl;
    //cout<<"Dealer Card 4:"<<cpu[3].value<<cpu[3].suit<<endl;
    sum = 0;
    //Check Computer total for 1 & 2 & 3 & 4.
     for(int c = 0; c < 4; c++){
        sum+=cpu[c].value;
    }
    //cout<<"Card Total:"<<sum<<endl;
    cout<<endl;
    
    
    //User Blackjack
    user[0].value = hitValue(); //First Card
    user[0].suit = suit();      //Suit of First Card
    user[1].value = hitValue(); //Second Card 
    user[1].suit = suit();      //Suit of Second Card.
    
    //Show User His Cards.
    cout<<"YOUR HAND"<<endl;
    cout<<"***********************"<<endl;
    cout<<"Your Card #1:"<<user[0].value<<user[0].suit<<endl;
    cout<<"Your Card #2:"<<user[1].value<<user[1].suit<<endl;
    
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
    
    //Check if user got 21
    check21(ttl);
    bust(ttl);
    //Binary from file and out
    fstream x;
    x.open("binary.dat",ios::out | ios::binary);
    x.write(reinterpret_cast<char *>(user),sizeof(user));
    x.close();
    //Ask for a third card.
    if(ttl < 21){
        cout<<"Hit or Stand? H/S"<<endl;
        cin>>SoH;
        if(SoH == 'H' || SoH == 'h'){
            user[2].value = hitValue();
            user[2].suit = suit();
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
        compare(ttl,sum); 
    } 
    //Add Total for 3 cards
    for(int c = 0; c < 3; c++){
        ttl+=user[c].value;
    }
    //Show User His Cards.
    cout<<"YOUR HAND"<<endl;
    cout<<"***********************"<<endl;
    cout<<"Your Card #1:"<<user[0].value<<user[0].suit<<endl;
    cout<<"Your Card #2:"<<user[1].value<<user[1].suit<<endl;
    cout<<"Your Card #3:"<<user[2].value<<user[2].suit<<endl;
    //Display total
    cout<<"Card Total:"<<ttl<<endl;    
    }
    //Check if user got 21
    check21(ttl);
    bust(ttl);
    //Ask for a fourth card.
    if(ttl < 21){
        cout<<"Hit or Stand? H/S"<<endl;
        cin>>SoH;
        if(SoH == 'H' || SoH == 'h'){
            user[3].value = hitValue();
            user[3].suit = suit(); 
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
        compare(ttl,sum);     
    }  
    //Add Total for 4 cards
    for(int c = 0; c < 5; c++){
        ttl+=user[c].value;
    }
    //Show User His Cards.
    cout<<"YOUR HAND"<<endl;
    cout<<"***********************"<<endl;
    cout<<"Your Card #1:"<<user[0].value<<user[0].suit<<endl;
    cout<<"Your Card #2:"<<user[1].value<<user[1].suit<<endl;
    cout<<"Your Card #3:"<<user[2].value<<user[2].suit<<endl;
    cout<<"Your Card #4:"<<user[3].value<<user[3].suit<<endl;
    //Display total
    cout<<"Card Total:"<<ttl<<endl;    
    }
    //Check if user got 21
    check21(ttl);
    bust(ttl);
    //Ask for a fifth card.
    if(ttl < 21){
        cout<<"Hit or Stand? H/S"<<endl;
        cin>>SoH;
        if(SoH == 'H' || SoH == 'h'){
            user[4].value = hitValue();
            user[4].suit = suit();
            ttl = 0;
        }
        else{
        compare(ttl,sum);     
        } 
    //Add Total for 5 cards
    for(int c = 0; c < 6; c++){
        ttl+=user[c].value;
    }
    //Show User His Cards.
    cout<<"YOUR HAND"<<endl;
    cout<<"***********************"<<endl;
    cout<<"Your Card #1:"<<user[0].value<<user[0].suit<<endl;
    cout<<"Your Card #2:"<<user[1].value<<user[1].suit<<endl;
    cout<<"Your Card #3:"<<user[2].value<<user[2].suit<<endl;
    cout<<"Your Card #4:"<<user[3].value<<user[3].suit<<endl;
    cout<<"Your Card #5:"<<user[4].value<<user[4].suit<<endl;
    //Display total
    cout<<"Card Total:"<<ttl<<endl;    
    }
    //Check if user got 21
    check21(ttl);
    bust(ttl);
}
//Functions for game
void tnks(){
    fstream tnks;
    string line;
    //Introduce file
        tnks.open("tnks.txt",ios::in);
        tnks.seekg(42,ios::beg);    
        getline(tnks,line);
        cout<<line;
        cout<<endl;
    //Close
        tnks.close();
   
}

void compare(int ttl, int sum){
    if(sum > 21){
        cout<<"You have won! The dealer went bust!"<<endl;
        cout<<"Dealer's Total:"<<sum<<endl;
        cout<<"Your Total:"<<ttl<<endl;
        tnks();
        exit(0);
    }
    if(sum > ttl){
        cout<<"You have Lost! The dealer hit higher then you!"<<endl;
        cout<<"Dealer's Total:"<<sum<<endl;
        cout<<"Your Total:"<<ttl<<endl;
        tnks();
        exit(0);
    }
    if(ttl > sum){
        cout<<"You have won! You hit higher than the dealer!"<<endl;
        cout<<"Dealer's Total:"<<sum<<endl;
        cout<<"Your Total:"<<ttl<<endl;
        tnks();
        exit(0);
    }
    if(ttl = sum){
        cout<<"Game is a tie/push"<<endl;
        cout<<"Dealer's Total:"<<sum<<endl;
        cout<<"Your Total:"<<ttl<<endl;
        tnks();
        exit(0);
    }
}

void bust(int ttl){
    if(ttl > 21){
        cout<<"You have just gone bust! try again next time."<<endl;
        exit(0);
    }
}

void check21(int ttl){
    if(ttl == 21){
        cout<<endl;
        cout<<"Congratz, You got 21!"<<endl;
        cout<<"    _____    __     _" <<endl;  
        cout<<"   / ___ `. /  |   | | "<<endl;
        cout<<"  |_/___) | `| |   | | "<<endl;
        cout<<"   .'____.'  | |   | | "<<endl;
        cout<<"  / /_____  _| |_  |_| "<<endl;
        cout<<"  |_______||_____| (_) "<<endl;
        cout<<"                       "<<endl;
        exit(0);

    }
}

string suit(){
    int a = rand()%4+1;
    string y;
    switch(a){
        case 1 : y = " of Diamonds"; return y; break;
        case 2 : y = " of Spades"; return y; break;
        case 3 : y = " of Clubs"; return y; break;
        case 4 : y = " of Hearts";return y; break;
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
/*******************************************************************************
*******************************************************************************/
void def(int inN){
        cout<<"You typed "<<inN<<" to exit the program"<<endl;
}