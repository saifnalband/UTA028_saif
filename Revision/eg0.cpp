/*

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
        cout<<"enter the student name:"<<endl;
        cin>> studentName;
        cout<<" enter roll no:"<<endl;
        cin>>rollNo;
        cout<<" enter group no: "<<endl;
        cin>>groupNo;
    }
    void getDetails(){
        cout<<"Studnet name:"<<studentName<<endl;
        cout<<"Rollno: "<< rollNo<<endl;
        cout<<"group no :"<<groupNo<<endl;
    }
};
int main(){
    /* Thapar tr;
    tr.setDetails(); // setters 
    tr.getDetails(); // getters  display */
    Thapar *arrTr = new Thapar[10];
    Thapar *ptr;
    arrTr[3].setDetails();
    arrTr[3].getDetails();
    // looping for setting the values
    /* for(int i = 0; i <3; i ++){
        arrTr[i].setDetails();
    }
    // looping for displaying the values
    for(int i = 0; i <3; i ++){
        arrTr[i].getDetails();
    } */
    ptr = arrTr;
    for(int i = 0; i <2; i ++){
        ptr->setDetails();
        ptr++;
    }
    ptr = arrTr;
    // looping for displaying the values
    for(int i = 0; i <2; i ++){
        ptr->getDetails();
        ptr++;
    }
    return 0;
}