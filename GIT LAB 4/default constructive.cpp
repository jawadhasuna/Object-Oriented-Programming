#include<iostream>
using namespace std;
class shallow{
	int d;
	float a;
	public:
		shallow()
				 {
				  d=0;
				  a=0;		 	
				 }
	void display()
	{
		cout<<"data:"<<d<<endl<<" a"<<a;
	}
	~shallow()
	{
	}
	
};
main()
{
	shallow s1;
	s1.display();
}