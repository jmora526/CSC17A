/* 
 * File:   Employee.h
 * Author: Jose Morales
 * Purpose:
 * Created on December 5, 2016, 11:59 PM
 */

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

class Employee{
    private:
        string name;
        int number;
        int dHired;
    public:
        Employee();
        void setName(string);
        string getName();
        void setNumber(int);
        int getNumber();
        void setHired(int);
        int getHired();
};


#endif /* EMPLOYEE_H */

