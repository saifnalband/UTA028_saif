/* 
Code
*/
#include <iostream>
using namespace std;
inline int max(int a, int b){
    return a>b ? a : b;
}
int main(){
    cout << max(10, 20);
    cout << " " << max(99, 88);
    return 0;
}

/* //Compiler Interpretation
#include <iostream>
using namespace std;
int main(){
    cout << (10>20 ? 10 : 20);
    cout << " " << (99>88 ? 99 : 88);
    return 0;
} */
