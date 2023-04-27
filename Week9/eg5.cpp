/*
    - // Class template with non-type parameter
*/
#include <iostream>
using namespace std;

template <class T, int n>
class Test {
    T var;
public:
    Test () {
        var = n; 
        cout<<"n = "<<n<<endl;
    }
    T divideBy2 () {
        return var/2;
    }
};
// T Test<T> :: divideBy2(){return var/2;}      outside class
int main(){
    Test <int,10> t1;
    Test <double,20> t2;
    cout<<t1.divideBy2()<<" "<<t2.divideBy2()<<endl;
}
