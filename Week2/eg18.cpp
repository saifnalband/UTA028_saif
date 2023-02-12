#include<iostream>
using namespace std;
class Enclosing 		             /* start of Enclosing class declaration */
{	 
	int x;
	class Nested 
    	{              			/* start of Nested class declaration */
	    	int y; 
	   	    void NestedFun(Enclosing e) {
		    	cout<<e.x; 	// works fine: nested class can access 
					// private members of Enclosing class
	   	 }	 
    }; 				// declaration Nested class ends here
}; 					// declaration Enclosing class ends here
int main(){
    Enclosing e1;
}
