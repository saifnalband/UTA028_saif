#include<iostream>
using namespace std;

// Returns the absolute value of a float variable.
float abs_(float a){
    if (a < 0.0)
        a = -a;
    return a;
}

// Returns the absolute value of an integer variable.
int abs_(int a) {
     if (a < 0)
         a = -a;
    return a;
}

int main() {
    int a = abs_(-5);
    float b = abs_(3.4);
    
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    return 0;
}
