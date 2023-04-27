/*
    this program copies contents from one file to another files
*/
#include<fstream>
#include<iostream>
using namespace std;
int main(){
    ifstream ob("eg1.txt"); // existing file from which the contents need to be copied
    ofstream ob1("eg9.txt"); // contents from another file(eg1.txt) would be copied here
    if(!ob){
        cout<<"FILE NOT FOUND";
        return -1;
    }
    char c; 
    ob.get(c);
    while (!ob.eof()){
        /* code */
        ob1<<c; // this works too ob1.put(c);
        ob.get(c); 
    }
    ob.close();
    ob1.close();
}