/*

*/
#include<iostream>
using namespace std;
class Account{
public:
    virtual void calculateinterest()=0;
    virtual void msg(){
        cout<<"This is Base class Account"<<endl;
    }
    void print(){
    cout<<"This is Abstract class"<<endl;
    }
};

class Savings:public Account{
public:
    int i;
    void calculateinterest(){
        cout<<"Savings account"<<endl;
        cout<<"Interest is: "<<i*2<<endl;
    }
    void tot(){
        cout<<"Enter amount in Savings: ";
        cin>>i;
        cout<<"Amount is: "<<i<<endl;
    }
    void msg(){
        cout<<"This is derived class Savings"<<endl;
    }
};

class Credit:public Account{
public:
    int j;
    void calculateinterest(){
        cout<<"Credit account"<<endl;
        cout<<"Interest is: "<<j*2<<endl;
    }
    void tot(){
        cout<<"Enter amount in Credit: ";
        cin>>j;
        cout<<"Amount is: "<<j<<endl;
    }
    Credit operator+(Savings obj){
        cout<<"In operator overloading function"<<endl;
        Credit temp;
        temp.j=obj.i+j;
        cout<<"Total amount of credit and savings: "<<temp.j<<endl;
        cout<<"Total interest of credit and savings is: "<<(temp.j)*2<<endl;
        cout<<"Total interest of credit and savings is: "<<(temp.j)*2;
        return temp;
}
};

class Checking:public Account{
public:
    int k;
    void calculateinterest(){
        cout<<"Checking Account"<<endl;
        cout<<"Interest is: "<<k*2<<endl;
    }
    void tot(){
        cout<<"Enter amount in Checking: ";
        cin>>k;
        cout<<"Amount is: "<<k<<endl;
    }
    void print(){
        cout<<"This is not abstract class"<<endl;
    }
};

int main(){
    Account *p[3];
    Checking ob1;
    Credit ob2,ob4;
    Savings ob3;
    p[0]=&ob1;p[1]=&ob2;p[2]=&ob3;
    p[2]->msg();//savings
    p[0]->print();//Account
    ob1.tot();
    ob2.tot();
    ob3.tot();
    ob2+ob3;
    for(int i=0;i<3;i++){
        p[i]->calculateinterest();
    }

//p[0]->calculateinterest();p[1]->calculateinterest();p[2]->calculateinterest();
//virtual function msg

    p[2]->msg();//savings
    p[0]->print();//Account 
}