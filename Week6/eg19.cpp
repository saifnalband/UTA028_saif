/*
polymorphism
*/
#include <iostream>
using namespace std;

class Square {
protected:
    double edge; // 8-byte
public:
    Square(double e) : edge(e) {}

    virtual double area() {
        cout << "Square::area" << endl;
        return (edge * edge);
    }
};
class Cube : public Square {
public:
    Cube(double e) : Square(e) {}

    double area() {
        cout << "Cube::area" << endl;
        return (6.0 * edge * edge);
    }
};
// RTTI: Run-Time Type Information
int main() {
    Square s(2.0);
    cout << sizeof(s) << endl;
    Cube c(2.0);
    Square *p;
    char input;
    cout << "Enter s for square, c for cube: ";
    cin >> input;
    if (input == 's')
        p = &s;
    else
        p= &c;
    cout << "Area :" << p->area() << endl;
    return 0;
}

