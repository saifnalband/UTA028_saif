/*
reading of file using member function
get function checking if files exist
*/
#include<fstream>
#include<iostream>
using namespace std;
int main(){
    ifstream ob;
    ob.open("eg1.txt"); // check for eg1 first
    if(!ob){
        cout<<"FILE NOT FOUND";
        return -1;
    }
    char c; // you can do with string 
    ob.get(c);
    while (!ob.eof()){
        /* code */
        cout<<c;
        ob.get(c); 
    }
    ob.close();
}