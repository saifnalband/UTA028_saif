/*
An exerise of passing of Objects:
- call by value 
- call by references
*/
#include<iostream>
#include<cstring>
using namespace std;
class Thapar{
    // private variables
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
    // complete the function which takes thapar object 
    // and updates the groupNo
    void updatedGroup(Thapar th){
        cout<<"enter the group no: ";
        cin>>th.groupNo;
        cout<<" inside the updated group:"<<endl;
        // call getDetails for checking the updates on current object
    }
};
int main(){
    Thapar tr;
    // setters 

    // getters  display */

    // Create Array of Thapar Objects using dynamic initilsation with size 7
    Thapar *arrTr = _____________;
    // create pointer of type Thapar

    // create objects for inddex 5
    

    // looping over the objects for setting the values using array indexing
    // keep group as COE1
    
    // looping for displaying the values using array indexing
    
    // assign addres of thapar array objects to pointer
    
    // looping over the objects for setting the values using pointer
    

    // assign addres of thapar array objects to pointer
    
    // looping for displaying the values using pointer

    // looping for updating the groupNo using array indexing/pointer
    // pass the object to function updateGroup
    
    // looping for displaying the values using pointer

    return 0;
}