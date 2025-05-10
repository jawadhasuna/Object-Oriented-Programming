#include<iostream>
using namespace std;
class geeks{
	public:
		   void	myfunc(int a)
		   {
		   	   	cout<<"base"<<a;
		   }
	   	   void	myfunc(double a)
		   {
		   	   	cout<<"base"<<a;
		   }
	       void	myfunc(int a,int b)
		   {
		   	   	cout<<"base"<<a<<b;
		   }
};
main()
{
geeks d;
d.myfunc(3);	
d.myfunc(3.443);
d.myfunc(4,5);	
}