#include<iostream>
using namespace std;
class a{
	public:
		int  m,k;
			 a(int a,int b):m(a),k(b)
		   {
		   	   	cout<<"m:"<<m<<" k:"<<k;
		   }
};

main()
{
	a cc(5,10);
}