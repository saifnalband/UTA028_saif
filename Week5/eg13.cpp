/*
Ambiguity Resolved Code:  using the scope resolution (::) operator
*/
#include <iostream>  
using namespace std;  

// class A  
class A {
    public: void print() {
        cout << "It is the (print) member function of class A" << endl;
    }
};

// class B  
class B {
    public: void print() {
        cout << "It is the (print) member function of class B" << endl;
    }
};

// Creating a Child class using multiple inheritance from base classes A and B. 
class Child: public A, public B {
    public: void disp() {
        cout << "It is the member function of the child class" << endl;
    }
};

int main() {
    // Creating an object of the child class.
    Child ch;
    ch.A::print(); // print() function of the base class A.
    ch.B::print(); // print() function of the base class B.
    ch.disp();
    return 0;
}
