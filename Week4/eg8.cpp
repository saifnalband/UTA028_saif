/*
an example of this pointer
*/
#include<iostream>
#include<cstring>
using namespace std;
class person{
    char name[20];
	int age;
    public:
	void setData(const char *s, int a){	
        strcpy(name, s);
		age = a;	}
	person& greater(person &x){	
        if(x.age >= age)
            return x;
		else	
            return *this;
        }
	void display(){
        cout << name << " with age " << age;	
    }
};
int main(){	
    person p1,p2,p3;
	p1.setData("Abha", 21);
	p2.setData("Akhil", 29);
	p3.setData("Mitali", 31);
	person p = p1.greater(p2);
	cout << "Elder person is: ";
	p.display();
	p = p2.greater(p3);
	cout << endl << "Elder person is: ";
	p.display();
	return 0;
}

