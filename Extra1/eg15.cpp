#include <fstream>
#include <iostream>
using namespace std;
int main ( int argc, char *argv[] )
{
    if ( argc != 2 )  // argc should be 2 for correct execution
        cout<<"You have to run it like: "<< argv[0] <<" <filename>\n";
    else {
        ifstream the_file ( argv[1] ); // We assume argv[1] is a filename to open
        if ( !the_file.is_open() )  // check to see if file opening succeeded
             cout<<"Could not open file\n";
        else {
                   char x;
                   while ( the_file.get ( x ) ) //the_file.get ( x ) returns false if the end of the file
                   cout<< x;                           // is reached or an error occurs.
                }
           }
}
