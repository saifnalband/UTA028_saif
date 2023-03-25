/*
virtual function: overriding
*/
/*
Calling a non-virtual function pointed by a poniter 
*/ 
#include <iostream>
#include <string>
using namespace std;
class Teacher{       // Base class
	string name;
	int numOfStudents;
	public:
	Teacher(const string & new_name,int nos){ // Constructor of base
			name=new_name;
			numOfStudents=nos;
	}
	virtual void print() const;
};

void Teacher::print() const {      // virtual function
	cout << "Name: "<< name << endl;
	cout << " Num of Students:"<< numOfStudents << endl;
}

class Principal : public Teacher{  // Derived class
	string SchoolName;
	public:
		Principal(const string & new_name,int nos, const string & sn)
					 :Teacher(new_name,nos){
			SchoolName=sn;
		}
		void print() const;
};

void Principal::print() const {    // virtual function
	Teacher::print();
	cout << " Name of School:"<< SchoolName << endl;
}

int main(){
	Teacher t1("Teacher 1",50);
	Principal p1("Principal 1",40,"TIET");
	Teacher *ptr;
	char c;
	cout << "Teacher (t) or Principal (p) "; 
	cin >> c;
	if (c=='t') 
		ptr=&t1;
	else    
		ptr=&p1;
	ptr->print();					// which print
	return 0;
}