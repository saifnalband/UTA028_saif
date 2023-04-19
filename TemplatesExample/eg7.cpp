/*
if you redefine a static member function in derived class 
call another overloaded function in base class are hidden
*/

#include<iostream>
using namespace std;
class Base{
  public:
  static void display(){
        cout<<"Base Static";
    }
    /* static void display(int k){
        cout<<" value of k:"<<k<< " static function in Base"<<endl;
    } */
};
class Derived1 : public Base {
public:
    static void display(){
        cout<<"in derived Static"<<endl;
    }
};
class Child : public Derived1 {};
int main(void){
  Child obj;
  Derived1 der;
  der.display();
  //der.display(3);
}