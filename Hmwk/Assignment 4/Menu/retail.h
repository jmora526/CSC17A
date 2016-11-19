/* 
 * File: 
 * Author: Jose Morales
 * Purpose:
 * Created on November 16, 2016, 9:25 PM
 */

#ifndef RETAIL_H
#define RETAIL_H

class retail{
    private:
        string describe;
        int uHand;
        float price;
    public:
        retail();
        void setDes(string);
        void setUhand(int);
        void setPrice(float);
        string getDes();
        int getUhand();
        float getPrice();
};

#endif /* RETAIL_H */

