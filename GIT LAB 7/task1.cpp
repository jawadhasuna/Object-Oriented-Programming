#include<iostream>
using namespace std;
class staff
{
	int staffid;
	public:
	staff(int i)
	{
		staffid=i;
	}
	void getstaff()
	{
		cout<<"staff id:";
        cout<<staffid<<endl;
	}
	
};
class professor:public staff
{
	int depid;
	string depname;
	public:
	professor(int i,string n,int st):staff(st)
	{
		depid=i;
  		depname=n;
	}
	int getid()
	{
		return depid;
	}
	void getname()
	{
		cout<< depname<<endl;
	}
};
class visitingprofessor : public professor
{
 	  int courses;
 	  float salpercourse;
      float total;
	  public:
  	  visitingprofessor(int c,float s,int i,string n,int st):professor(i,n,st)
  	    {
  		   courses=c;
		   salpercourse=s; 	
		  }
	  float totalsal()
	  {
	  total=salpercourse*courses;
	  return total;	
	  }	
     void display()
     {
     cout<<"total salary of prof: "<<total<<endl;	
	 }

};
main()
{
visitingprofessor v(4,100.5,1,"physics",101);
cout<<"professor dep id:"<<v.getid()<<endl;	
cout<<"professor dep name:";
v.getname();
v.getstaff();
cout<<"visiting prof total sal:"<<v.totalsal();;
		
}