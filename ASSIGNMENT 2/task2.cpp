#include<iostream>
using namespace std;
class polynomial{
	  int max=100;
	  int coef[100];
	public:
	polynomial()
	{
		for(int i=0;i<max;i++)
		{
			coef[i]=0;	 			  		
		}
	}
	void set(int c,int exp)
	{
		if(exp>=0 &&exp<100)
		  {
			coef[exp]=c;	   							  	
		  }
	}
	void get(int exp)
	{
		if(exp>=0 &&exp<100)
		  {
			cout<<coef[exp]<<"x^"<<exp<<endl;	   							  	
		  }
	}
	polynomial operator+ (polynomial &obj)
	{
	 polynomial result;
	 for(int i=0;i<max;i++)
		{
	 result.coef[i]=coef[i]+obj.coef[i];	 			  		
		}
	 return result;	
	}
	polynomial operator- (polynomial &obj)
	{
	 polynomial result;
	 for(int i=0;i<max;i++)
		{
	 result.coef[i]=coef[i]-obj.coef[i];	 			  		
		}
	 return result;	
	}
	bool operator== (polynomial &obj)
	{
	for(int i=0;i<max;i++)
		{
		 	if(coef[i]>0 && obj.coef[i]>0)
	 	if(coef[i]==obj.coef[i])
		 {
		   return true;	
		  }
		  else
		  {return false;}	 			  		
		}	
	}
	polynomial operator*(polynomial &obj)
	{
	 polynomial result;
	 for(int i=0;i<max;i++)
		{
	 result.coef[i]=coef[i]*obj.coef[i];	 			  		
		}
	 return result;		
	}
	void operator+=(polynomial &obj)
	{
		
	   for(int i=0;i<max;i++)
		{
	 coef[i]+=obj.coef[i];	 			  		
		}
	}
	void operator-=(polynomial &obj)
	{
		
	  for(int i=0;i<max;i++)
		{
	 coef[i]-=obj.coef[i];	 			  		
		}
	}
	void operator*=(polynomial &obj)
	{
	 for(int i=0;i<max;i++)
		{
	 coef[i]*=obj.coef[i];	 			  		
		}
	}
	~polynomial()
	{
	 //destructor	
	}
};
main()
{

polynomial a,b,c;
a.set(2,2);
b.set(3,2);
a.get(2);
b.get(2);
	if(a==b)
	{
		cout<<"equal\n";
	}
	else
	{
	cout<<"unequal\n";	
	}
	c=a+b;
	c=a-b;
	c=a*b;
	a+=b;
	a-=b;
	a*=b;
}