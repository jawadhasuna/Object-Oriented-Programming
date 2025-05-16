#include<iostream>
using namespace std;
class student{
	protected:
	string name;
	int id,age,courses;
	float *grades,gpa=0;
	public:
	virtual void display()=0;
	virtual float calculategpa()=0;
};
class undergraduate:public student
{
	public:
	undergraduate(string n,int i,int a,int c)
	{
	name=n;
	id=i;
	age=a;
	courses=c;	
	}
  void display()
  	 {
  	cout<<"undergraduate name: "<<name<<" id: "<<id<<" age:"<<age<<"\nenter each course grade point:\n"<<calculategpa()<<endl;
 	 }
	float calculategpa()
	{
	grades=new float[courses];
	 for(int i=0;i<courses;i++)
	 {cin>>grades[i];
	  	gpa=gpa+(grades[i]*3); 
		 }
		   cout<<"\ngpa is: ";
	 	return gpa/(courses*3);
	}
};
class graduate:public student
{
	public:
	graduate(string n,int i,int a,int c)
	{
	name=n;
	id=i;
	age=a;
	courses=c;	
	}
void display()
  	 {
  	cout<<"graduate name: "<<name<<" id: "<<id<<" age:"<<age<<"\nenter each course grade point:\n"<<calculategpa()<<endl;
 	 }
	float calculategpa()
	{
	grades=new float[courses];
	 for(int i=0;i<courses;i++)
	 {
	  cin>>grades[i];
	  	gpa=gpa+(grades[i]*3); 
		 }
		   cout<<"\ngpa is: ";
	 	return gpa/(courses*3);
	}	
};
main()
{
string n;
int i,a,c;
cout<<"enter undergraduate name, id,age and courses:";
cin>>n>>i>>a>>c;
undergraduate ug(n,i,a,c);
cout<<"enter graduate name, id,age and courses:";
cin>>n>>i>>a>>c;
graduate g(n,i,a,c);
student *s[2];
s[0]=&ug;
s[1]=&g;
s[0]->display();
s[1]->display();	
}