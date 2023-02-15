#include<iostream>
using namespace std;
class Thapar{
    string name;
    int rollNo;
    double CGPI;
public:
    void setThapar(string na, int rn, double cg){
        name = na;
        rollNo = rn;
        CGPI = cg;
    }
    void getThapar(){
        cout<<"Name: "<<name<<endl;
        cout<<"Roll no: "<< rollNo<<endl;
        cout<<"CGPI: "<< CGPI<<endl;
    }
};
int main(){
    Thapar abc, xyz;
    abc.setThapar("Ronaldo",02, 8.9);
    abc.getThapar();
    xyz.setThapar("Messi",01,10.00);
    xyz.getThapar();
}