/* 
 * File: 
 * Author: Jose Morales
 * Purpose:
 * Created on November 16, 2016, 9:25 PM
 */


//System Libraries
#include <iostream>
#include <string>
using namespace std;

//User Libraries
#include "retail.h"
//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    string describe;
    int uHand;
    float price;
    retail item1;
    retail item2;
    retail item3;
    
    //set values for item 1
    item1.setDes("Jacket");
    item1.setUhand(12);
    item1.setPrice(59.95);
    //set values for item 2
    item2.setDes("Designer Jeans");
    item2.setUhand(40);
    item2.setPrice(34.95);
    //set values for item 2
    item3.setDes("Shirt");
    item3.setUhand(20);
    item3.setPrice(24.95);    
    //Display
    cout<<"Description    Units On Hand   Price"<<endl;
    //Item 1
    cout<<item1.getDes()<<"               "<<item1.getUhand()<<"        ";
    cout<<item1.getPrice()<<" "<<endl;
    //Item 2
    cout<<item2.getDes()<<"       "<<item2.getUhand()<<"        ";
    cout<<item2.getPrice()<<" "<<endl;
    //Item 3
    cout<<item3.getDes()<<"                "<<item3.getUhand()<<"        ";
    cout<<item3.getPrice()<<" "<<endl;
    return 0;
}

