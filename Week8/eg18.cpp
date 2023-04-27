/*
tellp() returns the current position of put pointer,
which is used with output streams while writing the data to the file.

tellg() returns the current position of get pointer, 
which is used with input streams while receiving the data from the file.
*/
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file;

    // Open file in write mode.
    file.open("eg18.txt", ios::out);
    cout << "Position of put pointer before writing:" << file.tellp() << endl;

    file << "Hello Everyone"; // Write on file.

    cout << "Position of put pointer after writing:" << file.tellp() << endl;

    file.close();

    ifstream file1;
    file1.open("myfile.txt", ios::in); // Open file in read mode.

    cout << "Position of get pointer before reading:" << file1.tellg() << endl;

    int iter = 5;
    while (iter--) {
        char ch;
        file1 >> ch; // Read from file.
        cout << ch;
    }
    cout << endl << "Position of get pointer after reading:" << file1.tellg();
    file1.close();
}
