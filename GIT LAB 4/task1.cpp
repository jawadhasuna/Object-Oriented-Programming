#include<iostream>
using namespace std;
class Polygon{
	float length;
	float* width;
	public:
	Polygon(float l,float w)
	{
		width=new float;
		*width=w;
		length=l;		  
	}
	~Polygon()
	{
		delete width;
	}
	Polygon(const Polygon &other)
	{
	length=other.length;
	width=other.width;
	}
	void modify(float w)
	{
		*width=w;
	}
	void display(Polygon &two)
	{
		cout<<"first width:"<<*width<<endl;
		cout<<"second width:"<<*two.width;
	}
};
main()
{
Polygon one(33.6,22.4);
Polygon two(one);	
one.modify(40);	
one.display(two);
}