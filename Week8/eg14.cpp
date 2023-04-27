/*
Different modes
reading and writing on same file
// create a file 14.txt
*/
#include<fstream>
#include<iostream>
using namespace std;
int main(){
    char c;
    fstream ob("eg14.txt");
    ob<<"Hello World in C++";
    ob.seekg(2,ios::beg); 
    //ob.seekg(-2,ios::cur);
    //ob.seekg(2,ios::end);
    ob.get(c);
    cout<<c;
    ob.close();
}