/*
Program to convert class Time to another class Minute
*/
#include<iostream>
using namespace std;
class Time{
    int hrs, min;
public:
    Time(int h,int m){
        hrs=h;
        min=m;
    }
    Time(){
        cout<<"\n Time's Object Created";
    }
    int getMinutes(){
        int tot_min = ( hrs * 60 ) + min ;
        return tot_min;
    }
    void display(){
        cout<<"Hours: "<<hrs<<endl ;
        cout<<" Minutes : "<<min <<endl ;
    }
};
class Minute{
    int min;
public:
    Minute(){
        min = 0;
    }
    void operator=(Time T){
        min=T.getMinutes();
    }
    void display(){
        cout<<"\n Total Minutes : " <<min<<endl;
    }
};
int main(){
    Time t1(2,30);
    t1.display(); 
    Minute m1;  
    m1.display();
    m1 = t1; // conversion from Time to Minute
    t1.display();
    m1.display();
    return 0;
}

