#include<iostream>
using namespace std;
class Rectangle{
	int length,width,a;
	public:
	Rectangle(int l,int w)
	{
	length=l;
	width=w;	
	}
	Rectangle()
	{	
	}
	void area()
	{
	cout<<"area using objects length and width: ";
	a=length*width;	
	cout<<a<<endl;
	}
	void area(int len,int wid)
	{
	cout<<"area using parameter length and width: ";
	a=len*wid;
	cout<<a<<endl;
	}
	bool operator == (const Rectangle &obj)
	{
		if(this->a==obj.a)
		{
			return true;
		}
		 else
	  return false;
	}
	
};
main()
{
Rectangle r1(10,20);
r1.area();	
Rectangle r2;	
r2.area(20,10);
   if(r1==r2)
   {
	cout<<"both rectangles are equal";
	}
	else
	cout<<"both rectangles are not equal";	
}