/*
an example 
    -   of pass the objects
    -   call value/ call by reference
    -   with array of objects
    -   returning of objects
    -   Constructors in array of objects,
*/
#include<iostream>
#include<cstring>
using namespace std;
class Thapar{
    string studentName;
    int rollNo;
    string groupNo;
public:
    void setDetails(){
        cout<<"enter the student name:";
        cin>> studentName;
        cout<<"enter rollNo:";
        cin>> rollNo;
        cout<<"enter Group No:";
        cin>> groupNo;
    }
    void getDetails(){
        cout<<"Student Name :"<<studentName <<endl;
        cout<<"enter rollNo:"<< rollNo <<endl;
        cout<<" Group no: "<<groupNo<<endl;
    }
    void updatedGroup(Thapar &tp){
        cout<<"enter Group No:";
        cin>>tp.groupNo;
        cout<<"Inside updated"<<endl;
        tp.getDetails();
        cout<<"*********"<<endl;
    }
/*     void updatedArrGroup(Thapar &th){
        for(int i=0;i<3;i++){
            
        }
    } */
};
int main(){
    Thapar tr,*ptr;
    Thapar *arrTr = new Thapar[10];
    /* cout<<"before udpating"<<endl;
    tr.setDetails();
    tr.getDetails();
    cout<<"*********"<<endl;
    tr.updatedGroup(tr);
    tr.getDetails(); */
    cout<<"*********"<<endl;
    for(int i= 0; i<3;i++){
        arrTr[i].setDetails();
    }
    /* for(int i= 0; i<3;i++){
        arrTr[i].updatedGroup(arrTr[i]);
    } */
    ptr = arrTr;
    for(int i= 0; i<3;i++){
        ptr->updatedGroup(*ptr);
        ptr++;
    }
    ptr = arrTr;
    for(int i = 0; i<3; i++){
        ptr->getDetails();
        ptr++;
    }
}