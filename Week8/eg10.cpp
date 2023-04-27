/*
fstream example : works for both reading and writing
*/
#include<fstream>
#include<iostream>
using namespace std;
int main(){
    //fstream ob("eg10.txt"); 
    fstream ob("eg9.txt",ios::in | ios:: out); // both are same default syntax
    ob<<"This is wednesday Morning Class!!!!";
    ob.close();
}