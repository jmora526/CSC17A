/* 
 * File: 
 * Author: Jose Morales
 * Purpose:
 * Created on November 16, 2016, 9:25 PM
 */

#ifndef DOYEAR_H
#define DOYEAR_H

class doYear{
    private:
        int date;
        string month;
    public:
        doYear(int,string);
        void setDay(int);
        void setMonth(string);
        int getDay();
        string getMonth();
        void show(int,string);
    
};

#endif /* DOYEAR_H */

