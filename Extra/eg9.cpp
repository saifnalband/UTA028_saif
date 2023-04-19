#include<iostream>
using namespace std;
class Test{
static int i;
int num;
public:
void static getvalue(int);
Test(int x)
{
num=x;
}
void show()
{
cout<<"i="<<i<<endl;
cout<<"num="<<num<<endl;
	} 
};
void  Test :: getvalue(int x)
{
i = x;
i++;
cout<<i<<endl;
}
int Test::i;
int main()
{
Test::getvalue(0);
Test T1(10); 
T1.show(); 
}

