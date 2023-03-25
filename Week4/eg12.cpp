/*
an example of this pointer
*/
#include<iostream>

using namespace std;

/*
 * Class - Employee
 * data members - name, age, salary
 * class methods - incrementSalary, display
 */
class Employee {
    private:
        // Private data members.
        string name;
        double salary;
        int age;
    public:
        Employee (string n, int a, double s) {
            // Class constructor.
            name = n;
            age = a;
            salary = s;
        }

        void incrementSalary (double percentage) {
            // Current salary of an employee is this->salary.
            int current_salary = this->salary;
            //int current_salary = salary;
            int increment_amount = current_salary * (percentage/100);
            // Update the salary using this pointer.
            this->salary = current_salary + increment_amount;
        }

        void display () {
            // Display values of data members using this pointer.
            cout<<"Employee Name: "<<this->name<<endl;
            // int current_salary = (*this).salary
            cout<<"Employee Age: "<<this->age<<endl;
            cout<<"Employee Salary: "<<this->salary<<endl;
        }
};

int main () {
    // Create two objects emp_1 and emp_2 of class Employee.
    Employee emp_1 = Employee ("Ronaldo", 37, 10000);
    Employee emp_2 = Employee ("Messi", 35, 10000);
    
    int percentage_increment = 10; // 10%
    // Increment salary of employee 1.
    emp_1.incrementSalary(percentage_increment); 
    // Converts into
    // incrementSalary(&emp_1, percentage_increment);
    
    // Display values of data members of objects of class Employee. 
    emp_1.display();
    cout<<"------\n";
    emp_2.display();

    return 0;
}
