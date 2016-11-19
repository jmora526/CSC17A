/* 
 * File: 
 * Author: Jose Morales
 * Purpose:
 * Created on November 16, 2016, 9:25 PM
 */

#ifndef NUMDAYS_H
#define NUMDAYS_H

class numDays{
    private:
        float hrs;
    public:
        numDays();
        void setHour(float);
        float getHour()const;
        float getDay()const;
        numDays operator +(const numDays&);
        numDays operator -(const numDays&);
        numDays operator ++(int);
        numDays operator ++();
        numDays operator --(int);
        numDays operator --();
};

#endif /* NUMDAYS_H */

