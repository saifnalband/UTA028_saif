/*
 Function template with non-type parameter
*/
#include<iostream>
using namespace std;
template <class T, int size> 
void show(T a){
    cout<<a<<", "<<size;
}
int main(){
    show <char,10> ('c');
}
