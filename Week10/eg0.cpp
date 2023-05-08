/*
an example without exception
*/
#include<iostream>
using namespace std;
float division(int x, int y){ 
    return (x/y);
}
int main(){
    int i=50, j=0;
    float k=0;
    k=division(i,j);
    cout<<k<<endl;     
} 
