/*
A Method / Member Function of One Class as Friend of Another Class
*/
#include <iostream>
using namespace std;

// Forward declaration so that we can use it in the definition of friend function in the Area class.
class Rectangle;
// Creating a class named Area.
class Area{
public:
    // Member function to find the area.
    int find_Area (Rectangle&);
};

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
    // A member function is a friend function which calculates the area of the rectangle.
    friend int Area::find_Area (Rectangle &);   // Friend function
};

//Definition of the Area function.
int Area::find_Area(Rectangle& r){
    int area = r.length * r.breadth;
    return area;
}

// Main function
int main (){
    // Create an instance of the Rectangle class.
    Rectangle r;
    // Assign values to the instance r.
    r.set_values (8, 9);
    // Create an instance of the Rectangle class.
    Area a;
    // Calculating the area of the rectangle.
    //we declare it as a friend function and use the instance of the class Area to call the function.
    cout << "The area of the Rectangle is : " << a.find_Area (r);
    return 0;
}

