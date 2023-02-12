/*
static function 
*/
#include<iostream>
using namespace std;
class shared{     
    static int resource;
public:
    static int getResource(){  
        if(resource)   
            return 0;
        else{
            resource = 1;
            return 1;      
        }
    }
    void freeResource(){
        resource = 0;
    }
};
int shared :: resource;
int main(){
   shared o1, o2;
   if(o1.getResource())
        cout << "\no1 has resource.";
   if(!shared :: getResource())
        cout << "\no2 access denied.";
   o1.freeResource();
   if(shared :: getResource())
        cout << "\no2 has resource.";
   return 0;
}

