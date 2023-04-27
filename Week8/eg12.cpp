/*
fstream example : works for both reading and writing
1. modes
*/
#include<fstream>
#include<iostream>
using namespace std;
int main(){
    fstream ob("eg9.txt",ios:: out | ios::ate); // ios::ate seek,peek
    ob<<"Lost";
    ob.close();
}