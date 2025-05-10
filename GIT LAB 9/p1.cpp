#include<iostream>
using namespace std;
class base{
	public:
	void	myfunc()
		   {
		   	   	cout<<"base";
		   }
};
class derived:public base
{
 	  public:
		void myfunc()
		   {
		   	   	cout<<"derived";
		   }
		  void  myfunc(int a)
		   {
		   	   	cout<<"derived"<<a;
		   }	
};
main()
{
derived d;
d.myfunc();	
	
}