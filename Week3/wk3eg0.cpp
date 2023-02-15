/*
Nesting of employee
*/
#include <iostream>
using namespace std;
class emp{
    float basic;
public:
    void display(){
        cout<<basic;
    }
    void takeData(){
        cin>>basic;
        // A member function of a class can be called by 
        // another member function of the same class 
        // takeData() is calling diaplay()
        display();
    }
};
int main(){
    emp e1;
    e1.takeData();
}