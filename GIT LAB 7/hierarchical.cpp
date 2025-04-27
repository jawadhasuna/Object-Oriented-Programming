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
class c:public a
{
	public:
		int l;
};
main()
{
	c cc;
	cc.m=10;
}