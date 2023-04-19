/*
Class To Basic 
*/
#include<iostream>  
using namespace std;  
class Time{
    int hrs, min;
public:
    Time (int ,int); // constructor
    operator int();	// casting operator function
    ~Time(){	// destructor
        cout<<"Destructor called..."<<endl;
    }
};
Time::Time (int a,int b){
    cout<<"Constructor called with two parameters..."<<endl; 
    hrs = a;
    min = b;
}
Time :: operator int(){
    cout<<"Class Type to Basic Type Conversion..."<<endl; 
    return(hrs*60+min);
}
int main(){
    int h, m, duration;  
    cout<<"Enter Hours ";
    cin>>h; 
    cout<<"Enter Minutes ";
    cin>>m;
    Time t(h,m); // contruct object
    duration = t; // casting conversion
    cout<<"Total Minutes are "<<duration<<endl;
    cout<<"2nd method operator overloading "<<endl;
    duration = t.operator int();
    cout<<"Total Minutes are "<<duration<<endl;
    return 0;
}
