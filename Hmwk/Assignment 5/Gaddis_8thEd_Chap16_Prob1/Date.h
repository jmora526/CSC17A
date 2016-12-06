/* 
 * File:   Date.h
 * Author: Jose Morales
 * Purpose:
 * Created on December 5, 2016, 11:59 PM
 */

#ifndef DATE_H
#define DATE_H

class Date{
    private:
        int day;
        int month; 
        int year;
    public:
        class errDay{};
        class errMon{};
        void setDay(int);
        int getDay();
        void setMonth(int);
        int getMonth();
        void setYear(int);
        int getYear();
        void show1();
        void show2();
        void show3();
        
};

#endif /* DATE_H */

