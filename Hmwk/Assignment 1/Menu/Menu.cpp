/* 
 * File: Menu for Chapter 9
 * Author: Jose Morales
 * Purpose: Include all programs for chapter 9
 * Created on September 24, 2016, 1:56 PM
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
void menu();
void prob1();
void prob2();
void arg(int*,int);
void mkSort(int*,int);
void prob3();
void argg(int*,int);
void mkSortt(int*,int);
void prob4();
void prob5();
int doSomething(int *, int *);
void prob6();
void arrSelectionSort(int *[], int);
void showArray(const int [], int);
void showArrPtr(int *[], int);
void prob7();
void prob8();
void arrSelectionSortt(int *[], int);
void prob9();


//Execution Begins Here
int main(int argc, char** argv) {
    //Declare the loop variable
    char choice;
    //General Menu Format
    do{
        //Display the selection
        menu();
        //Read the choice
        cin>>choice;
        //Solve a problem that has been chosen.
        switch(choice){
                case 49 :prob1();break;
                case 50 :prob2();break;
                case 51 :prob3();break;
                case 52 :prob4();break;
                case 53 :prob5();break;
                case 54 :prob6();break;
                case 55 :prob7();break;
                case 56 :prob8();break;
                case 57 :prob9();break;
                
                default:{
                        cout<<"Exit?"<<endl;
                }
        };
    }while(choice<='9');
    
    //Exit stage right
    return 0;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/**************************** Menu *********************************************
 *Inputs
 *      None
 *Outputs
 *      None
*/
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
void menu(){
    cout<<"Type 1 to solve Gaddis_8thEd_Chap9_Prob1"<<endl;
    cout<<"Type 2 to solve Gaddis_8thEd_Chap9_Prob2"<<endl;
    cout<<"Type 3 to solve Gaddis_8thEd_Chap9_Prob3"<<endl;
    cout<<"Type 4 to solve Gaddis_8thEd_Chap9_Prob4"<<endl;
    cout<<"Type 5 to solve Gaddis_8thEd_Chap9_Prob5"<<endl;
    cout<<"Type 6 to solve Gaddis_8thEd_Chap9_Prob6"<<endl;
    cout<<"Type 7 to solve Gaddis_8thEd_Chap9_Prob10"<<endl;
    cout<<"Type 8 to solve Gaddis_8thEd_Chap9_Prob7"<<endl;
    cout<<"Type 9 to solve Median,Mode,Range"<<endl; 
    cout<<"Type a letter to quit with no solutions."<<endl;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/**************************** Problem 1 ****************************************
 *Inputs
 *      None
 *Outputs
 *      None
*/
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
void prob1(){
    //Declare Variables
    int NUM, *a, *pnt;
    
    //Introduce the input for the user.
    cout<<"Enter the size of the array here:";
    cin>>NUM;
    
    //Introduce the pointer
    a = new int [NUM];
    
    //Add the number into the array the user inputed.
    for(int c = 0; c < NUM; c++){
        cout<<"Enter Number "<<c+1<<":";
        cin>>*(a+c);
    }
    pnt = a;
    
    //Display the allocated array to the user.
    cout<<endl;
    cout<<"Array Allocation Done"<<endl;
    for(int c = 0; c < NUM; c++){
        cout<<*(pnt+c)<<" ";
    }
    cout<<endl;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/****************************** Problem 2 **************************************
 *Inputs
 *      None
 *Outputs
 *      None
*/
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
void prob2(){
//Declare Variables
    int numTest, *ar, *point;  
    //Introduce the input for the user.
    cout<<"Enter the number of tests:";
    cin>>numTest;  
    //Introduce the pointer
    ar = new int [numTest];   
    //Add the number into the array the user inputed.
    for(int c = 0; c < numTest; c++){
        cout<<"Test "<<c+1<<":";
        cin>>*(ar+c);
    }
    point = ar;   
    //Display the allocated array to the user.
    cout<<"Test scores in original order"<<endl;
    for(int c = 0; c < numTest; c++){
        cout<<*(point+c)<<" ";
    }
    //Sorted
    cout<<endl;
    cout<<"Test Scores sorted"<<endl;
    mkSort(ar,numTest);  
    //Average the numbers
    cout<<endl;
    cout<<"Average:";
    arg(ar,numTest); 
    //Delete
    delete [] ar;
}
void arg(int *ar,int numTest){
    float avg = 0;
    for(int c = 0; c < numTest; c++){
        avg += *(ar+c);
    }
    avg/=numTest;
    cout<<avg<<endl;
}
void mkSort(int *ar,int numTest){
    for(int i=0;i<numTest-1;i++){
        for(int j=i+1;j<numTest;j++){
            if(*(ar+i) > *(ar+j)){
                *(ar+i) = *(ar+i)^*(ar+j);
                *(ar+j) = *(ar+i)^*(ar+j);
                *(ar+i) = *(ar+i)^*(ar+j);
            }
        }
    }
    //Display
    for(int c = 0; c < numTest; c++){
        cout<<*(ar+c)<<" ";
    }
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/******************************* Problem 3 *************************************
 *Inputs
 *      None
 *Outputs
 *      None
*/
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
void prob3(){
 //Declare Variables
    int numTest, *ar, *point;  
    //Introduce the input for the user.
    cout<<"Enter the number of tests:";
    cin>>numTest;  
    //Introduce the pointer
    ar = new int [numTest];   
    //Add the number into the array the user inputed.
    for(int c = 0; c < numTest; c++){
        cout<<"Test "<<c+1<<":";
        cin>>*(ar+c);
    }
    point = ar;   
    //Display the allocated array to the user.
    cout<<"Test scores in original order"<<endl;
    for(int c = 0; c < numTest; c++){
        cout<<*(point+c)<<" ";
    }
    //Sorted
    cout<<endl;
    cout<<"Test Scores sorted"<<endl;
    mkSortt(ar,numTest);  
    //Average the numbers
    cout<<endl;
    cout<<"Average:";
    arg(ar,numTest); 
    //Delete
    delete [] ar;
}
void argg(int *ar,int numTest){
    float avg = 0;
    for(int c = 0; c < numTest; c++){
        avg += *(ar+c);
    }
    avg/=numTest-1;
    cout<<avg;
}
void mkSortt(int *ar,int numTest){
    for(int i=0;i<numTest-1;i++){
        for(int j=i+1;j<numTest;j++){
            if(*(ar+i) > *(ar+j)){
                *(ar+i) = *(ar+i)^*(ar+j);
                *(ar+j) = *(ar+i)^*(ar+j);
                *(ar+i) = *(ar+i)^*(ar+j);
            }
        }
    }
    //Display
    for(int c = 0; c < numTest-1; c++){
        cout<<*(ar+c)<<" ";
    }
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/******************************* Problem 4 *************************************
 *Inputs
 *      None
 *Outputs
 *      None
*/
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
void prob4(){
    
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/******************************* Problem 5 *************************************
 *Inputs
 *      None
 *Outputs
 *      None
*/
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
void prob5(){
//Declare Variables
    int x = 10;
    int y = 15; 
    int z;
    
    int *pntrX = &x;
    int *pntrY = &y;
    
    //Introduce the values of the pointers before the change
    cout<<"Here is the value of the pointer 'X' before:"<<*pntrX<<endl;
    cout<<"Here is the value of the pointer 'Y' before:"<<*pntrY<<endl;
    cout<<endl;
    
    //Introduce the function here.
    z = doSomething(pntrX,pntrY);
    
    //Change up the values with changed function.
    cout<<"Here is the value of the pointer 'X' after:"<<*pntrX<<endl;
    cout<<"Here is the value of the pointer 'Y' after:"<<*pntrY<<endl;
    cout<<"Total of Z:"<<z<<endl;    
}
int doSomething(int *x, int *y){
    int temp = *x;
    *x = *y * 10;
    *y = temp * 10;
    return *x + *y;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/******************************* Problem 6 *************************************
 *Inputs
 *      None
 *Outputs
 *      None
*/
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
void prob6(){
//Declare Variables
    const int NUM_DONATIONS = 15; //Number of donations 
    //Here is the array from 9-19
    int donations[NUM_DONATIONS] = {5,100,5,25,10,
                                    5,25,5,5,100,
                                    10,15,10,5,10};
    //array of pointers to int
    int *arrPtr[NUM_DONATIONS] = {nullptr,nullptr,nullptr,nullptr,nullptr,
                                   nullptr,nullptr,nullptr,nullptr,nullptr,
                                   nullptr,nullptr,nullptr,nullptr,nullptr}; 
    //Each element of arrPtr is a pointer to int. Make each element point to an
    //elements in the donation array.
    for(int count = 0; count < NUM_DONATIONS; count++){
        arrPtr[count] = &donations[count];
    }   
    //Sort the elements of the array of the pointers
    arrSelectionSort(arrPtr, NUM_DONATIONS);  
    //Display the donations using pointers
    cout<<"Donations, sorted in acending order are:"<<endl;
    showArrPtr(arrPtr,NUM_DONATIONS);
    cout<<endl;
    //Display donation in original order
    cout<<"Donations, back in the original order:"<<endl;
    showArray(donations, NUM_DONATIONS);  
    cout<<endl;
}
void arrSelectionSort(int *arr[], int size){
    int startScan, minIndex;
    int *minElem; 
    for(startScan = 0; startScan < (size - 1); startScan++){
        minIndex = startScan;
        minElem = arr[startScan];
        for(int index = startScan + 1; index < size; index++){
            if(*arr[index] < *minElem){
                minElem = arr[index];
                minIndex = index;
            }
        }
    arr[minIndex] = arr[startScan];
    arr[startScan] = minElem;    
    }
} 
void showArray(const int arr[], int size){
    for(int count = 0; count < size; count++ ){
        cout<<arr[count]<<" ";
        
    }    
}
void showArrPtr(int *arr[], int size){
    for(int count  = 0; count < size; count++){
        cout<<*(arr[count])<<" ";       
    }
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/******************************* Problem 7 *************************************
 *Inputs
 *      None
 *Outputs
 *      None
*/
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
void prob7(){
//Declare Variables
    const int SIZE = 12;
    int set[SIZE] = {1,3,5,9,11,13,15,17,19,21,23,25};
    int *num = set;
    
    //Display the numbers before reversing the order.
    cout<<"Number before the reversal:"<<endl;
    cout<<*num<<" ";
    while(num < &set[11]){
        num++;
        cout<<*num<<" ";
    }
    cout<<endl;
    
    //Display the number after the reversal from the order.
    cout<<"Number after the reversal:"<<endl;
    while(num > set){
        num--;
        cout<<*num<<" ";
    }    
    cout<<endl;    
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/******************************* Problem 8 *************************************
 *Inputs
 *      None
 *Outputs
 *      None
*/
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
void prob8(){
 //Declare Variables
    const int NUM_DONATIONS = 15; //Number of donations
    
    //Here is the array from 9-19
    int donations[NUM_DONATIONS] = {5,100,5,25,10,
                                    5,25,5,5,100,
                                    10,15,10,5,10};
    //array of pointers to int
    int *arrPtr[NUM_DONATIONS] = {nullptr,nullptr,nullptr,nullptr,nullptr,
                                   nullptr,nullptr,nullptr,nullptr,nullptr,
                                   nullptr,nullptr,nullptr,nullptr,nullptr};
    
    //Each element of arrPtr is a pointer to int. Make each element point to an
    //elements in the donation array.
    for(int count = 0; count < NUM_DONATIONS; count++){
        arrPtr[count] = &donations[count];
    }
    
    //Sort the elements of the array of the pointers
    arrSelectionSortt(arrPtr, NUM_DONATIONS);
    
    //Display the donations using pointers
    cout<<"Donations, sorted in decending order are:"<<endl;
    showArrPtr(arrPtr,NUM_DONATIONS);
    cout<<endl;
    //Display donation in original order
    cout<<"Donations, back in the original order:"<<endl;
    showArray(donations, NUM_DONATIONS);  
    cout<<endl;
}
void arrSelectionSortt(int *arr[], int size){
    int startScan, minIndex;
    int *minElem;
    
    for(startScan = 0; startScan < (size - 1); startScan++){
        minIndex = startScan;
        minElem = arr[startScan];
        for(int index = startScan + 1; index < size; index++){
            if(*arr[index] > *minElem){
                minElem = arr[index];
                minIndex = index;
            }
        }
    arr[minIndex] = arr[startScan];
    arr[startScan] = minElem;    
    }
} 
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/******************************* Problem 9 *************************************
 *Inputs
 *      None
 *Outputs
 *      None
*/
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
void prob9(){
    
}

