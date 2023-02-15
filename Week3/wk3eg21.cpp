#include<iostream>
using namespace std;

class EquiTraingle{
    float a; // defaul private vairables 
    float circumference;
    float area;
public:
    void setA(float length){ // setter function
        a = length;
        circumference = a*3;
        area = (1.73 * a * a)/ 4;
    }
    friend void printResult(EquiTraingle);
};
void printResult(EquiTraingle e2){
    cout<<"circumference = " << e2.circumference << endl;
    cout <<"area = " << e2.area<<endl;
}
int main(){
    EquiTraingle e1;
    e1.setA(5);
    printResult(e1);
}