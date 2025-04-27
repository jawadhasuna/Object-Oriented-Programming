#include<iostream>
using namespace std;
class a{
	public:
		int  m;
			 a()
		   {
		   	   	cout<<"constructor base\n";
		   }
};
class b:public a
{
	public:
		b()
		   {
		   	   	cout<<"constructor dervied\n";
		   }
		int k;
};

main()
{
	b cc;
	cc;
}