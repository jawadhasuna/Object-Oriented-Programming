#include<iostream>
using namespace std;
class student{
	public:
	string name;
	int id,age;
	virtual float gpa()=0;
	virtual void display()=0;
};
class ugrad:public student{
	public:
	ugrad()
	{
	name="jawad";
	id=3;
	age=20;	
	}
	float gpa()
	{
	return 3.7;	
	}
	void display()
	{
	cout<<"ugrad:"<<name<<id<<age<<gpa();	
	}
};
class grad:public student{
	public:
	grad()
	{
	name="ali";
	id=1;
	age=27;	
	}
	float gpa()
	{
	return 4.0;	
	}
	void display()
	{
		cout<<"grad:"<<name<<id<<age<<gpa();	
	}
};
main()
{
	
student* s[2];
grad g;
ugrad ug;
s[0]=&g;
s[1]=&ug;
s[0]->display();
s[1]->display();		
}