/*
Deleting this pointer
*/
#include<iostream>
using namespace std;
class Foo {
    private:
        int member;
    public:
        Foo (int member) {
            // constructor
            this->member = member;
        }
        void bar () {
            cout<<"member = "<<this->member;
        }
        void displayText () {
            cout<<"Not accessing any member variable";
        }
        void destroy() {
            // deleting this pointer using 
            // keyword delete
            delete this;
        } 
};

int main () {
    // Creating object of type Foo.
    Foo *ptr = new Foo(5);
    // Delete this pointer.
    ptr->destroy();
    // Accessing member function after this is destroyed.
    ptr->displayText(); // dangling pointer if bar() is called again.
    return 0;
}
