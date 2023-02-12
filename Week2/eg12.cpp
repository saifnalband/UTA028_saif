#include <iostream>
using namespace std;
class CDummy {
public:
    int isitme (CDummy* param);
};
int CDummy::isitme (CDummy* param){
    if (param == this) return true;
    else return false;
}

int main () {
    CDummy a;
    CDummy* b = &a;             // assigning address of a to b
    if ( b->isitme(&a) )        // Called with &a (address of a) instead of a
        cout << "yes, &a is b";
    return 0;
}