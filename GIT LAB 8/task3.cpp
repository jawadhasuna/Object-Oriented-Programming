#include<iostream>
using namespace std;
class rectangle
{
	int area;
	public:
	rectangle(int x):area(x){}
	friend void increment(rectangle);
	
};
void increment(rectangle rec)
{
rec.area=rec.area+1;
cout<<rec.area;	
}

main()
{
rectangle r(500);
increment(r);	
}