#include<iostream>
using namespace std;
class A{
	public:
		   void	myfunc()
		   {
		   	   	cout<<"base";
		   }
		   	   void	myfunc2()
		   {
		   	   	cout<<"base ";
		   }
	   	
};
class B:public A{
	public:
		   void	myfunc()
		   {
		   	   	cout<<"derived";
		   }
		   	   void	myfunc2(int a)
		   {
		   	   	cout<<"derived "<<a;
		   }
	   	
};
main()
{
B ball;
ball.myfunc();
ball.myfunc2(4);//method hiding
}