#include<iostream>
using namespace std;
struct Employee{
	string name,designation;
	void diplay()
	{
		cout<<name<<designation;
	}
	void read()
	{
		cout<<" enter name and desig:";
		cin>>name>>designation;
	}
	
};
main()
{
	Employee e;
	e.designation="engineer";
	e.name="ali";
	cout<<e.designation<<e.name;
	e.read();
	e.diplay();

}