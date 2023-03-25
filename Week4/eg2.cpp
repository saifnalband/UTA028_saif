/*
Example using an object pointer.
*/
#include <iostream>
using namespace std;
class My_Class {
    int num;
public:
    void set_number(int value) {num = value;}
    void show_number();
};

void My_Class::show_number(){
    cout << num <<endl;
}

int main(){
    My_Class object, *p; // an object is declared and a pointer to it
    object.set_number(1); // object is accessed directly
    object.show_number();
    p = &object; //  the address of the object is assigned to p
    p->show_number(); // object is accessed using the pointer
    return 0;
}
