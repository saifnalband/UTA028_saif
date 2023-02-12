// Input char array with blanks
#include<iostream>
using namespace std;
int main(){
    char str[20];
    char ary[] = "Welcome to C++ tutorial";  
    cout << "Value of ary is: " << ary << endl;  
    cin.getline(str,sizeof(str));
    cout<<str<<endl;
    int age;  
    cout << "Enter your age: ";  
    cin >> age;
    cout << "Your age is: " << age << endl;  
}
