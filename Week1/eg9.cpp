#include <iostream>
using namespace std;
class Person{
public:         // Everything after public:  becomes public  
	int age;
	int setAge(int a){age = a;}
	int display() {
		cout <<"Age: " << age << endl;
	}
};
int main(){
    Person p1;    
    p1.setAge(20); 
    p1.display();   
    return 0;
} // everything public in class means it becomes a struct