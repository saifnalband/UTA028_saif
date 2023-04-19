/*
Array of Pointers to objects
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
    Rectangle* rectPtr[3]; // declare an array of pointers to Rectangle objects
    rectPtr[0] = new Rectangle(10, 5); // create Rectangle objects and assign them to the array elements
    rectPtr[1] = new Rectangle(7, 3);
    rectPtr[2] = new Rectangle(4, 6);

    for (int i = 0; i < 3; i++) {
        cout << "Area of Rectangle " << i+1 << ": " << rectPtr[i]->area() << endl; // use the objects via the pointers
    }

    // deallocate the memory used by the objects
    for (int i = 0; i < 3; i++) {
        delete rectPtr[i];
    }

    return 0;
}
