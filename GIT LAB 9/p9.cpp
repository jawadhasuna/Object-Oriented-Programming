#include<iostream>
using namespace std;
class A{
	
	public:
	virtual void display()
	{
	cout<<"base display\n";	
			   }	   	
};
class B:public A{
	
	public:
	void display()
	{
		cout<<"child display\n";	
			   }
	  	
};
main()
{
B objb;
A *c=&objb ;
c->display();

}