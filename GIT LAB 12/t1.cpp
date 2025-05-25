#include<iostream>
using namespace std;
class person{
	public:
	string name;
	int id,contact;
	virtual void displayinfo()
	{
	cout<<"person name"<<name<<" id:"<<id<<endl;	
	}
};
class professor:public person{
	public:
	professor()
	{
		
	}
	professor(int i)
	{
		id=i;
	}
	void displayinfo()
	{
		cout<<"professor id is:"<<id;
	}
};
class student:public person{
string courses[3];
professor *p[3];	
public:
	student()
	{
		cout<<"enter courses and professors:";
	    for(int i=0;i<4;i++)
		    {
			   cin>>courses[i]>>p[i].name;  	
			}
	}
	void displayinfo()
	{
	cout<<"courses and professors are:";
	    for(int i=0;i<4;i++)
		    {
			   cout<<courses[i]<<" "<<p[i].name<<endl;  	
			}	
	}
};
main()
{
student s;
s.displayinfo();
professor pp(10);
pp.displayinfo();	

}