#include<iostream>
using namespace std;
class circle;
class rectangle{
	int area=100;
	public:
	friend void comp(rectangle,circle);	
};
class circle{
	int area=200;
	public:
	friend void comp(rectangle,circle);	
	
};
void comp(rectangle r,circle c)
{
if(r.area>c.area)
{
	cout<<"rec bigger";
	}	
	else
	cout<<"circle bigger";
}
main()
{
rectangle rec;
circle cr;
comp(rec,cr);
}