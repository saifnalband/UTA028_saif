#include<iostream>
using namespace std;
class update{
    int a;
    int b;
public:
    void set_data(){
        cout<<"enter values of a and b" <<endl;
        int x,y;
        cin>>x>>y;
        a = x;
        b = y;
    }
    void update_data( update A[n], int n){
        for(int i = 0; i<n; i++){
            A[i].a = A[i].a + 1;
            A[i].b = A[i].b + 1;
        }
    }
    void output(){
        cout<<"updated values of a and b:"<<endl;
        cout<<a<<" "<<b<<endl;
    }
};
int main(){
    int n;
    cout<<"enter how many objects are required"<<endl;
    cin>>n;
    update *up = new update[n];
    for(int i=0;i<n;i++){
        up->set_data();
        up[i]->set_data();
    }
    up[0]->update_data(up,n);
    for(int j = 0; j<n; j++){
        up[i]->output();
    }
    delete [] up;
}