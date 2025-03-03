#include<iostream>
using namespace std;
class student
{
int roll;
float gpa;
public:
student(int a,int b)
{
	roll=a;
	gpa=b;
	}	
student(student &a,student &b)
{
	roll=a.roll+b.roll;
	gpa=a.gpa+b.gpa;
	}	
	void display()
	{
		cout<<roll<<endl<<gpa;
	}
};
main()
{
student s1(10,5);
student s2(20,7);
student s3(s1,s2);
s3.display();
}
