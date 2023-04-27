/*
reading of file using member function
getline function using string
*/
#include<fstream>
#include<iostream>
using namespace std;
int main(){
    ifstream ob;
    ob.open("eg1.txt"); // check for eg1 first
    string s; // you can do with string 
    while (!ob.eof()){
        /* code */
        getline(ob,s); 
        cout<<s<<endl;
    }
    ob.close();
}