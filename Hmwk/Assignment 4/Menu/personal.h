/* 
 * File: 
 * Author: Jose Morales
 * Purpose:
 * Created on November 15, 2016, 9:25 PM
 */

#ifndef PERSONAL_H
#define PERSONAL_H

class perInfo{
    private:
        string name;
        string address;
        int age;
        int phone;
    public:
        perInfo();
        void setName(string);
        void setAdd(string);
        void setAge(int);
        void setPhone(int);
        string getName();
        string getAdd();
        int getAge();
        int getPhone();
};

#endif /* PERSONAL_H */

