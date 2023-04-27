/*
fstream example : works for both reading and writing
replace letter
*/
#include<fstream>
#include<iostream>
using namespace std;
int main(){
    fstream ob("eg13.txt"); 
    char c1, c2;
    cout<<"enter the charracter to be replaced: ";
    cin>>c1;
    cout<<"enter the chararcter to be inserted: ";
    cin>>c2;
    char c;
    ob.get(c);
    while(!ob.eof()){
        if(c==c1){
            int ptrPos = ob.tellg();
            cout<<ptrPos<<endl;
            ob.seekg(-1,ios::cur);
            ob.put(c2);
        }
        ob.get(c);
    }
    ob.close();
}