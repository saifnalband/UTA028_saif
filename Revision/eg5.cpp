/*
An Exerise of
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
// 1. write a forward declaration for BillDesk
class BillDesk;
class Thapar{
    string studentName;
    int rollNo;
    string groupNo;
    // 2. declare a static variable call as 'counter'
    static int counter;
    // 3. declare const varible tutionFee(400000), hostalFee(50000) and totalFee with double as type
    const double tutitionFee = 400000;
    const double hostelFee = 50000;
    double totalFee;
public:
    Thapar(){
        /*complete the default contructor with student name NULL
        groupNo as CO1 and rollNo should be assigned to counter*/
        // 4. write here
        cout<<"default constructor"<<endl;
        studentName = "NULL";
        groupNo = "CO1";
        rollNo = counter;
        counter++;
    }
    Thapar(string sN){
        /* declared a parameteried contructors, groupNo=CO1*/
        //5. write here
        cout<<"parameterised contrcutor"<<endl;
        studentName = sN;
        groupNo = "CO1";
        rollNo = counter;
        counter++;
    }
    void getDetails(){
        cout<<"Student Name :"<<studentName <<endl;
        cout<<"enter rollNo:"<< rollNo <<endl;
        cout<<" Group no: "<<groupNo<<endl;
    }
    /*define a static function availRollno for checking the current rollno*/ 
    // 6. write here
    static void availRollNo(){
        cout<<"avaialble Rollno: "<<counter<<endl;
    }

    // declare a friend function called as payFee which takes Thapar and BillDesk as object
    // 7. write here
    friend void payFee(Thapar, BillDesk);
};
/*
    -   create a class called as Billdesk
    -   having feeSurechar(double)
    -   initilase with default value of 1500
    -   use paramertiersed contructors with feeSurcharge as argument
    -   declare the friend function
*/
// 8. write here
class BillDesk{
    double feeSurcharge;
public:
    BillDesk(){
        feeSurcharge = 1500;
    }
    BillDesk(double feeSC){
        feeSurcharge = feeSC;
    }
    friend void payFee(Thapar, BillDesk);
};


/*
9. complete the frined function to compute fee which is sumation of 
hostalFee, tutionfee and feeSurchage
*/
void payFee(Thapar tp, BillDesk bd){
    tp.totalFee = tp.hostelFee + tp.tutitionFee + bd.feeSurcharge;
    cout<<"Total payable fee is : " <<tp.totalFee<<endl;
}
// 10. static variable initilaization
int Thapar :: counter = 202201001;
int main(){
    Thapar tp3("Raj");
    BillDesk bd;
    tp3.getDetails();
    // 11. call friend function
    payFee(tp3,bd);
    // 12. pass 3000.00 as feeSurcharge Fee w
    BillDesk bd1(3000.00);
    // 13. display the 
    tp3.getDetails();
    // 14. call friend function
    payFee(tp3,bd1);
    Thapar tp4("Rahul");
    tp4.getDetails();
    Thapar::availRollNo();
}