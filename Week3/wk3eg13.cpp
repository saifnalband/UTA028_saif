#include<iostream>
using namespace std;
class test{
    int *ptr;
public:
    test();
    test(int);
    void display();
};
test::test(){
    ptr=new int;
    *ptr=100;
}
test::test(int t){
    ptr=new int;
    *ptr=t;
}
void test::display(){
   cout<<"The value of object's pointer is:"<<*ptr<<endl;
}
int main(){
    test obj;
    test obj1(40);
    obj.display();
    obj1.display();
    return 0;
} 

