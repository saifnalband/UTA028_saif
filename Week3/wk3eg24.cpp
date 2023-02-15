#include<iostream>
using namespace std;

class Tempo{
public:
    int a;
    void addA(Tempo t1){
        a = a + t1.a;
    }
};
int main(){
    Tempo T2, T3;
    T2.a = 100;
    T3.a = 150;
    cout<<"T2 a:"<<T2.a<<endl;
    cout<<"T3 a:"<<T3.a<<endl;
    T2.addA(T3);
    cout<<"T2 a:"<<T2.a<<endl;
    cout<<"T4 a:"<<T3.a<<endl;
}