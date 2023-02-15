#include<iostream>
using namespace std;
class Thapar{
public:
    string name;
    int rollNo;
    double CGPI;
};
int main(){
    Thapar abc, xyz;
    abc.name = "abc";
    abc.rollNo = 001;
    abc.CGPI = 9.9;

    cout<<"Name: "<<abc.name<<endl;
    cout<<"Roll no: "<< abc.rollNo<<endl;
    cout<<"CGPI: "<< abc.CGPI<<endl;

    xyz.name = "xyz";
    xyz.rollNo = 002;
    xyz.CGPI = 8.9;

    cout<<"Name: "<<xyz.name<<endl;
    cout<<"Roll no: "<< xyz.rollNo<<endl;
    cout<<"CGPI: "<< xyz.CGPI<<endl;
}