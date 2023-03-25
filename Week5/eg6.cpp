/*
When a derived class is used as a base class for another derived class, 
any protectedmember of the initial base class that is inherited 
(as public) by the first derived class
may also be inherited as protected again by a second derived class. 
For example, this program is correct, 
and derived2 does indeed have access to i and j.
*/
#include <iostream>
using namespace std;

class base {
protected:
    int i, j;
public:
    void set(int a, int b) { i=a; j=b; }
    void show() { cout << i << " " << j << "\n"; }
};

// i and j inherited as protected.
class derived1 : public base {
    int k;
public:
    void setk() { k = i*j; } // legal
    void showk() { cout << k << "\n"; }
};

// i and j inherited indirectly through derived1.
class derived2 : public derived1 {
    int m;
public:
    void setm() { m = i-j; } // legal
    void showm() { cout << m << "\n"; }
};

int main(){
    derived1 ob1;
    derived2 ob2;
    ob1.set(2, 3);
    ob1.show();
    ob1.setk();
    ob1.showk();
    ob2.set(3, 4);
    ob2.show();
    ob2.setk();
    ob2.setm();
    ob2.showk();
    ob2.showm();
    return 0;
}
