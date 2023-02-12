#include <iostream> 
using namespace std; 
namespace ns1 { int value() {return 5;}} 
namespace ns2 { int x=10; int value() {return 4;}} 
int main() { 
    cout << ns1::value() << endl;  
    cout << ns2::value() << endl;   
    cout<< ns2::x<<endl;  
}
