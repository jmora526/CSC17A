/* 
 * File:   Time.h
 * Author: Jose Morales
 * Purpose:
 * Created on December 5, 2016, 11:59 PM
 */

#ifndef TIME_H
#define TIME_H

class Time{
    protected:
        int hr;
        int min;
        int sec;
    public:
        Time(){hr=0,min=0,sec=0;}
        Time(int h,int m,int s){hr=h,min=m,sec=s;}
        int getHr()const{return hr;}
        int getMin()const{return min;}
        int getSec()const{return sec;}
};

#endif /* TIME_H */

