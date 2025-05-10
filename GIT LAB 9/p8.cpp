#include<iostream>
using namespace std;
class complex{
	
	public:
	int img=10;	 
	virtual void display()
	{
	cout<<"base display\n"<<img;	
			   }
	 void print()
	{
	cout<<"base print\n"<<img;		
			   }	   	
};
class real:public complex{
	
	public:
	int img=12;	 
	virtual void display()
	{
		cout<<"child display\n"<<img;	
			   }
	 void print()
	{
		cout<<"child print\n"<<img;	
			   }	   	
};
main()
{
real r;
complex *c=&r ;
c->display();
c->print();
}