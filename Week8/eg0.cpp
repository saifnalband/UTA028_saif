/*
creating of file and writing in file using contructors
*/
#include<fstream>
using namespace std;
int main(){
    //ofstream("eg0.txt");
    ofstream ob("eg0.txt");// constructor method
    //ofstream ob("D:\\Software\\EST\\eg0.txt");// Another Folder
    ob<<"C++ File System"; // cout<<"C++"; in the file
}