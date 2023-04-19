/*
an example of Uniary Operator
*/
#include <iostream>  
using namespace std;  
class Distance{
private:
    int feet;  
    int inches;  
public:
    //Default constructor
    Distance();
    //Parameterized constructor
    Distance(int , int );
    // method to display distance
    void displayDistance();
    // overloaded unary minus (-) operator
    Distance operator-();
};
Distance::Distance(){
    feet = 0;
    inches = 0;
}
Distance::Distance(int f, int i){
    feet = f;  
    inches = i;
}
void Distance::displayDistance(){
cout << "F: " << feet << " I:" << inches <<endl;
}
Distance Distance::operator- (){
    feet = -feet;  
    inches = -inches;
    return Distance(feet, inches);
}
int main(){
    Distance D1(11, 10), D2(-5, 11);
    -D1;	// activates operator-() function
    D1.displayDistance(); // D1display
    -D2;	// activates operator-() function
    D2.displayDistance();	// display D2  
    return 0;
}



