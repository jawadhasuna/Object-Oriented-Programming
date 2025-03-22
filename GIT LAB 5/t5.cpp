#include<iostream>
using namespace std;
class obj{
	int a;
	public:
		obj(int n)
			 {
			  	 a=n;	
			 }
 void display()const
 	    {
 		    	cout<<a;
 	}
	void modify	()
	{
		a=20;
	 } 
		   
};
main()
{
	 obj o(10);
	o.display();
	o.modify();	
	o.display();
	const obj b(30);
	b.display();
	b.modify();
}