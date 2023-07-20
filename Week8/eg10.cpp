/*
fstream example : works for both reading and writing
old data is replaced with new stream of data that is written

remidy using differenr modes
*/
#include<fstream>
#include<iostream>
using namespace std;
int main(){
    //fstream ob("eg10.txt"); 
    // fstream ob("eg9.txt",ios::in | ios:: out); default written modes
    fstream ob("eg9.txt",ios::in | ios:: out); // both are same default syntax
    ob<<"This is wednesday Morning Class!!!!";
    ob.close();
}