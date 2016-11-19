/* 
 * File: 
 * Author: Jose Morales
 * Purpose:
 * Created on November 16, 2016, 9:25 PM
 */

#ifndef LANDTRAC_H
#define LANDTRAC_H

class landTrac{
    private:
        int len;
        int wid;
    public:
        landTrac();
        void setLen(int);
        void setWid(int);
        int getLen()const;
        int getWid()const;
        int getArea()const;
};

#endif /* LANDTRAC_H */

