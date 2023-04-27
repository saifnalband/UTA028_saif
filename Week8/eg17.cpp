/*
tranc
*/
#include <fstream>
#include<iostream>
#include<string>

int main () {
    std::ofstream myfile("eg16.txt", std::ios_base::trunc);
    
    myfile << "Only this line will appear in the file.";
    return 0;
}
