#include<stdio.h>
struct Person{
    int age;                     //variable
    void setAge(int a){age = a;}    //function
    void display() {
        cout <<"Age: " << age << endl;
    } //function
};
int main(){
    Person p1;    
    p1.setAge(35); 
    p1.display();
    return 0;
}