#include<iostream>
using namespace std;
class a{
	public:
		int  m;
};
class b:
{
	public:
		int k;
};
class c:public a,public b
{
	public:
		int l;
};
main()
{
	c cc;
	cc.m=10;
}