/*
an example of Parameterized Constructor
*/
#include<iostream>
using namespace std;
class GTA {
  public:
    int life;
    // Parameterized constructor
    GTA(int x) { 
    /* Life assigned to value passed as an argument 
    while object declaration.*/
      life = x; 
      cout<<"Parameterized Constructor"<<endl;
    }
};

int main() {
    /* Object c1 declared with argument 60, which 
    gets assigned to Life.*/
    GTA g1(60); 
    GTA g2(70);
    GTA g3(80);
    cout << g1.life << "\n";
    cout << g2.life << "\n";
    cout << g3.life << "\n";
    return 0;
}
