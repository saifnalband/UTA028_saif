#include <iostream>
using namespace std;
class Person{
    int age;
    public: 	// Everything before public:  is private
    void setAge(int a){
        age = a;
    }
    int display() {
        cout <<"Age: " << age << endl;
    }
};
int main(){
    Person p1;    
    p1.setAge(20); 
    p1.display();   
    return 0; 
}
