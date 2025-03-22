#include<iostream>
using namespace std;
class hotel{
	private:
    string name;
    mutable string order;
    int table;
    mutable int bill;
    public:
    	hotel(string n,string o,int t,int b)
    	{
    		name=n;
		   order=o;
		    table=t;
			bill=b;  
		}
		 void display()
		 	   {
			   	 cout<<name<<order<<table<<bill;       	
				}
	 void changeorder(string p,int b)const
	  {
	    	int t;
	    cout<<"enter time in mins?";
		    cin>>t;
		if(t<=10)
		{
		 	order=p;
 	        bill=b;
			}	
	  }
};

main()
{
hotel h("jawad","pizza",1,500);
h.display();
h.changeorder("curree",600);
h.display();
}