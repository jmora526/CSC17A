/* 
 * File: Employee Class
 * Author: Jose Morales
 * Purpose:
 * Created on November 15, 2016, 6:25 PM
 */

//System Libraries
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//User Libraries
#include "empinfo.h"
//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    employee worker1;
    employee worker2;
    employee worker3;
    string name;
    int idNum;
    string depot;
    string posit;
    
    //Input set data for worker one.
    worker1.setName("Susan Meyers");
    worker1.setNum(47899);
    worker1.setDepot("Accounting");
    worker1.setPosit("Vice President");
    //Input set data for worker two.
    worker2.setName("Mark Jones");
    worker2.setNum(39119);
    worker2.setDepot("IT");
    worker2.setPosit("Programmer");
    //Input set data for worker three.
    worker3.setName("Joy Rogers");
    worker3.setNum(81774);
    worker3.setDepot("Manufacturing");
    worker3.setPosit("Engineer");
    //Display
    cout<<"Name         ID     Department     Position"<<endl;
    //Worker 1
    cout<<worker1.getName()<<" "<<worker1.getNum()<<"  "<<worker1.getDepot();
    cout<<"     "<<worker1.getPosit()<<endl;
    //Worker 2
    cout<<worker2.getName()<<"   "<<worker2.getNum()<<"  "<<worker2.getDepot();
    cout<<"             "<<worker2.getPosit()<<endl;
    //Worker 3
    cout<<worker3.getName()<<"   "<<worker3.getNum()<<"  "<<worker3.getDepot();
    cout<<"  "<<worker3.getPosit()<<endl;
    return 0;
}


