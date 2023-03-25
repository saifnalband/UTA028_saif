/*
virtual destructors
*/
#include <iostream>
using namespace std;

class Base{
 public:
	virtual ~Base() { cout << "Base destructor" << endl; }   // Destructor is not virtual
};

class Derived : public Base{
 public:
	 ~Derived() { cout << "Derived destructor" << endl; } // Non-virtual
};

int main(){
  Base* pb;					 // pb can point to objects of Base ans Derived
  pb = new Derived;		 // pb points to an oject of Derived
  delete pb;
  cout << "Program terminates" << endl;
  return 0;
}