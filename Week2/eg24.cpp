#include<iostream>
using namespace std;
class Test{
		int rnum;
		void getRnum()	{
		cout<<"Enter roll number:"<<endl;
		cin>>rnum;
		}
	public:
		void hehe(void){
			getRnum();
			cout<<"In hehehe:"<<endl;
            cout<<"Roll Number is:"<<rnum;
		}
};
int main(){
		Test p1;
		p1.hehe();
		return 0;
}