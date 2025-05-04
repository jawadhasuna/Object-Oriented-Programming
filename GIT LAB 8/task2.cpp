#include<iostream>
using namespace std;
class car{
	int horsepower;
	string color;
	int model;
	friend class engine;
	public:
	car(int h,string c,int m):horsepower(h),color(c),model(m){}
	

};
class engine{
	public:
	void modify(car c)
	{
		c.horsepower=c.horsepower+100;
		c.color="blue";
		c.model=22332; 
	  cout<<"new horse power: "<<c.horsepower<<endl;
	  cout<<"new color: "<<c.color<<endl;
	  cout<<"new model: "<<c.model;    
	}
};

main()
{
car tesla(500,"red",411);
engine e;
e.modify(tesla);	
}