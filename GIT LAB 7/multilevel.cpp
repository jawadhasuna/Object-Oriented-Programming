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
};
class c:public b
{
	public:
		int l;
};
main()
{
	c cc;
	c.m=20;
}