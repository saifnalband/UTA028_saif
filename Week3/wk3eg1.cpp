#include <iostream>
using namespace std;
class Data{
    int num[20];
    int n;
    int largest(void); 
public:
    void get_data(void);               
    void display(void);                 
};
void Data::get_data(void){
    cout<<"Enter the total numbers(n):"<<endl;
    cin>>n;
    cout<<"Enter the number:"<<endl;
    for(int i=0;i<n;i++){
        cout<<"Enter the number"<<i+1<<";"; cin>>num[i];
    } 
}
int Data::largest(void){
    int max;
    max = num[0];
    for(int i=1;i<n;i++){
        if(max<num[i])
            max=num[i];
        }
    return max;
}
void Data::display(void){
    cout<<"The largest number:"<<largest()<<endl;
}//nesting
int main(){
    Data num;
    num.get_data();
    num.display(); 
}
