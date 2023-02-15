#include <iostream>
using namespace std;
const int IDLE = 0;
const int INUSE = 1;
class C2; // forward declaration
class C1 {
	int status;
    public:
	void set_status(int state);
	int idle(C2 b);
};
class C2 {
	int status;
    public:
	void set_status(int state);
	friend int C1::idle(C2 b);
};
void C1::set_status(int state){	
    status = state;
}
void C2::set_status(int state){	
    status = state;
}
int C1::idle(C2 b){	
    if(status || b.status)
 		return 0;
	else
 		return 1;	
}
int main()
{	C1 x;
	C2 y;
	x.set_status(IDLE);
	y.set_status(IDLE);
	if(x.idle(y))
 		cout << "Screen can be used.\n";
	else
 		cout << "In use.\n";
	x.set_status(INUSE);
	if(x.idle(y))
 		cout << "Screen can be used.\n";
	else
 		cout << "In use.\n";
	return 0;
}

