/*
defining inline function within class
*/
#include <iostream>
using namespace std;
class myclass {
    int a, b;
public:
    // automatic inline
    void init(int i, int j) { a=i; b=j; }
    void show() { cout << a << " " << b << "\n"; }
};
int main(){
    myclass x;
    x.init(10, 20);
    x.show();
    return 0;
}
