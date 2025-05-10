#include<iostream>
using namespace std;
class shape{
	
	public:
	int rad,len,wid;
	shape(int r,int l,int w):rad(r),len(l),wid(w){}
	virtual void display()
	{
	cout<<"base display\n";	
			   }
	virtual int area()
	{
	cout<<"base area\n";	
			   }	   	
};
class circle:public shape{
	
	public:
	 circle(int r,int l,int w):shape(r,l,w){}
	  int area() override
	{
	return 3*rad*rad;	
			   }
	void display()override
	{
		cout<<"child display circle area:"<<area()<<endl;	
			   }
  
	  	
};
class rectangle:public shape{
	
		public:
	 rectangle(int r,int l,int w):shape(r,l,w){}
	  int area()override
	{
	return len*wid;	
			   }
	void display()override
	{
		cout<<"child display rec area:"<<area()<<endl;	
			   }
  
	  	
};
main()
{
shape *s;
circle c(2,4,5);
rectangle r(2,4,5);

s=&r;
s->area();
s->display();
s=&c;
s->area();
s->display();

}