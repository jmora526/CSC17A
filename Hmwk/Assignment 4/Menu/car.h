/* 
 * File: 
 * Author: Jose Morales
 * Purpose:
 * Created on November 15, 2016, 8:25 PM
 */

#ifndef CAR_H
#define CAR_H

class car {
    private:
        int yearMod;
        string make;
        int speed;
    public:
        car();
        void setYear(int);
        void setMake(string);
        int getYear();
        string getMake();
        int access();
        int brake();
};

#endif /* CAR_H */

