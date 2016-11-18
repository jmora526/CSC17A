/* 
 * File: 
 * Author: Jose Morales
 * Purpose:
 * Created on November 16, 2016, 9:25 PM
 */

#ifndef DAYOFYEAR_H
#define DAYOFYEAR_H

class dayofyear{
    private:
        int day;
        string month;
        int num;
    public:
        dayofyear();
        void cal(int);
        void show(){cout<<month<<" "<<day;};
};

#endif /* DAYOFYEAR_H */

