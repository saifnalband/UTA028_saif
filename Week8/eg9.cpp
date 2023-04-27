/*
fstream example : works for both reading and writing
*/
#include<fstream>
#include<iostream>
using namespace std;
int main(){
    ofstream ob("eg9.txt");
    ob<<"Hello World to C++!!";
    ob.close();
}