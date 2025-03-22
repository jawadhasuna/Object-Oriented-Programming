#include<iostream>
using namespace std;
class box{
	private:
		int length;
		int breadth;
		int height;
	public:
		box(int l,int b,int h)
		{length=l;
		breadth=b;
		height=h;
				   }
		int volume()
		{
		 	return length*breadth*height;
				   }	   	
	int compare(box &b)
	{
		return this->volume()>b.volume();
	}
	   
};

main()
{
	  box box1(10,20,30);
      box box2(50,60,70);
	if(box2.compare(box1))
	{
	cout<<"box 2 is bigger";	
	}
	else
	cout<<"box 1 is bigger";
}