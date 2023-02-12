/*
to Define Member Functions of Nested Class Outside the Enclosing Class
*/
#include <iostream>
using namespace std;
class Enclosing{
public:
    class Nested{
    public:
        void print();
    };
};
//Member function defined outside the scope of class
void Enclosing::Nested::print(){
    cout << "Nested class member outside " << endl;
}
int main(){
    Enclosing::Nested en;
    en.print(); //calling member function of nested class
    return 0;
}
