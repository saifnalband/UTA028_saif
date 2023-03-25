/*
Hierarchical Inheritance in C++:
*/
#include<iostream>
using namespace std;
class Single_base_class {
  public:
    int x, y;
    void data() {
      cout << "\nEnter the value of x and y ->\n";
      cin >> x >> y;
    }
};
// Class derived1 is derived from single_base_class.
class Derived1: public Single_base_class {
  public: 
    void product() {
      cout << "\nThe Product is= " << x * y;
    }
};

// Class derived1 is also derived from class single_base_class.
class Derived2: public Single_base_class {
  public: 
    void sum() {
      cout << "\nThe Sum is= " << x + y;
    }
};
int main() {
    
  // Creating objects of both classes and calling functions on them.
  Derived1 obj1;
  Derived2 obj2;
  obj1.data();
  obj1.product();
  obj2.data();
  obj2.sum();
  return 0;
}
