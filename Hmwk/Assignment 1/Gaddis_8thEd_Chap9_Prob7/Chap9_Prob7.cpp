/* 
 * File: Case Modification # 2 
 * Author: Jose Morales
 * Purpose: Temp for all the programs
 * Created on September 22, 2016, 1:04 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//Global Constants

//Function Prototypes
void arrSelectionSortt(int *[], int);
void showArray(const int [], int);
void showArrPtr(int *[], int);
//Execution Begins Here
int main(int argc, char** argv) {
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
    return 0;
}
//Functions here
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

