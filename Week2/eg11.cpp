/*
this is example of static functions
*/
#include <iostream>
using namespace std;
// creating a class
class myClass{
    public: 
    static int var; 
    // defining static function
    static int get_val(){
        return var;
    }
};
// initiazing static data member 
int myClass:: var = 5;
int main() {
   // calling static member function 
   // object of this class is not created yet 
   cout<<"Print the value of var: "<<myClass::get_val()<<endl;
   return 0;
}
