#include <iostream>
using namespace std;

// Creating a class named Coordinate.
class Coordinate{
private:
    // Make private data members, namely x and y.
    int x;
    int y;
public:
    // A member function to assign the private data member's values from the user.
    void set_values(int a, int b, int c){
        x = a;
        y = b;
        z = c;
    }
    // A member function to show values.
    void show(){
        cout << "x: " << x << endl;
        cout << "y: " << y << endl;
        cout << "z: " << z << endl;
    }
    // A global friend function which changes the values.
    friend void change_Values(Coordinate &);
protected:
    int z;
};
void change_Values(Coordinate & c){
    c.x = c.x + 5;
    c.y = c.y + 10;
    c.z = c.z + 20;
}
// Main function
int main (){
    // Create an instance of the Coordinates class.
    Coordinate c;
    // Assign values to the instance c.
    c.set_values (8, 9, 10);
    // Print the values of the instance c before changing the values.
    cout << "The values of Coordinate before changing are: " << endl;
    c.show();
    cout << endl;
    // Call the function change_Values to change the values.
    change_Values(c);
    // Print the values of the instance c after changing the values.
    cout << "The values of Coordinate after changing are: " << endl;
    c.show();
    cout << endl;
    return 0;
}

