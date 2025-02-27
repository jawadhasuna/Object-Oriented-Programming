#include<iostream>
using namespace std;
struct Student{
	string name,uni_name;
	int rollno,year,semester;
	void get()
	{
		cout<<"enter student name,uni name, roll number,year and semester: \n";
	   cin>>name>>uni_name>>rollno>>year>>semester;
	}
		void display()
	{
		cout<<"student name,uni name, roll number,year and semester: \n";
	   cout<<name<<" "<<uni_name<<" "<<rollno<<" "<<year<<" "<<semester<<endl;
	}
	
};
main()
{
Student s1,s2;
s1.get();
s2.get();
cout<<"student 1 diplayed:";
s1.display();
cout<<"student 2 diplayed:";
s2.display();	
}