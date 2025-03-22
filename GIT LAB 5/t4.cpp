#include<iostream>
using namespace std;
class obj{
	int a;
	public:
		obj(int n)
			 {
			  	 a=n;	
			 }
 void display()
 	    {
 		    	cout<<a;
 	}
	void modify	()const
	{
		a=20;
	 } 
		   
};
main()
{
	 obj o(10);
	o.display();
	o.modify();	
}
