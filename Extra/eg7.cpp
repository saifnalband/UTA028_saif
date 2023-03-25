/*
Write a C++ program that defines a class named "Employee" with private members
 "name", "age", and "salary" and a static member variable named "averageSalary".
  The class should have a default constructor and a parameterized constructor 
  that accepts values for all three members. 
  The class should also have a member function named "raiseSalary" that
   increases the salary by a certain percentage. 
   The program should create an object of the class using the 
   parameterized constructor and perform a salary raise using the 
   member function. The program should print the resulting salary 
   to the console using inline function and 
   also print the value of the "averageSalary" 
   to the console.
*/
#include <iostream>

using namespace std;

class Employee {
  private:
    string name;
    int age;
    double salary;
    static double averageSalary;

  public:
    Employee() {
      name = "Unknown";
      age = 0;
      salary = 0.0;
    }

    Employee(string empName, int empAge, double empSalary) {
      name = empName;
      age = empAge;
      salary = empSalary;
      averageSalary += empSalary;
    }

    void raiseSalary(double percentage) {
      salary *= (1.0 + percentage / 100.0);
      averageSalary *= (1.0 + percentage / 100.0);
    }

    static double getAverageSalary() {
      return averageSalary;
    }

    inline void printSalary() {
      cout << "Salary: Rupee:" << salary << endl;
    }
};

double Employee::averageSalary = 0.0;

int main() {
  Employee emp1("John Doe", 30, 50000.0);
  emp1.raiseSalary(10);
  emp1.printSalary();

  cout << "Average salary: Rupee:" << Employee::getAverageSalary() << endl;

  return 0;
}
