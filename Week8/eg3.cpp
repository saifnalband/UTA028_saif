/*
reading of file using member function
getline function
*/
#include<fstream>
#include<iostream>
using namespace std;
int main(){
    ifstream ob;
    ob.open("eg1.txt"); // check for eg1 first
    char c[300]; // you can do with string 
    while (!ob.eof()){
        /* code */
        ob.getline(c,300); // getline(c,300,'u'); default with \n
        cout<<c<<endl;
    }
    ob.close();
}