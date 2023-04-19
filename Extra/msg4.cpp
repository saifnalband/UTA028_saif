#include<iostream>
using namespace std;
class Tracker{
    int PersonID;
    int step_count;
    int stair_count;
public:
    static int trackers;
    Tracker(int id, int x=0, int y=0){
        PersonID = id;
        step_count = x;
        stair_count = y;
    }
    void incrementCount(int);
    friend void convertStep(Tracker);
    void displayCount(){
        cout<<"Enter the value to increment";
        int n;
        cin>>n;
        incrementCount(n);
        //convertStep(this);
        cout<<"person id:" <<PersonID<<endl;
        cout<<"steps:" << step_count<<endl;
        cout<<"stairs: " << stair_count<<endl;
    }
};
int Tracker:: trackers=0;
void Tracker::incrementCount(int n){
    step_count += n;
    stair_count += n;
}
void convertStep(Tracker &a){
    a.step_count += (a.stair_count)/2;
    a.stair_count = 0;
}
int main(){
    Tracker arr[10];
    for(int i =0;i<5;i++){
        cout<<"enter the id: ";
        int id;
        cin>>id;
        cout<<"do you know steps(0/1)";
        int c;
        cin>>c;
        if(c==0){
            Tracker ob(id);
            arr[i] = ob;
        }
        else{
            cout<<"enter the steps"<<endl;
            int st,sp;
            cin>>st>>sp;
            Tracker ob(id,st,sp);
            arr[i] = ob;
        }
        Tracker::trackers +=1;
    }
    cout<<"total elemnts: "<<Tracker::trackers;
    arr[0].displayCount();
    return 0;
}