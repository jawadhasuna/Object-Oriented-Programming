#include<iostream>
using namespace std;
class Employee{
	int empid;
	string name;
	float basicsalary;
	float netsalary;
	public:
	Employee(int i,string n,float s)
	{
	empid=i;
	name=n;
	basicsalary=s;	
	}
	void calculateNetSalary()
	{
		netsalary= (basicsalary)+(basicsalary*0.2)-(basicsalary*0.05);
	}
	void displayinfo()
	{
	cout<<"employee info is:\nid:"<<empid<<"\nname:"<<name<<"\nbasic salary:"<<basicsalary<<"\nnetsalary:"<<netsalary<<endl;	
	}
};
main()
{
Employee a(1,"ali",60000);
a.calculateNetSalary();
a.displayinfo();
Employee b(2,"jawad",100000);
b.calculateNetSalary();	
b.displayinfo();
}