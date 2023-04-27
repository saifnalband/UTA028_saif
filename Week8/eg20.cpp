/*
reading and writing from binary files
*/

#include<iostream>
#include <fstream>
using namespace std;
int main(){	
    int a[] = {10,23,3,7,9,11,25};
    fstream fs;
    fs.open("eg20.txt", ios::binary | ios::out);
    fs.write((char*) &a, sizeof(a));
    fs.close();
    for(int i = 0; i < 7; i++) 
        a[i] = 0;
    cout<<"printing array from a[]"<<endl;
    for(int i = 0; i < 7; i++) 
        cout << a[i] << " ";
    fs.open("eg20.txt", ios::in | ios::binary);
    cout<<" \nreading from the file: eg20.txt"<<endl;
    fs.read((char*) &a, sizeof(a));
    for(int i = 0; i < 7; i++) 
        cout << a[i] << " ";
    fs.close();	
}
