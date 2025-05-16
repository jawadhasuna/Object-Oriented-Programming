#include<iostream>
using namespace std;
class shape{
	public:
	virtual float area()=0;
	virtual void display()=0;
};
class circle:public shape{
	public:
	float circlearea;
	 float area()
	  {
	    circlearea=3.15*3*2;
		return	circlearea;
	  }
	void display()
	{
		cout<<"circle area= "<<area();
	}
};
main()
{
circle c;
c.area();
c.display();		
}