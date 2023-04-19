/*
overloading ()
*/
#include <iostream>
using namespace std;
class loc {
    int longitude, latitude;
public:
    loc() {}
    loc(int lg, int lt) {
        longitude = lg;
        latitude = lt;
    }
    void show() {
        cout << longitude << " ";
        cout << latitude << "\n";
    }
    loc operator+(loc op2);
    loc operator()(int i, int j);
};
// Overload ( ) for loc.
loc loc::operator()(int i, int j){
    longitude = i;
    latitude = j;
    return *this;
}

// Overload + for loc.
loc loc::operator+(loc op2){
    loc temp;
    temp.longitude = op2.longitude + longitude;
    temp.latitude = op2.latitude + latitude;
    return temp;
}
int main(){
    loc ob1(10, 20), ob2(1, 1);
    ob1.show();
    ob1(7, 8); // can be executed by itself
    ob1.show();
    ob1 = ob2 + ob1(10, 10); // can be used in expressions
    ob1.show();
    return 0;
}