/*
An Exerise consisting of
    -   Constructors, Parameterized Constructors, 
    -   Constructor Overloading, 
    -   Constructors with default arguments,
    -   Dynamic Inistilsation
*/
#include<iostream>
#include<cstring>
using namespace std;
class Thapar{
    string studentName;
    int rollNo;
    string groupNo;
public:
    // create a default contructors with default values
    // keep name as NULL, rollno as 202201001, and groupNo as CO13
    Thapar(){
        cout<<"default conructor"<<endl;

    }
    // create a parametried contructors with default values
    Thapar(){
        cout<<"parameterised contrcutor"<<endl;

    }
    void getDetails(){
        cout<<"Student Name :"<<studentName <<endl;
        cout<<"enter rollNo:"<< rollNo <<endl;
        cout<<" Group no: "<<groupNo<<endl;
    }
    void setDetails(){
        cout<<"enter the student name:";
        cin>> studentName;
        cout<<"enter rollNo:";
        cin>> rollNo;
        cout<<"enter Group No:";
        cin>> groupNo;
    }
};
int main(){
    // Create a default contructor and show its details


    // create a parameterised contructor and show its details
    return 0;
}