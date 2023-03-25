/*
Multiple inheritence
*/
#include<iostream>
using namespace std;
class Base1 {
  public:
    float salary = 900;
};

class Base2 {
  public:
    float bonus = 100;
};

class Derived: public Base1, public Base2 {
  public: 
    void sum() {
      cout << "Your Total Salary is: " << (salary + bonus) << endl;
    }
};
int main() {
    
  // Creating an object of the derived class and calling the sum() function.
  Derived x;
  x.sum();
  return 0;
}
