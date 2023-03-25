/*
we used a pointer to an object and an arrow operator.
*/
#include<iostream>
using namespace std;

class Complex{
    int real, imaginary;
public:
    void get_Data(){
        cout<<"Here the real part is "<< real<<endl;
        cout<<"Here the imaginary part is "<< imaginary<<endl;
    }
    void set_Data(int x, int y){
        real = x;
        imaginary = y;
    }
};
int main(){
    Complex *ptr = new Complex;
    ptr->set_Data(1, 54);
    ptr->get_Data(); 
    // Array of Objects
    Complex *ptr1 = new Complex[4]; 
    ptr1->set_Data(1, 4); 
    ptr1->get_Data();
    return 0;
}

