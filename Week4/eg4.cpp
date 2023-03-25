#include <iostream>
using namespace std;
int main(){
    int *p, i;
    p = new int[10];
    for(i=0; i<10; i++ )
        p[i] = i;
    for(i=0; i<10; i++)
        cout << p[i] << " ";
    delete [] p; // release the array
    return 0;
} 