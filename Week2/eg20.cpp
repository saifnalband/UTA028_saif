/*
to Define Nested Class as Private Member of Enclosing Class
*/
#include <iostream>
using namespace std;
class Enclosing
{
private:
    class Nested{
    public:
        void print(){
            cout << "Nested class as private member" << endl;
        }
    };
    Nested n ;
public:
    void show(){
        n.print();
    }
};
int main(){
    Enclosing enc;
    enc.show();
    return 0;
}
