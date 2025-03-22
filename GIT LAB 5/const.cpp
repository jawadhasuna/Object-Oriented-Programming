#include<iostream>
using namespace std;
class hotel{
	  public:
	    	int data;
			const int get()
			{
  	       return 10;	
					 }    	 
};
main()
{
	hotel a;
	a.get()=20;//error
}