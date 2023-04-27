/*
reading of file using member function
get function 
*/
#include<fstream>
#include<iostream>
using namespace std;
int main(){
    ifstream ob;
    ob.open("eg1.txt"); 
    char c; 
    //ob.get(c);
    while (!ob.eof()){
        /* code */
        //cout<<c;
        ob.get(c); 
        cout<<c;
    }
    ob.close();
}