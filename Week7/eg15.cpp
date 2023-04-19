/*
Friend function on univary operator 
 Since the friend operator function is not passed
 a this pointer to the operand, but rather a copy of the operand,
 no changes made tothat parameter affect the operand that generated the call. 
 However, you can remedy this situation by specifying the parameter to 
 the friend operator function as a reference parameter. 
 This causes any changes made to the parameter inside the function to affect
the operand that generated the call
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
  loc operator=(loc op2);
  friend loc operator++(loc &op);
  friend loc operator--(loc &op);
};

// Overload assignment for loc.
loc loc::operator=(loc op2){
  longitude = op2.longitude;
  latitude = op2.latitude;
  return *this; // i.e., return object that generated call
}

// Now a friend; use a reference parameter.
loc operator++(loc &op){
  op.longitude++;
  op.latitude++;
  return op;
}

// Make op-- a friend; use reference.
loc operator--(loc &op){
  op.longitude--;
  op.latitude--;
  return op;
}
int main(){
  loc ob1(10, 20), ob2;
  ob1.show();
  ++ob1;
  ob1.show(); // displays 11 21
  ob2 =  ++ob1;
  ob2.show(); // displays 12 22
  --ob2;
  ob2.show(); // displays 11 21
  return 0;
}