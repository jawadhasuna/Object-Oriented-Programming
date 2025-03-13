#include<iostream>
using namespace std;
class shallow{
	int* data;
	public:
	shallow()//nullary constructor
	 {
		int d;
		cout<<"enter data:";
		cin>>d;
		data=new int(d);		 	
	 }
	  shallow(const shallow &other)
	    {
    	data=other.data;
		}
	void display()
	{
		cout<<"data:"<<*data;
	}
	~shallow()
	{
		delete data;
	}
	
};
main()
{
	shallow s1;
	shallow s2=s1;
	s2.display();
}