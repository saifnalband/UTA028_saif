/*
an example of destructor
*/
#include<iostream>
using namespace std;
class ABC{
    int a;
public:
    ABC(int);  //Constructor
    void display();
    ~ABC();   //Destructor
  };   
ABC::ABC(int x){
    a=x;
}
void ABC::display(){
    cout<<"a="<<a;
}
ABC::~ABC(){ //Definition of Destructor
    cout<<"\nObject is destroyed";
}

int main(){
    ABC obj1(10);
    obj1.display();
    return 0;
}
 
