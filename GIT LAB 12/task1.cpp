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
	professor(){}
	professor(int i,string n)
	{
		id=i;
		name=n;	 
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
	student(professor* a,professor* b,professor* c)
	{
		p[0]=a;
		p[1]=b;
		p[2]=c;	   
		cout<<"enter courses:";
	    for(int i=0;i<3;i++)
		    {
			   cin>>courses[i];  	
			}
	}
	void displayinfo()
	{
	cout<<"courses and professors are:";
	    for(int i=0;i<3;i++)
		    {
			   cout<<courses[i]<<" "<<p[i]->name<<endl;  	
			}	
	}
};
main()
{
professor p1(10,"jawad");
p1.displayinfo();	
professor p2(11,"hassan");
professor p3(12,"ali");
student s(&p1,&p2,&p3);
s.displayinfo();
}