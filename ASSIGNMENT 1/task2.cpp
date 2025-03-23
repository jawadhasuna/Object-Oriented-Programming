#include<iostream>
using namespace std;
class Rectangle
{
	private:
	int length,width;
	public:
	Rectangle()
	{
		length=1;
		width=1;		
	}
	Rectangle(int l,int w)
	{
		length=l;
		width=w;		
	}
	int area()
	{
		return length*width;
	}
	int perimeter()
	{
	   return (2*length)+(2*width);	
	}
	void set(int l,int w)
	{
		length=l;
		width=w;	
	}		
	void draw()
	{
		cout<<"*********\n*       *\n*       *\n*********\n";
	}
};
int main()
{
	Rectangle r1;
	r1.set(2,3);
	cout<<"area of rectangle r1:"<<r1.area()<<endl;
	Rectangle r2(5,6);
	cout<<"perimeter of rectangle r2:"<<r2.perimeter()<<endl;
	cout<<"draw rectangle:\n";
	r2.draw();
	return 0;
}