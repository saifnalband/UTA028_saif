#include<iostream>
using namespace std;
class Exea{
public:
    //int a=0;
    int a;
    void addA(Exea E3){
     a= a+ E3.a;
    }
};
int main(){
  Exea E1, E2;
  E1.a=50;
  E2.a=100;
  cout<<"intial values"<<endl;
  cout<<"values of object 1: "<<E1.a<<endl;
  cout<<"values of object 2: "<<E2.a<<endl;
	E2.addA(E1);
  cout<<"new values:"<<endl;
  cout<<"values of object 1: "<<E1.a<<endl;
  cout<<" object 2: "<<E2.a<<endl;
  return 0;
}