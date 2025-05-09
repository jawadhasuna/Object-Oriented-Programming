#include<iostream>
using namespace std;
class communitymember{
	protected:
	string name;
	int phone;
	public:
		void getinfo()
		 {
		cin>>name>>phone;	  		   	
		 }
		 void printinfo()
		 {
		cout<<name<<phone;	  		   	
		 }  
	
};  
class student:public communitymember
{
	protected:
	int roll;
	string uniname;
		public:
		void getinfo()
		 {
		   	cout<<"enter uni name and roll:\n";
		cin>>uniname>>roll;	  		   	
		 }
		 void printinfo()
		 {
		cout<<"uni name and roll is:"<<uniname<<roll<<endl;	  		   	
		 }  
};
class employee:public communitymember
{
	protected:
	int id;
	float salary;
		public:
		void getinfo()
		 {
		cin>>id>>salary;	  		   	
		 }
		 void printinfo()
		 {
		cout<<id<<salary;	  		   	
		 }  
};
class graduate:public student
{
	protected:
	string degree;
};
class undergraduate:public student
{
	protected:
	int year;	
	
};
class alumunus:public graduate,public employee
{
	protected:
	int year;
	int experience;
};
class faculty:public employee
{
	protected:
	string uni;
	string field;
};
class staff:public employee
{
	protected:
	int staffid;
};
class instructor:public faculty
{
	protected:
	string labs;
};
class professor:public faculty
{
	protected:
	string courses;
};
main()
{
student s;
s.getinfo();
s.printinfo();
}