/*
This is example of static variables
*/
#include <iostream>
using namespace std;
class Test { 
    static int x;   
public: 
    static int y;    
    void func(int x)       {  // We can access class's static variable even if there is a local variable 
       cout << "Value of static x is " << Test::x; 
       cout << "\nValue of local x is " << x;   
    } 
}; 
int Test::x = 1;           // In C++, static members must be explicitly defined like this 
int Test::y = 2; 
int main() { 
    Test obj; 
    int x = 3 ; 
    obj.func(x); 
    cout << "\nTest::y = " << Test::y; 
    return 0; 
} 
