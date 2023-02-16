/*
An example of Dynamic Initilization
Long-term fixed deposit system
*/ 
#include <iostream>
using namespace std;
class Fixed_deposit{
    long int P_amount; // Principal amount
    int Years; // Period of investment
    float Rate; // Interest rate
    float R_value; // Return value of amount 
public:
    Fixed_deposit(){ }
    Fixed_deposit(long int p, int y, float r=0.12);
    Fixed_deposit(long int p, int y, int r);
    void display(void);
};
Fixed_deposit :: Fixed_deposit(long int p, int y, float r){
    P_amount = p;
    Years = y;
    Rate = r;
    R_value = P_amount;
    for(int i = 1; i <= y; i++)
        R_value = R_value * (1.0 + r);
}
Fixed_deposit :: Fixed_deposit(long int p, int y, int r){
    P_amount = p;
    Years = y;
    Rate = r;
    R_value = P_amount;
    for(int i=1; i<=y; i++)
        R_value = R_value*(1.0+float(r)/100);
}
void Fixed_deposit :: display(void){
 cout << "\n"
 << "Principal Amount = " << P_amount << endl
 << "Return Value = " << R_value << endl;
}
int main(){
    Fixed_deposit FD1, FD2, FD3; // deposits created
    long int p; // principal amount
    int y; // investment period, years
    float r; // interest rate, decimal form
    int R; // interest rate, percent form
    cout << "Enter amount, period,interest rate(in percent)"<<endl;
    cin >> p >> y >> R;
    FD1 = Fixed_deposit(p,y,R);
    cout << "Enter amount, period, interest rate(decimal form)" <<endl;
    cin >> p >> y >> r;
    FD2 = Fixed_deposit(p,y,r);
    cout << "Enter amount and period" <<endl;
    cin >> p >> y;
    FD3 = Fixed_deposit(p,y);
    cout << "\nDeposit 1";
    FD1.display();
    cout << "\nDeposit 2";
    FD2.display();
    cout << "\nDeposit 3";
    FD3.display();
    return 0;
}