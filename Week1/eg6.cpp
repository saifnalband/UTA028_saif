#include <iostream>
using namespace std;
struct Person{
    int age;                     //variable
    string name;
    void setName(string n){name = n;}
    void setAge(int a){age = a;}    //function
    void display() {
        cout <<"Age: " << age << endl;
        cout <<"Name:" << name<< endl;
    } //function
};
int main(){
    Person p1;    
    p1.setAge(35);
    p1.setName("Messi"); 
    p1.display();
    return 0;
}
