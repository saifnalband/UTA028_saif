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
        cout << "\nMy object's address is " << this<<endl; 
    }
};
int main(){
    ABC w1, w2;
 	w1.reveal();
    cout<<"W1 address:"<<&w1<<endl;
 	w2.reveal();
    cout<<"W1 address:"<<&w2<<endl;
 	cout << endl;
 	return 0;
}