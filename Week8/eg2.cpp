/*
reading of file using member function
*/
#include<fstream>
#include<iostream>
using namespace std;
int main(){
    ifstream ob;
    ob.open("eg1.txt");
    char c;
    while (!ob.eof()){
        /* code */
        ob>>c;
        cout<<c;
    }
    ob.close();
}