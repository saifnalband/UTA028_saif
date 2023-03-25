/*
an example of contructors in inheritance
*/
#include<iostream>
using namespace std;
//base class
class base {
public:
    base() { 
        cout << "Constructing base\n";
    }
    ~base(){
        cout << "Destructing base\n";
    }
};
//derived class
class derived: public base {
public:
    derived() {
        cout << "Constructing derived\n"; 
    }
    ~derived() {
        cout << "Destructing derived\n";
    }
};
int main(){
    derived ob;
    // do nothing but construct and destruct ob
    return 0;
}
