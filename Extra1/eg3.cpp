/*
Pointer to Object
*/
#include <iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int width;
public:
    Rectangle(int l, int w) {
        length = l;
        width = w;
    }
    int area() {
        return length * width;
    }
};

int main() {
    Rectangle r1(10, 5); // create a Rectangle object
    Rectangle* ptr = &r1; // create a pointer to the Rectangle object

    cout << "Area of Rectangle r1: " << r1.area() << endl; // use the object directly
    cout << "Area of Rectangle pointed to by ptr: " << ptr->area() << endl; // use the object via the pointer

    return 0;
}
