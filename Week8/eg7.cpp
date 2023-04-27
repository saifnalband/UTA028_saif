/*
reading of file using member function
get function checking if files exist
- to count the number of blanks
*/
#include<fstream>
#include<iostream>
using namespace std;
int main(){
    ifstream ob;
    ob.open("eg1.txt"); // check for eg1 first
    if(!ob){
        cout<<"FILE NOT FOUND";
        return -1;
    }
    char c; 
    int count = 0;
    ob.get(c);
    while (!ob.eof()){
        /* code */
        if(c==' ')
            count++;
        cout<<c;
        ob.get(c); 
    }
    cout<<"\nthe number of blanks are: " <<count;
    ob.close();
}