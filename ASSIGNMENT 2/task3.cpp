#include<iostream>
using namespace std;
class shape{
	protected:
	string color;
	int point; 
};
class twodshape:public shape
{
 	  protected:
	   int length,width;
       public:
       void	area()
       	{
       	cout<<"area:"<<length*width<<endl;	
		   }
};
class threedshape:public shape
{
 	  protected:
	   int length,width,height,radius;
       public:
       	threedshape(int l,int w,int h,int r)
       	{
		   length=l;
		   width=w;
		   height=h;
		   radius=r;
		   }
       void	volume()
       	{
       	cout<<"volume:"<<length*width*height<<endl;	
		   }

};
class triangle:public twodshape
{
	int base,height;
	public:
       void	area()
       	{
       	cout<<"area of triangle:"<<1/2*(base)*(height)<<endl;	
		   }
	
};
class circle:public twodshape
{
	protected:
	 int radius;
	  public:
	  void	area()
       	{
       	cout<<"area of circle:"<<3.14*(radius)*(radius)<<endl;	
		   }
	
};
class rectangle:public twodshape
{
	public:
	void area()
       	{
       	cout<<"area of rectangle:"<<length*width<<endl;	
		   }
	
};
class sqaure:public rectangle
{
	public:
	void area()
       	{
       	cout<<"area of square:"<<length*length<<endl;	
		   }
};
class sphere:public threedshape
{
	public:
		sphere(int l,int w,int h,int r):threedshape(l,w,h,r){}		
       void	volume()
       	{
       	cout<<"volume sphere:"<<radius*radius*radius*3.14*(4/3)<<endl;	
		   }
};
class cylinder:public threedshape
{
	public:
       void	volume()
       	{
       	cout<<"volume:"<<3.14*radius*radius*height<<endl;	
		   }
};
main()
{
	sphere s(10,20,30,2);
	s.volume();
}

