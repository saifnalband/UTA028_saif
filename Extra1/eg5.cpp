/*
call by value
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
    void updatedM(Rectangle ob){
        ob.length = ob.length + 10;
        ob.width = ob.width + 10;
        cout<<"----------------------"<<endl;
        cout<<"in updated method "<<endl;
        cout<<"length: "<<ob.length<<endl;
        cout<<"width: "<<ob.width<<endl;
        ob.display();
        cout<<"-----------------------"<<endl;
    }
    void display(){
        cout<<"length: "<<length<<endl;
        cout<<"width: "<<width<<endl;
    }
};

void printArea(Rectangle rect) {
    cout << "Area of rectangle: " << rect.area() << endl;
}

int main() {
    Rectangle r(5, 10);
    cout<<"in main method "<<endl;
    r.display();
    printArea(r); // pass r by value to the printArea() function
    r.updatedM(r);
    r.display();
    printArea(r);
    return 0;
}