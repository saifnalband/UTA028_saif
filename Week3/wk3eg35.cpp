/*
An example of Dynamic Contructor
Employee
*/
#include <iostream>
using namespace std;

class Employee {
    int* due_projects;
public:
    // Default constructor.
    Employee() {
    // Allocating memory at run time.
        due_projects = new int;
        *due_projects = 0;
    }
    // Parameterized constructor.
    Employee(int x) {
        due_projects = new int;
        *due_projects = x;
    }    
    void display() {
        cout << *due_projects << endl;
    }
};

//main function 
int main() {
    // Default constructor would be called.
    Employee employee1 = Employee();
    cout << "Due projects for employee1:\n";
    employee1.display();
    // Parameterized constructor would be called.
    Employee employee2 = Employee(10);
    cout << "Due projects for employee2:\n";
    employee2.display();
    return 0;
}
