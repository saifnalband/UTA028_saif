/*
An example of
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
    Thapar(){
        cout<<"default conructor"<<endl;
        studentName = "NULL";
        rollNo = 0;
        groupNo = "NULL";
    }
    Thapar(string sN, int rNo=202201001, string groupNo="CO1"){
        studentName = sN;
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
    //Thapar tp; 
    Thapar tp2("Rahul"),tp1;
    //tp.getDetails();
    tp2.getDetails();    
    return 0;
}