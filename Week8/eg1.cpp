/*
creating of file and writing in file using member function
*/
#include<fstream>
using namespace std;
int main(){
    ofstream ob;
    ob.open("eg1.txt");
    ob<<"C++ File System in eg1"; // cout<<"C++";
}