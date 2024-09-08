#ifndef __INCLUDE__H__
#define __INCLUDE__H__
#include <iostream>

class INT{
    private:
        int* ptr;
    public:
    /*<----------------CLASS CONSTRUCTORS------------->*/
        INT(){
            ptr = new int(0);
        }

        INT(int val){
            ptr = new int(val);
        }

        INT (const INT& nw){
            ptr = new int(*(nw.ptr));
        }


        INT (INT&& other){
            ptr = other.ptr;
            other.ptr = new int(0);
        }
        
        ~INT(){
            delete ptr;
        }
    /*<----------------CLASS CONSTRUCTORS------------->*/
        

        
        
        
        
    /*<----------------CLASS OPERATORS OVERLOADING------------->*/
        
        INT& operator=(const INT& other){
            if (this == &other){
                return *this;
            }
            delete ptr;
            ptr = new int(*other.ptr);
            return *this;  
        }

        INT& operator=(const INT&& other){
            if (this == &other){
                return *this;
            }
            delete ptr;
            
            ptr = new int(*other.ptr);

            *other.ptr = 0;
            return *this;  
        }

        INT operator+(const INT& other)const{
            return INT((*ptr) + (*other.ptr));
        }

        friend int operator+(int count, const INT& other){
            return count + (*other.ptr);
        }



        INT operator-(const INT& other)const{
            return INT((*ptr) - (*other.ptr));
        }

        friend int operator-(int count, const INT& other){
            return count - (*other.ptr);
        }



        INT operator*(const INT& other)const{
            return INT((*ptr) * (*other.ptr));
        }

        friend int operator*(int count, const INT& other){
            return count * (*other.ptr);
        }


        INT operator++(){
            (*ptr)++;
            return *this;
        }

        INT operator++(int){
            INT temp = *this;
            ++(*ptr);
            return *this;
        }


        INT operator--(){
            (*ptr)--;
            return *this;
        }

        INT operator--(int){
            INT temp = *this;
            --(*ptr);
            return *this;
        }



        bool operator>(const INT& other){
            return (*ptr)>(*other.ptr)?true:false;
        }

        bool operator!=(const INT& other){
            return (*ptr)!=(*other.ptr)?true:false;
        }

        
        friend std::istream& operator>>(std::istream& in, INT& coun){
            
            in >> (*coun.ptr);
            return in;
        }

        friend std::ostream& operator<<(std::ostream& out, const INT& coun){
            out << (*coun.ptr);
            return out;
        }
        /*<----------------CLASS OPERATORS OVERLOADING------------->*/



        /*<----------------CLASS SETTER, GETTER & DISPLAY------------->*/
        
        void SET_VAL(int newval){
                (*ptr) = newval;
        }

        int GET_VAL(){
            int val = (*ptr);
            return val;
        }

        void display(){
            std::cout << (*ptr) << std::endl;
        }
        /*<----------------CLASS SETTER, GETTER & DISPLAY------------->*/
};
#endif  //!__INCLUDE__H__