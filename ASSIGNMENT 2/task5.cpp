#include<iostream>
#include<cmath>
using namespace std;
class point{
	public:
	int x,y;
	public:
	point(int a,int b):x(a),y(b){}
	
};

class line{
	protected:
	point start,end;
	public:
	line(point a,point b):start(a),end(b){}
	float length()
	{
	return sqrt(pow(end.x-start.x,2)+pow(end.y-start.y,2));	
		}	
};
class triangle{
	line base,height,hypo;
	public:
	triangle(line b,line h,line hy):base(b),height(h),hypo(hy){}
    
	float area()
    {
     return base.length()*height.length()*0.5;	
	}
};
main()
{
 	  point p1(0, 0), p2(4, 0);

    line base(p1, p2);
    line height(p1, p2);
    line hypotenuse(p2, p1);
    triangle tri(base,height,hypotenuse);
    cout << "Area of Triangle: " << tri.area() << endl;
	
}