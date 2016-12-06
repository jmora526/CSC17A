/* 
 * File:   Absolute.h
 * Author: Jose Morales
 * Purpose:
 * Created on December 5, 2016, 11:59 PM
 */

#ifndef ABSOLUTE_H
#define ABSOLUTE_H

template<class T>
class Absolute{
    private:
        T Number;
    public:
        void setVal(T a){
            Number = a;
        }
        T getVal(){
            return Number;
        }
        T ChangeVal(){
            if(Number < 0){
                return -Number;
            }
            else{
                getVal();
            }
        }
};

#endif /* ABSOLUTE_H */

