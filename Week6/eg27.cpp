/*
an example of a pointer to an abstract class
*/
#include<iostream>
using namespace std;

class Base {
  public:
    virtual void print() = 0;
};

class Derived: public Base {
  public: 
    void print() {
      cout << "This is from the derived class \n";
    }
};

int main(void) {
  Base* basePointer = new Derived();
  basePointer -> print();
  return 0;
}
