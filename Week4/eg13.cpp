/*
Using this Pointer in the Constructor
*/
#include<iostream>
using namespace std;
class Coordinate {
    private:
        int x;
        int y;
    public:
        Coordinate (int x, int y) {
            // Using this pointer inside the constructor
            // to set values in data members.
            this->x = x;
            this->y = y;
        }
        void printCoordinate() {
            cout<<"(x, y) = ("<<this->x<<", "<<this->y<<")"<<endl;
        }
};

int main () {
    // Passing x and y coordinate in the constructor.
    Coordinate pointA(2, 3), pointB(5, 6);
    
    // Pointing the coordinates.
    pointA.printCoordinate();
    pointB.printCoordinate();
    
    return 0;
}
