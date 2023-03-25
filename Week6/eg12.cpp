/*
function overloading 1
*/
#include <iostream>
#define PI 3.14
int area(int a) {
    // Calculates the area of a square.
    // Function takes one integer parameter.
    return a * a;
}
int area(int a, int b) {
    // Calculates the area of a rectangle.
    // Function takes two integer parameters.
    return a * b;
}
double area(float radius) {
    // Calculates the area of a circle.
    // Function takes one floating-point parameter.
    return PI * radius * radius;
}
int main() {
    int length = 5, breadth = 10;
    float radius = 10.5;
    
    // Calling function area with different arguments.
    int area_square = area(length);
    double area_circle = area(radius);
    int area_rectangle = area(length, breadth);
    
    printf("Area of square (length = %d) = %d\n", length,  area_square);
    printf("Area of rectangle (length = %d, breadth = %d) = %d\n", length, breadth,  area_rectangle);
    printf("Area of circle (length = %.2f) = %lf\n", radius,  area_circle);
    
    return 0;
}
