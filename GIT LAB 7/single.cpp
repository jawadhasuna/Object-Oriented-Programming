#include<iostream>
using namespace std;
class a{
	public:
		int  m;
};
class b:public a
{
	public:
		int k;
}
main()
{
	b bb;
	b.m=10;
}