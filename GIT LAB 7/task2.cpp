#include<iostream>
using namespace std;
class shape
{
    protected:
	int l,w,a;
	public:
	shape(int len,int wid)
	{
	l=len;
	w=wid;	
	}
	void area()
	{
	a=l*w;	
	}
	void display()
	{
	cout<<"shape area"<<a;	
	}
	
};
class circle:public shape
{
	public:
	circle(int len,int wid):shape(len,wid)
	{	
	}
	void area()
	{
	a=l*w;	
	}
	void display()
	{
	cout<<"circle area:"<<a<<endl;	
	}
};
class rectangle : public shape
{
	public:
	rectangle(int len,int wid):shape(len,wid)
	{	
	}
	void area()
	{
	a=l*w;	
	}
	void display()
	{
	cout<<"rectangle area:"<<a<<endl;	
	}

};
main()
{
circle c(1,2);
rectangle r(3,4);
c.area();
r.area();
c.display();
r.display();		
}