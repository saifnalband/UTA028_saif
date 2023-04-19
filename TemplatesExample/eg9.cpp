/*
overloading Using Friend functions
*/
#include <iostream>
using namespace std;

class loc {
    int longitude, latitude;
public:
    loc() {} // needed to construct temporaries
    loc(int lg, int lt) {
        longitude = lg;
        latitude = lt;
    }

    void show() {
        cout << longitude << " ";
        cout << latitude << "\n";
    }
    // 1. Declare friend function for operator overloading
    
};
// 2. Now, + is overloaded using friend function.

int main(){
    loc ob1(10, 20), ob2( 5, 30);
    ob1 = ob1 + ob2;
    ob1.show();
    return 0;
}
