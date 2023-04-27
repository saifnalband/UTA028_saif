/*

*/
#include <fstream>
#include <iostream>
using namespace std;

int main() {
    fstream myFile("eg19.txt", ios::out);
    myFile << "123456789";

    myFile.seekp(5);
    myFile<<"*";
    myFile.close();

    myFile.open("myfile.txt", ios::in);
    
    myFile.seekg(3);
    std::string myline;
        while (myFile.good()) {
            std::getline (myFile, myline);
            std::cout << myline << std::endl;
        }
        myFile.close();
}
