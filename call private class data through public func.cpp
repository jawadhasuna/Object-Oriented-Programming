#include<iostream>
using namespace std;
class Employee{
	private:
	double salary;
	string name;
	int age;
	public:
		Employee(double s,string n,int a)
		{
		 	cout<<"constructor1"<<endl;
		 salary=s;
         name=n;
	      age=a;	
		}
	void display()
	{
	cout<<salary<<name<<age<<endl;	
	}
	
};
	
class shofer:public Employee{
	private:
		int id;
		float km;
   public:
   	shofer(double s,string n,int a,int i,float k):Employee(s,n,a)
		{
		 	cout<<"constructor2"<<endl;
		id=i;
		km=k;	
		}
};			
main()
{
shofer s(345.3,"ali",20,1,45.2);
s.display();
}
