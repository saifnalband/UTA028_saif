/*
Questions

Write a C++ program that defines a class named "Car" 
with private members "make", "model", and "year". 
The class should have a default constructor and 
a parameterized constructor that accepts values for all three members. 
The program should create an object of the class using each constructor 
and print the make, model, and year of the car to the console using 
inline function. 
*/
#include <iostream>
using namespace std;

class Car {
    private:
        string make;
        string model;
        int year;
    public:
        Car() {
            make = "Unknown";
            model = "Unknown";
            year = 0;
        }
        Car(string m, string mdl, int y) {
            make = m;
            model = mdl;
            year = y;
        }
        inline void printMake() {
            cout << "Make: " << make << endl;
        }
        inline void printModel() {
            cout << "Model: " << model << endl;
        }
        inline void printYear() {
            cout << "Year: " << year << endl;
        }
};

int main() {
    Car car1;
    Car car2("Ford", "Mustang", 2021);

    car1.printMake();
    car1.printModel();
    car1.printYear();

    car2.printMake();
    car2.printModel();
    car2.printYear();

    return 0;
}
