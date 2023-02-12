#include <iostream>
using namespace std;
class test{
    int code;
    static int count; // static member variable
    public:
    void setcode(void){
        code = ++count;
    }
    void showcode(void){
        cout << "object number: " << code << "\n";
    }
    static void showcount(void){ // static member function
        cout << "count: " << count << "\n";
    }
};
int test :: count;
int main()
{
    test t1, t2;
    t1.setcode();
    t2.setcode();
    test :: showcount(); // accessing static function
    test t3;
    t3.setcode();
    test :: showcount(); // accessing without creating the object
    t1.showcode(); 
    t2.showcode(); 
    t3.showcode();
    return 0;
}