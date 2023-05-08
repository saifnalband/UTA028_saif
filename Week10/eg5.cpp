/*
three dot excetion
Here, we want to throw exception
 (a random number as exception) if the age of the person is less than 18.
*/
#include <iostream>
using namespace std;
int main(){
   try{
        int age = 25;
        if (age <= 18){
            cout << "Access denied. Not for kids.";
        }
        else{
         // throwing any random value as exception as age is less than 18.
            throw 505;
        }
   }
   // Catching the thrown exception and displaying access denied!
    catch (...){
        cout << "Access denied! You need to be at least 18 years old." << endl;
    }
   return 0;
}
