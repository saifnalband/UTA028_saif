/*
an example of Constructor overloading
*/
#include<iostream>
using namespace std;
class GTA {
public:
    int life;
    GTA(){
        life = 100;
        cout<<"Default contructor: "<<endl;
        cout << life << "\n";
    }
    // Parameterized constructor
    GTA(int x) { 
        /* Life assigned to value passed as an argument 
        while object declaration.*/
        life = x;
        cout<<"Contructor overloading: Parameterized constructor"<<endl;
        cout << life << "\n";
    }
};

int main() {
    GTA g0;
    /* Object c1 declared with argument 60, which 
    gets assigned to Life.*/
    GTA g1(60); 
    GTA g2(70);
    GTA g3(80);
    cout<<"------Main Funcion-------"<<endl;
    cout << g0.life << "\n";
    cout << g1.life << "\n";
    cout << g2.life << "\n";
    cout << g3.life << "\n";
    return 0;
}