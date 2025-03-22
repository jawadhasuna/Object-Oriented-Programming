#include<iostream>
using namespace std;
class obj{
	int a;
	mutable int b;
	public:
		obj(int n,int y)
			 {
			  	 a=n;
				   b=y;	
			 }
 void display()const
 	    {
 		    	cout<<a<<" "<<b;
 	}
	void modify	(int k)const
	{
		b=k;
	 } 
	   
};

main()
{
	 const obj o(10,20);
	cout<<"before modify\n";
	o.display();
	cout<<"\n after modify: ";
	o.modify(40);
	o.display();
}