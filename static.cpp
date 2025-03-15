#include<iostream>

using namespace std;
class student{
	static int count;
	string name;
	public:
	student()
	{
		count++;
	}
	static display()
	{
	cout<<count;	
	}	
};
int student::count=0;

main()
{
student s1,s2,s3,s4,s5;
student::display();
}
