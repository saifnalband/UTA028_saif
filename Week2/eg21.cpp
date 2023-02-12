/*
to Define Nested Class as Public Member of Enclosing Class
*/
#include <iostream>
using namespace std;
class Enclosing{
//defined as public member of enclosing class
public:
    class Nested{
    public:
        void print(){
            cout << "Nested class as public member" << endl;
        }
     };
};
int main(){
    Enclosing::Nested en;
    en.print(); //calling member function of nested class
    return 0;
}
