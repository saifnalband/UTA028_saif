#include<iostream>
using namespace std;
class example{
private:
    int a;
public:
    example(int);     //Parameterized Constructor
    void display( );
};
example::example(int x){
    a = x;
} 
void example::display(){
    cout<<a<<"\n";
}
int main(){
       example e1(10);                       //implicit call
       example e2 = example(5);  //explicit call
       e1.display();
       e2.display();
       return 0;
}
