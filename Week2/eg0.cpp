#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class item
{
    float number; // private by default
    float cost; // private by default
    public:
    void getdata(float a, float b); // prototype declaration,
    // to be defined
    // Function defined inside class
    void putdata(void)
    {
        cout << "number :" << setprecision(7) <<number << "\n";
        cout << "cost :" << setprecision(7)<<  cost << "\n";
 }
};
//........Member Function Definition ..............
void item :: getdata(float a, float b) // use membership label
{
    number = a; // private variables
    cost = b; // directly used
}
//.............Main Program................
int main()
{
    item x; // create object x
    double yy = 123.45;
    cout << "\n object x " << "\n";
    x.getdata(300.345,2222.195); // call member function
    x.putdata(); // call member function
    item y; // create another object
    cout << "\n object y" << "\n";
    y.getdata(2200.145, 1111.50);
    y.putdata();
    cout<<"yy: "<<setprecision(5)<<yy;
    return 0;
}