/*
an example of this pointer
*/
#include <iostream>
using namespace std;
class ABC{
private:	
    char charray[10];
public:	
    void reveal(){ 
        cout << "\nMy object's address is " << this; 
    }
};
int main(){
    ABC w1, w2;
 	w1.reveal();
 	w2.reveal();
 	cout << endl;
 	return 0;
}

