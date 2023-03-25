/*
an exmaple of virtual base class
*/
// This program uses virtual base classes.
#include <iostream>
using namespace std;
class base { 
public: 
    int i; 
};
// derived1 inherits base as virtual.
class derived1 : virtual public base {
public: 
    int j;
};
// derived2 inherits base as virtual.
class derived2 : virtual public base {
public: 
    int k; 
};
class derived3 : public derived1, public derived2 {
public: 
    int sum;
};
int main(){
    derived3 ob;
    ob.i = 10; // now unambiguous
    ob.j = 20;
    ob.k = 30;
    // unambiguous
    ob.sum = ob.i + ob.j + ob.k;
    // unambiguous
    cout << ob.i << " ";
    cout << ob.j << " " << ob.k << " ";
    cout << ob.sum;
    return 0;
}

