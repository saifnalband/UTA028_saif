#include<iostream>
using namespace std;
namespace func{
	float divide(float x, float y){
		return(x/y);
	}
	float prod	(float x,float y);
}
float func::prod (float x, float y){
		return (x*y);
	}
int main ()
{
	cout<<func::divide(20,10)<<endl;
	cout<<func::prod(10,10)<<endl;
	
}