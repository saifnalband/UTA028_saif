#include <iostream>
using namespace std;
class Person{
int age;
public:
void setAge(int a){age = a;}  //setter function
int getAge() {return age;}  //getter function
};
int main(){
    Person p1;    
    p1.setAge(20); 
    cout <<"Age: " << p1.getAge() << endl;
}
