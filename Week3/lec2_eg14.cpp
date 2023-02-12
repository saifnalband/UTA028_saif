#include<iostream>
#include<string.h>
using namespace std;
class example{
    char  *name;
    int  length; 
public:
    example();
    example(char *);
    void display();
};
example::example(){
    length = 0;
    name = new char[length+1];
}
example::example(char *e){
    length = strlen(e);
    name = new char[ length+1];
    strcpy( name,e); 
}
void  example::display(){
 cout<<name<<endl;
}
int main(){
   char  *a= "Welcome to";
   example  e1(a), e2("C++"), e3("World");
   e1.display();
   e2.display();
   e3.display();    
   return 0;
} 

