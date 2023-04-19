/*
an example of classes object
    -   array of objects
    -   Constructors in array of objects,
*/

#include<iostream>
#include<cstring>
using namespace std;
class Thapar{
    string studentName;
    int rollNo;
public:
    void setDetails(){
        cout<<"enter the student name"<<endl;
        cin>> studentName;
        cout<<"enter rollNo:"<<endl;
        cin>> rollNo;
    }
    void getDetails(){
        cout<<"Student Name :"<<studentName <<endl;
        cout<<"enter rollNo:"<< rollNo <<endl;
    }    
};
int main(){
    Thapar tr,*ptr;
    tr.setDetails();
    tr.getDetails();
    Thapar *arrTr = new Thapar[10];
    arrTr[0].setDetails();
    arrTr[0].getDetails();
    cout<<"*********"<<endl;
    for(int i= 0; i<3;i++){
        arrTr[i].setDetails();
    }
    ptr = arrTr;
    for(int i = 0; i<3; i++){
        ptr->getDetails();
        ptr++;
    }
    cout<<"*********"<<endl;
}