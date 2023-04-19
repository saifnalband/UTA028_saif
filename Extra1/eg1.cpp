/*
Assignment 6: Question 2
*/
#include <iostream>
#include <cmath>

using namespace std;

class Shape {
protected:
    string name;
public:
    Shape(string n) {
        name = n;
    }
    virtual double area() = 0;
    virtual void display() {
        cout << "Name: " << name << endl;
    }
};

class Circle : public Shape {
private:
    double radius;
public:
    Circle(string n, double r) : Shape(n) {
        radius = r;
    }
    double area() {
        return M_PI * radius * radius;
    }
    void display() {
        Shape::display();
        cout << "Radius: " << radius << endl;
    }
};

class Rectangle : public Shape {
private:
    double length, width;
public:
    Rectangle(string n, double l, double w) : Shape(n) {
        length = l;
        width = w;
    }
    double area() {
        return length * width;
    }
    void display() {
        Shape::display();
        cout << "Length: " << length << endl;
        cout << "Width: " << width << endl;
    }
};

class Triangle : public Shape {
private:
    double base, height;
public:
    Triangle(string n, double b, double h) : Shape(n) {
        base = b;
        height = h;
    }
    double area() {
        return 0.5 * base * height;
    }
    void display() {
        Shape::display();
        cout << "Base: " << base << endl;
        cout << "Height: " << height << endl;
    }
};

int main() {
    Shape* shapes[3];
    shapes[0] = new Circle("Circle", 2.5);
    shapes[1] = new Rectangle("Rectangle", 3.0, 4.0);
    shapes[2] = new Triangle("Triangle", 5.0, 2.0);
    for (int i = 0; i < 3; i++) {
        shapes[i]->display();
        cout << "Area: " << shapes[i]->area() << endl;
        cout << endl;
    }
    return 0;
}
