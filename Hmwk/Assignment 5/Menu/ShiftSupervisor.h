/* 
 * File:   ShiftSupervisor.h
 * Author: Jose Morales
 * Purpose:
 * Created on December 5, 2016, 11:59 PM
 */

#ifndef SHIFTSUPERVISOR_H
#define SHIFTSUPERVISOR_H
#include "Employee.h"

class ShiftSupervisor:public Employee{
    protected:
        float sal;
        float bonus;
    public:
        ShiftSupervisor();
        void setSal(float);
        float getSal();
        void setBonus(float);
        float getBonus();
};

#endif /* SHIFTSUPERVISOR_H */

