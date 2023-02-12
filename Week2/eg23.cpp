/*
to Define Nested Class Outside the Enclosing Class
*/
#include <iostream>
using namespace std;
class Enclosing{
public:
    class Nested;
};
//Nested class defined outside the scope of enclosed class
class Enclosing::Nested{
public:
    void print(){
        cout << "Nested class outside enclosed class" << endl;
    }
};
int main(){
    Enclosing::Nested en;
    en.print(); //calling member function of nested class
    return 0;
}
