/*
An example of Constructor and destructors
Employee, Deparment
*/
#include <iostream>
using namespace std;
class Department {
public:
    Department() {
      // Constructor is defined.
      cout << "Constructor Invoked for Department class" << endl;
    }    
    ~Department() {
      // Destructor is defined.
      cout << "Destructor Invoked for Department class" << endl;
    }
};
class Employee {
public:
    Employee() {
      // Constructor is defined.
      cout << "Constructor Invoked for Employee class" << endl;
    }    
    ~Employee() {
      // Destructor is defined.
      cout << "Destructor Invoked for Employee class" << endl;
    }
};
int main(void) {
    // Creating an object of Department.
    Department d1; 
    // Creating an object of Employee.
    Employee e2; 
    return 0;
} 
