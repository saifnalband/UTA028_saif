
/*
Increment and decrement are done of an object pointer.
*/
#include <iostream>
using namespace std;

class My_Class {
    int num;
public:
    void set_number(int val) {num = val;}
    void show_number();
};

void My_Class::show_number(){
    cout << num << "\n";
}

int main(){
    My_Class object[2], *p;
    object[0].set_number(10);  // objects is accessed directly
    object[1].set_number(20);
    p = &object[0];  // the pointer is obtained to the first element
    p->show_number(); // value of object[0] is shown using pointer
    p++;  // advance to the next object
    p->show_number(); // show value of object[1] is shown using the pointer
    p--;  // retreat to previous object
    p->show_number(); // again value of object[0] is shown
    return 0;
}
