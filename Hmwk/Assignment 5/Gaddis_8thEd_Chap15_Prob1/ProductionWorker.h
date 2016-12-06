/* 
 * File:   ProductionWorker.h
 * Author: Jose Morales
 * Purpose:
 * Created on December 5, 2016, 11:59 PM
 */

#ifndef PRODUCTIONWORKER_H
#define PRODUCTIONWORKER_H
#include "Employee.h"
class ProductionWorker:public Employee{
    protected:
        int shift;
        float rate;
    public:
        ProductionWorker();
        void setShift(int);
        int getShift();
        void setRate(float);
        float getRate();
};

#endif /* PRODUCTIONWORKER_H */

