/*
Assignement 6 : Problem 1
*/
#include <iostream>
using namespace std;

class Polygon {
protected:
    int width, height;
public:
    void set_value(int w, int h) {
        width = w;
        height = h;
    }
    virtual int calculate_area() {
        return 0;
    }
};

class Rectangle : public Polygon {
public:
    int calculate_area() {
        return width * height;
    }
};

class Triangle : public Polygon {
public:
    int calculate_area() {
        return (width * height) / 2;
    }
};

int main() {
    Polygon* p;
    Rectangle r;
    Triangle t;
    p = &r;
    p->set_value(5, 6);
    cout << "Pointer Rectangle area: " << p->calculate_area()<< endl;
    cout << "Rectangle area: " << r.calculate_area() << endl;
    p = &t;
    p->set_value(5, 6);
    cout << "Triangle area: " << t.calculate_area() << endl;
    return 0;
}
