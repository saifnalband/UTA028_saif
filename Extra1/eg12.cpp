/*
An example of
    -   Static data member and member function
    -   Constructors, Parameterized Constructors, 
    -   Constructor Overloading, 
    -   Constructors in array of objects, 
    -   Constructors with default arguments,
    -   Copy Contructors
*/
#include<iostream>
#include<cstring>
using namespace std;
class Thapar{
    string studentName;
    int rollNo;
    string groupNo;
    static int counter;
public:
    Thapar(){
        cout<<"default constructor"<<endl;
        studentName = "NULL";
        groupNo = "CO1";
        rollNo = counter;
        counter++;
    }
    Thapar(string sN){
        studentName = sN;
        rollNo = counter;
        groupNo = "CO1";
        cout<<"parameterised contrcutor"<<endl;
        counter++;
    }
    // copy contructors
    Thapar(const Thapar &tp){
        studentName = tp.studentName;
        rollNo = tp.rollNo;
        groupNo = tp.groupNo;
    }
    void getDetails(){
        cout<<"Student Name :"<<studentName <<endl;
        cout<<"enter rollNo:"<< rollNo <<endl;
        cout<<" Group no: "<<groupNo<<endl;
    }
    static void availRollno(){
        cout<<"available Rollno: "<<counter<<endl;
    }
};
int Thapar :: counter = 202201001;
int main(){
    //Thapar tp2,tp1;
    Thapar *arrTr = new Thapar[10];
    Thapar::availRollno();
    arrTr[3].getDetails();
    Thapar tp3("Raj");
    tp3.getDetails();
    Thapar::availRollno();
    Thapar tp4 = tp3;
    cout << "tp4 using copy constructor : \n";
    tp4.getDetails();
    Thapar::availRollno();
    Thapar tp5("Rahul");
    tp5.getDetails();
    Thapar::availRollno();
}