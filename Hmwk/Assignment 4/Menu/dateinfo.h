/* 
 * File:   dateinfo.h
 * Author: Jose Morales
 *
 * Created on November 15, 2016, 5:25 PM
 */

#ifndef DATEINFO_H
#define DATEINFO_H

class date{
    private:
        int day;
        int month;
        int year;
    public:
        void setDate(int);
        void setMonth(int);
        void setYear(int);
        int getDate();
        int getMonth();
        int getYear();
        void showMon();
        void display();
};

#endif /* DATEINFO_H */

