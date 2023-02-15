
/*
an example of default contructor
*/
#include<iostream>
using namespace std;
class GTA {
private: 
  int life; // life is declared private
public:
    //int life;
    // Default constructor.
    GTA() {
      /* Data member is defined with the help of the 
      default constructor.*/
      life = 100;
      cout<<"default contructor" <<endl;
    }
    void getLife(){
      cout<<"life: "<<life<<endl;
    }
};

int main() {
    // Object of class GTA declared.
    GTA g1;
    // Prints value assigned by default constructor.
    //cout<< g1.life; error
    g1.getLife();
    return 0;
}
