/*
Ambiguity Problem in Multiple Inheritance
*/
#include <iostream>  
using namespace std;  

// class A  
class A {  
    public:   
    void print() {  
        cout << "It is the (print) member function of class A" << endl;  
    }  
 };   
   
 // class B  
 class B {  
    public:   
    void print() {  
        cout << "It is the (print) member function of class B" << endl;  
    }  
 };  
   
   
 // Creating a Child class using multiple inheritance from base classes A and B. 
 class Child: public A, public B {  
    public:  
        void disp() {  
            cout << "It is the member function of the child class" << endl;  
        }  
 };  
   
 int main () {  
    // creating an object of the child class
    Child ch;  
    ch.print(); // Error!!  It causes ambiguity   
    ch.disp();  
    return 0;  
 }   
