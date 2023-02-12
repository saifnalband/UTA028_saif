#include<iostream>
using namespace std;
struct Students{
    char Name[50];
    int roll_No;
    char degree[100];
    char Hostel[50];
    float CGPA;
};
void addDetails(struct Students *st){
    cout<<"Enter your name:";
    cin>>st->Name; // (*.)
    cout<<"Enter your roll no: ";
    cin>>st->roll_No;
}
void displayDetails(struct Students st){
    cout<<"Name:"<<st.Name<<endl;
    cout<<"Roll no:"<<st.roll_No<<endl;
}
int main(){
    Students s1;
    addDetails(&s1);
    displayDetails(s1);
    cout<<"end of main";
    return 0;
}