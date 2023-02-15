/*
static function
*/
#include <iostream>
using namespace std;
class static_type {
    static int i;
public:
    static void init(int x) {
        i = x;
    }
    void show() {
        cout << i;
    }
};
int static_type::i; // define i
int main(){
// init static data before object creation
    static_type::init(100);
    static_type x;
    x.show(); // displays 100
    return 0;
}
