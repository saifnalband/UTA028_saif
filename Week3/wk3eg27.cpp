/*
an example of default contructor
*/
#include<iostream>
using namespace std;
class GTA {
public:
    int life;
    // Default constructor not defined.
    // Compiler calls default constructor.
};

int main() {
    // Object g1 declared.
    GTA g1; 
    cout << g1.life;
    return 0;
}
