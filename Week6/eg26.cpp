/*
pure virtual function
*/
#include<iostream>
using namespace std;
// Shape class.
class Shape {
public:    
      // Function to calculate the parameter, 
      //declared as pure virtual,
      // so all the derived classes necessarily need to implement this.
      virtual int perimeter() = 0;
      void width(int w) {
          shape_width = w;
      }
      void height(int h) {
          shape_height = h;
      }
  protected:
      int shape_width;
      int shape_height;
};
class Rectangle: public Shape {
public: 
      // Class Rectangle provided implementation of perimeter() function.
      int perimeter() {
          return (2 * (shape_width + shape_height));
      }
};
class Square: public Shape {
public: 
      // Class Square provided implementation of perimeter() function.
      int perimeter() {
          return (4 * shape_width);
      }
};

int main() {
    Rectangle R;
    Square S;

    R.width(10);
    R.height(5);
    S.width(10);

    cout << "Perimeter of Rectangle: " << R.perimeter() << endl;
    cout << "Perimeter of Square: " << S.perimeter() << endl;
    return 0;
}
