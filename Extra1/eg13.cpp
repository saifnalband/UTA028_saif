/*
An example of
    -   Static data member and member function
    -   Constructors, Parameterized Constructors, 
    -   Constructor Overloading, 
    -   Constructors in array of objects, 
    -   Constructors with default arguments,
    -   friend function: Class Billdesk,function payFee
*/
#include<iostream>
#include<cstring>
using namespace std;
class BillDesk;
class Thapar{
    string studentName;
    int rollNo;
    string groupNo;
    static int counter;
    const double tutionFee = 450000;
    const double hostelFee = 50000;
    double totalFee;
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
    friend void payFee(Thapar, BillDesk);
};
class BillDesk{
    //double feeSurcharge = 1500.00
    double feeSurcharge;
public:
    BillDesk(){
        feeSurcharge = 1500.00;
    }
    BillDesk(double feeSC){
        feeSurcharge = feeSC;
    }
    friend void payFee(Thapar, BillDesk);
};
// function to compute fee
void payFee(Thapar tp, BillDesk bd){
    tp.totalFee = tp.hostelFee + tp.tutionFee + bd.feeSurcharge;
    cout<<"Fees is : " <<tp.totalFee<<endl;
}
int Thapar :: counter = 202201001;
int main(){
    Thapar tp3("Raj");
    BillDesk bd;
    tp3.getDetails();
    payFee(tp3,bd);
    BillDesk bd1(3000.00);
    tp3.getDetails();
    payFee(tp3,bd1);
}