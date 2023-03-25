/*
Multilevel Inheritance in C++:
*/
#include<iostream>
using namespace std;
class BaseClass {
  public:
    void print() {
      cout << "This is an example of Multilevel Inheritance";
    }
};

class DerivedClass: public BaseClass {};

// Here class is derived from another derived class.
class DerivedClass2: public DerivedClass {};

int main() {
  DerivedClass2 Obj;
  Obj.print();
  return 0;
}
