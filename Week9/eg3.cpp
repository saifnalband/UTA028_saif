/*
    - Overloading function templates
*/
#include<iostream>
using namespace std;
template <class T1, class T2>
void show(T1 a, T2 b){
    cout<<a<<", "<<b<<endl;
}
void show(int a, int b){
    cout<<"For integer cases"<<endl;
    cout<<a<<", "<<b<<endl;
}
int main(){
    show(100,"hello hello");
    show(3,3);
}
