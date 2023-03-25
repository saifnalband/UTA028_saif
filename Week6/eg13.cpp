/*
function overriding
Without virtual function.
*/
#include <iostream>
using namespace std;

class Polygon {
  protected:
    int height, width;
  public:
    void set_values (int x, int y){
        width = x; 
        height = y;
    }
    virtual int area (){
        return 0;
    }
};

class Rectangle: public Polygon {
public:
    int area (){
        return width * height;
    }
};
class Triangle: public Polygon {
public:
    int area (){ 
        return (width * height / 2);   
    }
};
int main () {
    Rectangle rect;
    Triangle trgl;
    Polygon poly;
    
    Polygon * ppoly1 = &rect;
    Polygon * ppoly2 = &trgl;
    Polygon * ppoly3 = &poly;
    
    ppoly1->set_values(10, 20); // rect.set_values (10, 20);
    ppoly2->set_values(10, 20);
    ppoly3->set_values(10, 20);
    cout << "Area of Rectangle is: " << ppoly1->area() << '\n';
    cout << "Area of Triangle is: " << ppoly2->area() << '\n';
    cout << "Area of Polygon is: " << ppoly3->area() << '\n';
    return 0;
}
