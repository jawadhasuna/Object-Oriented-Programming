#include<iostream>
using namespace std;
const double pi=3.1416;
class Circle
{
	private:
	double radius,x,y;
	public:
	Circle()
	{
		radius=0;
		x=0;
		y=0;		
	}
	Circle(double r,double x1,double y1)
	{
		radius=r;
		x=x1;
		y=y1;		
	}
	void SetValues(float r,float x1,float y1)
	{
		radius=r;
		x=x1;
		y=y1;
	}
	double area()
	{
		return pi*radius*radius;
	}
	double circumference()
	{
	   return 2*pi*radius;	
	}		
	void print()
	{
		cout<<"x: "<<x<<", y: "<<y<<", radius: "<<radius<<endl;
	}
};
int main()
{
	Circle c;
	c.print();
	Circle c1(2.5,3,4);
	c1.print();
	cout<<"area of circle: "<<c1.area()<<endl;
	cout<<"circumference of circle: "<<c1.circumference()<<endl;
	c1.SetValues(3.6,5,7);
	return 0;
}