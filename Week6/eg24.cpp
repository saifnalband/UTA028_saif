/*
an example of pure virtual function

Keep in mind that when a virtual function is declared as pure,
all derived classes
must override it. If a derived class fails to do this, 
a compile-time error will result
*/
#include <iostream>
using namespace std;
class number {
protected:
    int val;
public:
    void setval(int i) { 
        val = i; 
    }
    // show() is a pure virtual function
    virtual void show() = 0;
};

class hextype : public number {
public:
    void show() {
        cout << hex << val << "\n";
    }
};

class dectype : public number {
public:
    void show() {
        cout << val << "\n";
    }
};

class octtype : public number {
public:
    void show() {
        cout << oct << val << "\n";
    }
};
int main(){
    dectype d;
    hextype h;
    octtype o;
    d.setval(20);
    d.show(); // displays 20 - decimal
    h.setval(20);
    h.show(); // displays 14 - hexadecimal
    o.setval(20);
    o.show();  // displays 24 - octal
    return 0;
}