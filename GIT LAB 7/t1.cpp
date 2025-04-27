#include<iostream>
using namespace std;
class staff 
{ 
   protected:
   	int staffid;
   public: 
   staff(int a):staffid(a)
   {
   }
   void getid()
   {
   	cout<<"staff"<<staffid;
   }
}; 
class professor: public staff
{ 
   protected:
   	int depid;
   	string depname;
   public: 
   professor(int d,string n,int a):staff(a)
   {
   	depid=d;
   	depname=n;
   }
   int getdepid()
   {
   	return depid;
   }
   void getdepname()
   {
   	cout<<depname;
   }
};
class visitprofessor: public professor
{ 
   protected:
   	int nocourse;
   	float salcourse;
   public: 
   visitprofessor(int no,float sal,int d,string n,int a):professor(d,n,a)
   {
   	nocourse=no;
   salcourse=sal;
   }
   float totalsal()
   {
   	return nocourse*salcourse;
   }
   void display()
   {
   	cout<<"total:"<<nocourse*salcourse;
   }
   
};
main()
{
visitprofessor vp(2,333.4,33,"physics",10);
}