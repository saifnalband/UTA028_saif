#include <iostream>
using namespace std;
class Point { // Declaration of Point Class
    int x,y; // Properties: x and y coordinates
    public: // We will discuss it later
    void move(int, int); // A function to move the points
    void print(); // to print the coordinates on the screen
    bool is_zero(); // is the point on the zero point(0,0)
};
// A function to move the points
void Point::move(int new_x, int new_y) {
    x = new_x; // assigns new value to x coordinate
    y = new_y; // assigns new value to y coordinate
}
// To print the coordinates on the screen
void Point::print() {
    cout << "X= " << x << ", Y= " << y << endl;
}
// is the point on the zero point(0,0)
bool Point::is_zero() {
    return (x == 0) && (y == 0); // if x=0 & y=0 returns true
}
int main() {
    Point point1, point2; // 2 object are defined: point1 and point2
    point1.move(100,50); // point1 moves to (100,50)
    point1.print(); // point1's coordinates to the screen
    point1.move(20,65); // point1 moves to (20,65)
    point1.print(); // point1's coordinates to the screen
    if( point1.is_zero() ) // is point1 on (0,0)?
        cout << "point1 is now on zero point(0,0)" << endl;
    else cout << "point1 is NOT on zero point(0,0)" << endl;
        point2.move(0,0); // point2 moves to (0,0)
    if( point2.is_zero() ) // is point2 on (0,0)?
        cout << "point2 is now on zero point(0,0)" << endl;
    else cout << "point2 is NOT on zero point(0,0)" << endl;
    return 0;
}
