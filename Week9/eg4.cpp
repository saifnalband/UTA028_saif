/*
    - an example of template class

    - syntax
    template <class T> class class-name 
    {
        // class body
    } 
    When a class uses the concept of template in C++, then the class is known as a generic class.
*/
#include <iostream>
using namespace std;

// Declaring a template class named Test.
template <class T>
class Test{
private:
   // A variable (answer) of type T so that it can store results of various types.
   T answer;
public:
   // Constructor of Test class.
   Test(T n) : answer(n){
      cout << "Inside constructor" << endl;
   }
   T getNumber(){
      return answer;
   }
};
// Main function
int main(){
   // Creating an object with an integer type.
   Test<int> numberInt(60);
   // Creating an object with double type.
   Test<double> numberDouble(17.27);
   // Calling the class method getNumber with different data types:
   cout << "Integer Number is: " << numberInt.getNumber() << endl;
   cout << "Double Number = " << numberDouble.getNumber() << endl;
   return 0;
}
