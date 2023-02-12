/*
Global Friend Function With Multiple Classes
*/
#include <iostream>
using namespace std;
// Forward declaration so we can use it in the definition of friend function in the Rectangle class.
class Square;
// Creating a class named Rectangle.
class Rectangle{
private:
    // Make private data members, namely length and breadth.
    int length;
    int breadth;
public:
    // A member function to assign the private data member's values from the user.
    void set_values (int l, int b){
        length = l;
        breadth = b;
    }
    // Find the area of the rectangle.
    int area = length * breadth;
    // A global friend function which calculates the maximum area among the two shapes.
    friend void max_Area (Square, Rectangle); //friend function
};

// Creating a class named Square.
class Square
{
private:
    // Make private data member, namely side of the Square.
    int side;
public:
    // A member function to assign the private data member values from the user.
    void set_values (int s){
        side = s;
    }
    // Find the area of the Square.
    int area = side * side;
    // A global friend function which calculates the maximum area between the two shapes.
    friend void max_Area (Square, Rectangle); // Friend function
};

// A function to calculate whose area is larger among the Square and the rectangle.
void max_Area (Square s, Rectangle r){
    if ( s.area > r.area){
        cout << "The area of the Square is more than the area of the Rectangle";
    }
    else if ( s.area < r.area){
        cout << "The area of the Rectangle is more than the area of the Square";
    }
    else{
        cout << "The area of the Square is equal to the area of the Rectangle";
    }
}

// Main function
int main (){
    // Create an instance of the Square class.
    Square s;
    // Assign values to the instance s.
    s.set_values(10);
    // Create an instance of the Rectangle class.
    Rectangle r;
    // Assign values to the instance r.
    r.set_values(8, 9);
    // Call the global friend function to calculate whose area is greater.
    max_Area (s, r);
    return 0;
}
