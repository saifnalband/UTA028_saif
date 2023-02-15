#include<iostream>
using namespace std;
class EquiTriangle{
    float a;
    float circumference;
    float area;
public:
    void setSide(float lenght){
        a = lenght;
        circumference = a *3;
        area = (1.73 * a * a)/4;
    }
    friend void printDisplay(EquiTriangle);
};
void printDisplay(EquiTriangle e2){
    cout<<"circumferece: " << e2.circumference<<endl;
    cout<<"area : " <<e2.area<<endl;
}

int main(){
    EquiTriangle e1;
    e1.setSide(5);
    printDisplay(e1);
}