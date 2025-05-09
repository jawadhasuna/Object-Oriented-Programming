#include<iostream>
using namespace std;
class Distance{
	int feet;
	double inches;
	public:
	Distance():feet(0),inches(0){}
	Distance(int f,double i):feet(f),inches(i){}
	void getdata()
	{
		cout<<"enter feet and inches:";
	    cin>>feet>>inches;
	}
	void showdata()
	{
		cout<<"feet:"<<feet<<" inches:"<<inches<<endl;
	}
	void operator++ ()
	{
	if(inches>=12)
        {
		feet++;
		}
		else
		inches++;	
	}
	void operator++ (int)
	{
	 if(inches>=12)
        {
		feet++;
		}
		else
		inches++;	
	}
	void operator-- ()
	{
	 if(inches<1)
	 {
 	feet--;
	 inches++;
     }
	 inches--;
	}
	void operator-- (int)
	{
	 if(inches<1)
	 {
 	 feet--;
	 inches++;
     }
	 inches--;	
	}
	Distance operator+(Distance &obj)
	{
		Distance temp;
		temp.feet=feet+obj.feet;
		temp.inches=inches+obj.inches;
		return temp;	  
	}
	Distance operator-(Distance &obj)
	{
	    Distance temp;
		temp.feet=feet-obj.feet;
		temp.inches=inches-obj.inches;
		return temp;	
	}
	Distance operator*(Distance &obj)
	{
	 Distance temp;
		temp.feet=feet*obj.feet;
		temp.inches=inches*obj.inches;
		return temp;	
	}
	bool operator==(Distance &obj)
	{
		if(feet==obj.feet)
		{
		 	return true;
		}
		 else
	    return false;	
	}
	void operator+=(Distance &obj)
	{
	   feet+=obj.feet;
       inches+=obj.inches;	
	}
	void operator-=(Distance &obj)
	{
	   feet-=obj.feet;
       inches-=obj.inches;	
	}
	void operator*=(Distance &obj)
	{
	feet*=obj.feet;
 	inches*=obj.inches;	
	}
};
main()
{
	Distance d(10,20);
	Distance a(30,40);
	Distance b(1,2);
	d.showdata();
	d++;
	++d;
	d--;
	--d;
	d.showdata();
	b=a+d;
	b.showdata();
	b=a-d;
	b=a*d;
	if(a==d)
	{
		cout<<"equal\n";
	}
	else
	{
	cout<<"unequal\n";	
	}
	b+=a;
}