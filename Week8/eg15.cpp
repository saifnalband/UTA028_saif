/*
 Writing to file
*/
#include <fstream>
#include<iostream>
#include<string>
using namespace std;
int main () {
    // By default, it will be opened in normal write mode, ios::out.
    ofstream myfile("eg15.txt");
    myfile << "Hello Everyone \n";
    myfile << "This content was being written from a C++ Program";
    return 0;
}
