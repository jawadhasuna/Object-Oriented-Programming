#include<iostream>
using namespace std;
class hotel{
	  string name;
	  mutable string placedorder;
	  int tableno;
	  mutable int bill;	
	public:
		hotel(string n,string plac,int no,int b)
  		{
		name=n;
		placedorder=plac;
		tableno=no;
		bill=b;	   	      	
	    }
	    void changePlacedOrder(string p,int t,int b)const
		    {
			   if(t<=10)
			   {
			   placedorder=p;
			   bill=b;			 		     
			   }
	 		   else  
				cout<<"order cant be replaced"<<endl; 
			}
	 	void displayorder()
		 	 {cout<<"person name: "<<name<<endl;
			   cout<<"order name: "<<placedorder<<endl;
			   cout<<"table:  "<<tableno<<endl;	  
			   cout<<"bill:  "<<bill<<endl;	 		    	
			  }	
};
main()
{
char c;
string p;
int b,t;
hotel order1("jawad","pasta",1,600);
order1.displayorder();
cout<<"do u want to change order: y or n:";
cin>>c;
if(c=='y')
{
cout<<"enter new order, time and bill:"<<endl;
cin>>p>>t>>b;
order1.changePlacedOrder(p,t,b);
cout<<"changed order: \n";
order1.displayorder();		
}
else
cout<<"order not changed";	
}