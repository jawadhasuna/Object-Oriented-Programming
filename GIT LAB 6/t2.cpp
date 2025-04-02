#include<iostream>
using namespace std;
class complex{
	private:
	int real,img;
	public:
		complex(int r,int i)
	  {
		real=r;
		img=i;		   	   	   	
      }
      	complex()
	  {
				   	   	   	
      }
	complex operator * (const complex &c)
	{
		complex cc;
	cc.real=((real*c.real)-(img*c.img));
	 cc.img=((real*c.img)+(img*c.real));		
		return cc;
	}

};
main()
{complex c1(10,20);
complex c2(1,2);
complex c=c1*c2;
	
}