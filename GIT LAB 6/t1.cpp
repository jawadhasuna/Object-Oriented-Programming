#include<iostream>
using namespace std;
class rectangle{
	private:
	int length,width,a;
	public:
		rectangle(int l,int w)
	  {
		length=l;
		width=w;		   	   	   	
      }
      	rectangle()
	  {
				   	   	   	
      }
	void area()
	{
	a=length*width;	
	}
	void area(int l,int w)	
	{
		a=l*w;
    }
	bool operator == (const rectangle &r)
	{
		if(a==r.a)
         {
         	return true;
		 }
		   else
		   	   return false; 
		   }	   

};
main()
{rectangle r1(10,20);
r1.area();
rectangle r2;
r2.area(20,10);
 bool x=r1==r2;
cout<<x;	
}