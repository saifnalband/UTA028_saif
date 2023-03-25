/*
an example of function overloading
*/
#include<iostream>
using namespace std;

int sum(int a, int b) {
    // Function 'sum' takes two integer numbers as parameters.
    cout<<"Performing integer sum"<<endl;
    return a + b;
}

double sum(double a, double b) {
    // This function sum takes two numbers of type double as parameters.
    cout<<"Performing floating sum"<<endl;
    return a + b;
}

int main() {
    // Creating function call to perform integer summation.
    int sum_1 = sum(5, 10);
    cout<<"5 + 10 = "<<sum_1<<endl;
    
    // Creating function call to perform floating-point summation.
    double sum_2 = sum(5.0, 10.1);
    cout<<"5.0 + 10.1 = "<<sum_2<<endl;
    
    return 0;
}

