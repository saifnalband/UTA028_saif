/*
Output
*/
#include<iostream>
using namespace std;
float division(int x, int y) {  
   if( y == 0 ) throw 5;  
   return (x/y);  
}  
int main () {  
   float k = 0;  
   try {  
        k = division(25, k);  
        cout << k << endl;  
    }
   catch (const char* e) { 
        cout<< e << endl;
    }  
   catch(int i) {
        cout<<"caught i = "<<i<<endl;
    }
}
