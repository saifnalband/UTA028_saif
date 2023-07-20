/*
fstream example : works for both reading and writing
1. creating the file
*/
#include<fstream>
#include<iostream>
using namespace std;
int main(){
    //fstream ob("eg9.txt");  // doesnt create the file
    fstream ob("eg9.txt",ios:: out); // both are same default syntax
    ob<<"Hello World";
    ob.close();
}