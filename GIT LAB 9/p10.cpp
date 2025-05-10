#include<iostream>
using namespace std;
class shape{
	
	public:
	int rad,len,wid;
	shape(int r,int l,int w):rad(r),len(l),wid(w){}
	void display()
	{
	cout<<"base display\n";	
			   }
	 void area()
	{
	cout<<"base area\n";	
			   }	   	
};
class circle:public shape{
	
	public:
	 circle(int r,int l,int w):shape(r,l,w){}
	void display()
	{
		cout<<"child display circle area:"<<area()<<endl;	
			   }
  int area()
	{
	return 3*rad*rad;	
			   }
	  	
};
class rectangle:public shape{
	
		public:
	 rectangle(int r,int l,int w):shape(r,l,w){}
	void display()
	{
		cout<<"child display rec area:"<<area()<<endl;	
			   }
  int area()
	{
	return len*wid;	
			   }
	  	
};
main()
{
circle c(2,4,5);
rectangle r(2,4,5);
r.area();
r.display();
c.area();
c.display();

}