#include<iostream>
using namespace std;
class GTA{
    int life;
public:
    void setLife(int lf){
        life = lf;
    }
    void getLife(){
        cout<<"your life is : "<<life<<endl;
    }
};
int main(){
    GTA abc;
    abc.setLife(100);
    abc.getLife();
}