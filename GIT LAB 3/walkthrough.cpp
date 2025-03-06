#include<iostream>
using namespace std;
class employee{
	private: int a,b,c;
	public: int d,e;
	employee()
	{
		
	}
	void setdata(int,int,int);//takes input
   void getdata()//gives output
   {
   	cout<<"value of a:"<<a<<endl;
   	cout<<"value of b:"<<b<<endl;
   	cout<<"value of c:"<<c<<endl;
   	cout<<"value of d:"<<d<<endl;
   	cout<<"value of e:"<<e<<endl;
   }

};
void employee::setdata(int p,int q,int r)
{
	a=p;
	b=q;
	c=r;
}
main()
{
employee harry;
harry.setdata(4,3,2);	
//harry.a=1; private so can not access
harry.d=7;	
harry.e=8;	
harry.getdata();
}