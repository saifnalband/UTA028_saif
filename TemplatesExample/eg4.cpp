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
// roll no should be incremented whenever the object is created
class Thapar{
    string studentName;
    int rollNo;
    string groupNo;
    // 1. declare a static variable call as 'counter' 

public:
    Thapar(){
        /*complete the default contructor with student name NULL
        groupNo as CO1 and rollNo should be assigned to counter*/
        // write here 2.0
        cout<<"default constructor"<<endl;
    }
    Thapar(string sN){
        cout<<"parameterised contrcutor"<<endl;
        /* declared a parameteried contructors, groupNo=CO1*/
        //write here 3.0

    }
    // complete the copy contructors
    Thapar( ){
        // 4.0 write here 

    }
    void getDetails(){
        cout<<"Student Name :"<<studentName <<endl;
        cout<<"enter rollNo:"<< rollNo <<endl;
        cout<<" Group no: "<<groupNo<<endl;
    }
    /* 5.0 define a static function availRollno for checking the current rollno*/ 
    
};
// 6.0 static variable initialise with 202201001

// main function
int main(){
    // Thapar tp2,tp1;
    // dynamic initilazation of array of objects for Thapar
    Thapar *arrTr = new Thapar[10];
    // 7. call static function to check the availRollno
    
    // 8. call parameterized contructor
    
    // 9. display the contents of above object
    
    // 10. call static function to check the availRollno
    
    // 11. use copy contructors for tp4
    
    cout << "tp4 using copy constructor : \n";
    // 12. show the contenst of tp4
    
    // 13. call static function to check the availRollno
    
}
