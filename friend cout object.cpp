#include<iostream>

using namespace std;
class student{
	int roll;
	string name;
	public:
	student(string n,int r)
	{
		name=n;
        roll=r;
	}
	friend ostream& operator<<(ostream& out,student &s);
};
ostream& operator<<(ostream& out,student &s)
{
	out<<s.roll<<s.name;
	return out;
}
main()
{
	student s1("jawad",21);
	cout<<s1;
}
