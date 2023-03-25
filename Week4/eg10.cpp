#include <iostream>

using namespace std;

int main(){
    int x = 10;
    cout << "X = "<< x << endl;
    int &y = x;    // y is a reference to x
    y = 20;        // This will change the value of x 
    cout << "X = "<< x;
    cout << "Y = "<< x;
    return 0;
}
