#include<iostream>
using namespace std;
class employee{
	protected:
	float basesal,bonus,overtime;
	public:
	employee(float b)
	{
	basesal=b;	
	}
	  virtual void calculatesalary()
	    {
		   cout<<"base salary can not be determined/n"; 	
		}		
};
class manager:public employee{
	public:
	manager(float base,float bon):employee(base)
	{
		bonus=bon;
	}
	 void calculatesalary()
	    {
		    	
		   cout<<"salary of manager: "<<basesal+bonus<<endl; 	
		}
};
class engineer:public employee{
	public:
	engineer(float base,float over):employee(base)
	{
		overtime=over;
	}
	 void calculatesalary()
	    {  	
		   cout<<"salary of engineer: "<<basesal+overtime<<endl; 	
		}
};

main()
{
employee* e[2];
manager m(100,20);
engineer en(100,30);
e[0]=&m;
e[1]=&en;
e[0]->calculatesalary();
e[1]->calculatesalary();	
}