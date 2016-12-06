/* 
 * File:   MilTime.h
 * Author: Jose Morales
 * Purpose:
 * Created on December 5, 2016, 11:59 PM
 */

#ifndef MILTIME_H
#define MILTIME_H
#include "Time.h"

class MilTime:public Time{
    private:
        int milHours;
        int milSeconds;
    public:
        MilTime(){milHours = 0,milSeconds = 0;};
        void setTime(int,int);
        int getMilHr(){return milHours;};
        int getMilSec(){return milSeconds;}
};

#endif /* MILTIME_H */

