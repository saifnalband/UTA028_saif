#include<iostream>
using namespace std;
class Enclosing 			/* start of Enclosing class declaration */
{	 
	int x;
	class Nested 
    	{              			/* start of Nested class declaration */
	    	int y; 
	};				 // declaration Nested class ends here
	void EnclosingFun(Nested n) 
	{
		    	cout<<n.y;       // Compiler Error: y is private in Nested 	
    }	 			
}; 					// declaration Enclosing class ends here
int main(){}
