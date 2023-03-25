#include<iostream>
using namespace std;

int area(int length) {
    // Function to return the area of a square.
    return length * length;
}

int area(int length, int breadth = 1) {
    // Here, breadth has a default value of 1.
    // If no value is passed corresponding to breadth in the function call,
    // breadth takes a value of 1
    return length * breadth;
}

int main() {
    // Function call to area().
    // Both function satisfies the called conditions,
    // area() with length = 10 or, 
    // area() with length = 10 and breadth = 1 (default)
    int area_ = area(10);
    cout<<"Area square(length = 10) = "<<area_<<endl;
    
    return 0;
}
