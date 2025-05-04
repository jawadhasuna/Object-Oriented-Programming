#include<iostream>
using namespace std;
class B;//forward declaration
class A{
	int x;
	public:
	A():x(0){}
	void setx(int i)
	{
	x=i;	
	}
	friend void min(A,B);	
};
class B{	
	int y;
	public:
	B():y(0){}
	void sety(int i)
	{
	y=i;	
	}
	friend void min(A,B);	
};
void min(A a,B b)
{
if(a.x>b.y)	
{
	cout<<"A bigger";
}
else
cout<<"B bigger";
}
main()
{
A ap;
ap.setx(10);
B bp;
bp.sety(20);
min(ap,bp);	
}