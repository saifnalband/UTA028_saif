/*
Diamond Problem:

Here, you can see that the superclass is called two times
 because of the diamond problem.
*/
#include<iostream>
using namespace std;
class Superclass { // class SuperClass
public:
    Superclass(int x)  { cout << "Superclass called" << endl; }
};
 
class ClassA : public Superclass { // class ClassA inherits Superclass.
public:
    ClassA(int x):Superclass(x)   {
       cout << "ClassA called" << endl;
    }
};
 
class ClassB : public Superclass { // class ClassB inherits Superclass.
public:
    ClassB(int x):Superclass(x) {
        cout << "ClassB called" << endl;
    }
};
 
class ClassC : public ClassA, public ClassB  { //ClassC inherits ClassA and ClassB
public:
    ClassC(int x):ClassB(x), ClassA(x)   {
        cout << "ClassC called" << endl;
    }
};
 
int main() {
    ClassC classC(30);
}

