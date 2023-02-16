/*
An example of Copy Constructor
Employee
*/
#include<iostream>
using namespace std;

class Employee {
private:
    // Data members
    int salary, experience; 

public:
    // Parameterized constructor
    Employee(int x1, int y1) { 
      salary = x1;
      experience = y1;
    }

    // Copy constructor
    Employee(Employee &new_employee) {
      salary = new_employee.salary;
      experience = new_employee.experience;
    }

    void display() {
      cout << "Salary: " << salary << endl;
      cout << "Years of experience: " << experience << endl;
    }
};

// main function 
int main() {
    // Parameterized constructor
    Employee employee1(34000, 2); 
    // Copy constructor
    Employee employee2 = employee1; 
    cout << "Employee1 using parameterized constructor : \n";
    employee1.display();
    cout << "Employee2 using copy constructor : \n";
    employee2.display();
    return 0;
}
