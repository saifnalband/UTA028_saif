/*
An example of Exception handling 
Here, we want to throw exception (age as exception) 
if the age of the person is less than 18.
*/
#include <iostream>
using namespace std;
int main(){
    // checking if the age is more than 18 in tr block.
    try{
        int age = 15;
        if (age >= 18){
            cout << "Access granted.";
        }
        // Throwing custom exception if the age is less than 18.
        else{
            throw(age);
        }
    }
    // catching the thrown exception and displaying the desired output (access denied!)
    catch (int x){
        cout << "Access denied!, Age is: " << x << endl;
    }
    return 0;
}


