
/*
Global Friend Function with one Class
*/
#include <iostream>
using namespace std;
// Creating a class named Travel.
class Travel{
private:
    // Make private data members, namely speed and distance.
    int speed;
    int distance;
public:
    // A member function to assign the private data member's values from the user.
    void set_values (int a, int b){
        speed = a;
        distance = b;
    }
    // A global friend function which calculates the time taken for the Travel.
    friend double findTimeofTravel (Travel); // Friend function
};

// Global Function to find the time of Travel not tied to class.
double findTimeofTravel (Travel t){
    // Calculate the time of Travel, i.e., distance/speed.
    // Implicity convert the int data type to double data type.
    double time  = (double)t.distance / (double)t.speed;
    return time;
}

// Main function
int main (){
    // Create an instance of the Travel class.
    Travel t;
    // Assign values to the instance t.
    t.set_values(10, 30);
    // Call the global friend function to calculate the time taken for the Travel.
    cout << "Time of Travel: " << findTimeofTravel (t) << " hrs" << endl;
    return 0;
}

