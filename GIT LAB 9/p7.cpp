#include<iostream>
using namespace std;
class complex{
	
	public:
	int img=10;	 	   	
};
class real:public complex{
	
	public:
	int img=12;	 	   	
};
main()
{
complex c= real();
cout<<c.img;
}