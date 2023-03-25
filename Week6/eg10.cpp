/*
This program uses explicit scope resolution to select i.
*/
#include <iostream>
using namespace std;
class base { 
public: 
    int i; 
};
// derived1 inherits base.
class derived1 : public base {
public: 
    int j; 
};
// derived2 inherits base.
class derived2 : public base {
public: 
    int k; 
};
class derived3 : public derived1, public derived2 {
public: 
    int sum; 
};
int main(){
    derived3 ob;
    ob.derived1::i = 10; // scope resolved, use derived1's i
    ob.j = 20;
    ob.k = 30;
    // scope resolved
    ob.sum = ob.derived1::i + ob.j + ob.k;
    // also resolved here
    cout << ob.derived1::i << " ";
    cout << ob.j << " " << ob.k << " ";
    cout << ob.sum;
    return 0; 
}

