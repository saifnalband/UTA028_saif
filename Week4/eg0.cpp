/*
Array in class
*/
#include <iostream>
using namespace std;
#include<iostream>
using namespace std;
class array{
    int a[10];
public:
    void setVal(){
        cout<<"enter 10 digits"<<endl;
        for (int i = 0; i < 10; i++)	
            cin >> a[i];
        }
        void sort(){
            for (int i = 0; i < 9; i++)
                for (int j = 0; j < 10 - i - 1; j++){
                    if (a[j] > a[j + 1]){    
                        a[j] = a[j] + a[j + 1];
 			            a[j + 1] = a[j] - a[j + 1];
 			            a[j] = a[j] - a[j + 1];
                    }
                }
            }
    void display(){
        for (int i = 0; i < 10; i++)                   
            cout << a[i] << '\t';
    }
};
int main(){
    array Arr;
    Arr.setVal();
    Arr.sort();
	cout << "Sorted sequence is:\n";
    Arr.display();
}

