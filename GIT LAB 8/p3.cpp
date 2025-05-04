#include<iostream>
using namespace std;
class A{
	int x=100;
	public:
	friend class B;	
};
class B{	
	public:
	void display(A &a)
	{
		cout<<a.x;
	}
	
};
main()
{
A ap;
B b;
b.display(ap);
}