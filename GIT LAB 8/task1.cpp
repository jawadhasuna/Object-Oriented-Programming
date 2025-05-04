#include<iostream>
using namespace std;
class circle;
class rectangle{
	private:
	float area;
   public:
   	rectangle(int x):area(x){}
   	friend bool compare(rectangle,circle);
   	
};
class circle{
	private:
	float area;
	public:
   	circle(int x):area(x){}
   	friend bool compare(rectangle,circle);
};
bool compare(rectangle a,circle b)
{
if(a.area>b.area)
{
	return true;
	}	
	else
	{
	return false;	
	}
}
main()
{
rectangle r(10);
circle c(20);
if(compare(r,c))
{
	cout<<"rectangle area larger\n";
	}	
	else
	{
	cout<<"circle area larger\n";	
	}
		
}