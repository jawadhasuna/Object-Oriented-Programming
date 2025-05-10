#include<iostream>
using namespace std;
class shape{
	protected:
	string color;
	public:
	shape(string c)
	{
		color=c;
	}
	virtual void area()
	{
	cout<<"area of shape"<<endl;	
	}
	virtual void display()
	{
		cout<<"display area"<<endl;
	}
};
class circle:public shape{
	int radius,ar;
	public:
	circle(int r,string c):shape(c)
	{
		radius=r;
	}
	void area() override
	{
	ar=3.14*radius*radius;	
	}
	void display()override
	{
	cout<<"color and area of circle is:"<<color<<" "<<ar<<endl;			
	}
};
class rectangle:public shape{
	int length,width,ar;
	public:
	rectangle(int l,int w,string c):shape(c)
	{
		length=l;
        width=w;
	}
	void area()override
	{
	ar=length*width;	
	}
	void display()override
	{
	cout<<"color and area rectangle is:"<<color<<" "<<ar<<endl;	
	}
	
};
main()
{
shape* s,*l;
circle c(3,"red");
rectangle r(3,4,"green");
s=&c;
s->area();
s->display();
l=&r;
l->area();
l->display();	
}