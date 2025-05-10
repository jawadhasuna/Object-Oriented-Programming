#include<iostream>
using namespace std;
class complex{
	int img,real;
	public:
		   complex(int i,int r):img(i),real(r){}
		   complex(){}   
		   complex operator +(complex &obj)
		   		   {complex res;
		   			   res.real=real+obj.real;
					   	res.img=img+obj.img;
		                return res;					     			   
		   	   	
			 }
			 void print()
			 {
			  	   	cout<<img<<"+"<<real;
						}	   	
};

main()
{
complex c(10,4);
complex c2(1,3);
complex c3;
c3=c+c2;
c3.print();
}