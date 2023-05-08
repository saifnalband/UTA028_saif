/*
Classs ane binary files
*/
//classes with binary files
#include<iostream>
#include <fstream>
using namespace std;
class A{
	int a;
	char name [30];
	public:
	void write_data();
	void set_data(){
		cout<<"Enter the value of a";
		cin>>a;
		cout<<"Enter name";
		cin>>ws;
		cin.getline(name,30);
	}
	void read_data();
	void display(){
		cout<<"Value of a="<<a<<endl;
		cout<<"Name="<<name<<endl;
	}
	void modify_data();	
};
void A::write_data(){
	fstream ob ("bin7.dat",ios::out|ios::app|ios::binary);
	A ob1;
	ob1.set_data();
	ob.write((char*)&ob1,sizeof(ob1));
	ob.close();
}
void A::read_data(){
	fstream ob ("bin7.dat",ios::in|ios::binary);
	A ob1;
	ob.read((char*)&ob1,sizeof(ob1));
	while(!ob.eof()){
		ob1.display();
		ob.read((char*)&ob1,sizeof(ob1));
	}
	ob.close();
	
}
void A::modify_data(){
	int t;
	cout<<"Enter value of a i.e. is to be modified";
	cin>>t;
	fstream ob ("bin7.dat",ios::in|ios::binary|ios::out);
	A ob1;	
	ob.read((char*)&ob1,sizeof(ob1));//ob.get(c)
		while(!ob.eof()){
	        if(ob1.a==t){
		    cout<<"Enter new details";
		    ob1.set_data();
		    int pos=-1*sizeof(ob1);
		    ob.seekp(pos,ios::cur);
		    ob.write((char*)&ob1,sizeof(ob1));//ob<<c or ob.put(c)	
	    }		
		ob.read((char*)&ob1,sizeof(ob1));
	}
	ob.close();
}

int main(){
	A obj;
	//for(int i=0;i<3;i++)
	obj.write_data();
	obj.read_data();
	obj.modify_data();
	obj.read_data();
}
