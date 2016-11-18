/* 
 * File:   empinfo.h
 * Author: Jose Morales
 *
 * Created on November 15, 2016, 6:25 PM
 */

#ifndef EMPINFO_H
#define EMPINFO_H

class employee{
    private:
        string name;
        int idNum;
        string depot;
        string posit;
    public:
        employee();
        void setName(string);
        void setNum(int);
        void setDepot(string);
        void setPosit(string);
        string getName();
        int getNum();
        string getDepot();
        string getPosit();
};

#endif /* EMPINFO_H */

