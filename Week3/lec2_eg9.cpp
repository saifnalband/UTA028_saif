#include<iostream>
using namespace std;
class example{
private:
    int a;
public:
    example();     //constructor declared
    void display( );
};
example:: example(){  //constructor defined
    a = 5;
} 
void example::display(){
    cout<<a;
}
int main(){
       example e1;                       //implicit call
       example e2 = example();  //explicit call
       e1.display();
       e2.display();
       return 0;
}

