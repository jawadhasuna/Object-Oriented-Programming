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
	void area()
	{
	cout<<"area of shape"<<endl;	
	}
	void display()
	{
		cout<<"display area"<<endl;
	}
};
class circle:public shape{
	int radius;
	public:
	circle(int r,string c):shape(c)
	{
		radius=r;
	}
	int area()
	{
	return 3.14*radius*radius;	
	}
	void display()
	{
	cout<<"color and area of circle is:"<<color<<" "<<area()<<endl;			
	}
};
class rectangle:public shape{
	int length,width;
	public:
	rectangle(int l,int w,string c):shape(c)
	{
		length=l;
        width=w;
	}
	int area()
	{
	return length*width;	
	}
	void display()
	{
	cout<<"color and area rectangle is:"<<color<<" "<<area()<<endl;	
	}
	
};
main()
{
circle c(3,"red");
rectangle r(3,4,"green");
c.area();
c.display();
r.area();
r.display();	
}