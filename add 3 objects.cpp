#include<iostream>
using namespace std;
class Employee{
	private:
	double salary;
	string name;
	public:
		Employee(double a)
		{
		 	salary=a;
		}
		 double getsal()
		 		 {
				   		   	return salary;
				  }
	 Employee operator +(Employee &e);
};
Employee Employee::operator +(Employee &e)	
{
	Employee total(0);
	total.salary=salary+e.salary;
	return total;
}
main()
{
Employee clerk(5000);
Employee driver(3000);
Employee shofer(2000);
Employee sum=clerk+shofer+driver;
cout<<sum.getsal();
}
