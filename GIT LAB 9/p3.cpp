#include<iostream>
using namespace std;
class A{
	public:
		   void	myfunc()
		   {
		   	   	cout<<"base";
		   }
	   	
};
class B:public A{
	public:
		   void	myfunc()
		   {
		   	   	cout<<"derived";
		   }
	   	
};
main()
{
B ball;
ball.A::myfunc();
}