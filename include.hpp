#ifndef __INCLUDE__H__
#define __INCLUDE__H__
#include <iostream>

class INT{
    private:
        int* ptr;
    public:
        INT(): ptr(nullptr){}

        INT(int val){
            ptr = new int(val);
        }

        INT (const INT& nw){
            ptr = new int(*(nw.ptr));
        }


        INT (INT&& other){
            ptr = other.ptr;
            other.ptr = nullptr;
        }
        
        ~INT(){
            delete ptr;
        }
        
        
        
        
        
        
        
        
        
        
        
        
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
};
#endif  //!__INCLUDE__H__