#include<iostream>
using namespace std;
class User{
	protected:
		int id;
		string name;
		string email;
		mutable int viewcount;
	public:
		static int usercount;
		User():id(0),name(""),email(""),viewcount(0){usercount++;}
		User(int i,string n,string e,int v):id(i),name(n),email(e),viewcount(v){usercount++;}
		void set()
		{
			cout<<"enter user id,name and email:";
			cin>>this->id>>this->name>>this->email;
		}
		virtual void displayprofile()
		{
			cout<<"base class\n";
		}
			
};
int User::usercount=0;
class Freelancer;
class Client:public User{
	string companyname;
	public:
	friend void viewDetails(Freelancer&obj1,Client&obj2);
	Client(int i,string n,string e,int v,string c):User(i,n,e,v){companyname=c;}
	void displayprofile()
		{
			cout<<"Client's details like company name,username,id and email:\n"<<companyname<<" "<<name<<" "<<id<<" "<<email<<endl;	
		}
};
class Freelancer:public User{
	float balance;
	public:
	Freelancer(int i,string n,string e,int v,float b):User(i,n,e,v){balance=b;}
	Freelancer operator+(Freelancer &obj)
	{
	Freelancer other;
	other.balance=this->balance + obj.balance;
	return other;	
	}
	Freelancer()
	{
		usercount++;
	}
	friend void viewDetails(Freelancer&obj1,Client&obj2);

	void displayprofile()
		{
			cout<<"Freelancer's details like username,id and email and balance:\n"<<name<<" "<<id<<" "<<email<<" "<<balance<<endl;	
		}
};
void viewDetails(Freelancer &obj1,Client &obj2)
{
		cout<<"freelancer's balance:"<<obj1.balance<<endl;
		cout<<"Client's company name:"<<obj2.companyname<<endl;	
}

int main()
{ 
User* u[2];
Client c1(1,"jawad","jawad@gmail.com",20,"jawadtech");
Freelancer f1(2,"Ali","Ali@gmail.com",300,4300.2);
Freelancer f2(3,"Suhaib","suhaib@gmail.com",400,3000.2);
viewDetails(f1,c1);
u[0]=&c1;
u[1]=&f1;
u[0]->displayprofile();
u[1]->displayprofile();
Freelancer f3=f1+f2;
viewDetails(f3,c1);
cout<<"total number of users created:"<<User::usercount;
return 0;
}
